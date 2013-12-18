/*----------------------------------------------------------------------------
 * File:  UserComponent.c
 *
 * UML Component Port Messages
 * Component/Module Name:  UserComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "Hotel_sys_types.h"
#include "UserComponent.h"
#include "TIM_bridge.h"
#include "LOG_bridge.h"
#include "HotelComponent.h"
#include "UserComponent_classes.h"

/*
 * Interface:  BookingProvider
 * Required Port:  UserInterface
 * To Provider Message:  addGuest
 */
void
UserComponent_UserInterface_addGuest( const i_t p_guestAge, c_t p_guestName[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t p_sessionID )
{
  HotelComponent_UserInterface_addGuest(  p_guestAge, p_guestName, p_sessionID );
}

/*
 * Interface:  BookingProvider
 * Required Port:  UserInterface
 * To Provider Message:  addServices
 */
void
UserComponent_UserInterface_addServices( Escher_UniqueID_t p_desiredID, Escher_UniqueID_t p_sessionID )
{
  HotelComponent_UserInterface_addServices(  p_desiredID, p_sessionID );
}

/*
 * Interface:  BookingProvider
 * Required Port:  UserInterface
 * From Provider Message:  available
 */
void
UserComponent_UserInterface_available( c_t p_aproximateArea[ESCHER_SYS_MAX_STRING_LEN], c_t p_description[ESCHER_SYS_MAX_STRING_LEN], const i_t p_id, const bool p_independent, const r_t p_price, Escher_UniqueID_t p_sessionID )
{
  UserComponent_SIMPLETEST * st=0;
  /* SELECT any st FROM INSTANCES OF SIMPLETEST WHERE ( SELECTED.sessionID == PARAM.sessionID ) */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any st FROM INSTANCES OF SIMPLETEST WHERE ( SELECTED.sessionID == PARAM.sessionID )" );
  st = 0;
  { UserComponent_SIMPLETEST * selected;
    Escher_Iterator_s iterstUserComponent_SIMPLETEST;
    Escher_IteratorReset( &iterstUserComponent_SIMPLETEST, &pG_UserComponent_SIMPLETEST_extent.active );
    while ( (selected = (UserComponent_SIMPLETEST *) Escher_IteratorNext( &iterstUserComponent_SIMPLETEST )) != 0 ) {
      if ( ( selected->sessionID == p_sessionID ) ) {
        st = selected;
        break;
      }
    }
  }
  /* IF ( not_empty st ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not_empty st )" );
  if ( ( 0 != st ) ) {
    /* GENERATE SIMPLETEST3:availableEvent(price:PARAM.price, description:PARAM.description, aproximateArea:PARAM.aproximateArea, independent:PARAM.independent, id:PARAM.id) TO st */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE SIMPLETEST3:availableEvent(price:PARAM.price, description:PARAM.description, aproximateArea:PARAM.aproximateArea, independent:PARAM.independent, id:PARAM.id) TO st" );
    { UserComponent_SIMPLETESTevent3 * e = (UserComponent_SIMPLETESTevent3 *) Escher_NewxtUMLEvent( st, &UserComponent_SIMPLETESTevent3c );
      e->p_price = p_price;      Escher_strcpy( e->p_description, p_description );      Escher_strcpy( e->p_aproximateArea, p_aproximateArea );      e->p_independent = p_independent;      e->p_id = p_id;
      Escher_SendEvent( (Escher_xtUMLEvent_t *) e );
    }
  }
  else {
    /* LOG::LogInfo( message:Error, no user session found ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:Error, no user session found )" );
    LOG_LogInfo( "Error, no user session found" );
  }
}

/*
 * Interface:  BookingProvider
 * Required Port:  UserInterface
 * From Provider Message:  confirmSignal
 */
void
UserComponent_UserInterface_confirmSignal( c_t p_message[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t p_sessionID )
{
  UserComponent_SIMPLETEST * st=0;
  /* LOG::LogInfo( message:( UC confSig:  + PARAM.message ) ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:( UC confSig:  + PARAM.message ) )" );
  LOG_LogInfo( Escher_stradd( "UC confSig: ", p_message ) );
  /* SELECT any st FROM INSTANCES OF SIMPLETEST WHERE ( SELECTED.sessionID == PARAM.sessionID ) */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any st FROM INSTANCES OF SIMPLETEST WHERE ( SELECTED.sessionID == PARAM.sessionID )" );
  st = 0;
  { UserComponent_SIMPLETEST * selected;
    Escher_Iterator_s iterstUserComponent_SIMPLETEST;
    Escher_IteratorReset( &iterstUserComponent_SIMPLETEST, &pG_UserComponent_SIMPLETEST_extent.active );
    while ( (selected = (UserComponent_SIMPLETEST *) Escher_IteratorNext( &iterstUserComponent_SIMPLETEST )) != 0 ) {
      if ( ( selected->sessionID == p_sessionID ) ) {
        st = selected;
        break;
      }
    }
  }
  /* IF ( not_empty st ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not_empty st )" );
  if ( ( 0 != st ) ) {
    /* GENERATE SIMPLETEST4:confirmEvent(message:PARAM.message) TO st */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE SIMPLETEST4:confirmEvent(message:PARAM.message) TO st" );
    { UserComponent_SIMPLETESTevent4 * e = (UserComponent_SIMPLETESTevent4 *) Escher_NewxtUMLEvent( st, &UserComponent_SIMPLETESTevent4c );
      Escher_strcpy( e->p_message, p_message );
      Escher_SendEvent( (Escher_xtUMLEvent_t *) e );
    }
  }
  else {
    /* LOG::LogInfo( message:UC confSig: session not found ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:UC confSig: session not found )" );
    LOG_LogInfo( "UC confSig: session not found" );
  }
}

/*
 * Interface:  BookingProvider
 * Required Port:  UserInterface
 * To Provider Message:  customerDetails
 */
void
UserComponent_UserInterface_customerDetails( c_t p_name[ESCHER_SYS_MAX_STRING_LEN], c_t p_phoneNumber[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t p_sessionID )
{
  HotelComponent_UserInterface_customerDetails(  p_name, p_phoneNumber, p_sessionID );
}

/*
 * Interface:  BookingProvider
 * Required Port:  UserInterface
 * From Provider Message:  errorSignal
 */
void
UserComponent_UserInterface_errorSignal( c_t p_message[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t p_sessionID )
{
  UserComponent_SIMPLETEST * st=0;
  /* LOG::LogInfo( message:( UC: errorSignal: ERROR:  + PARAM.message ) ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:( UC: errorSignal: ERROR:  + PARAM.message ) )" );
  LOG_LogInfo( Escher_stradd( "UC: errorSignal: ERROR: ", p_message ) );
  /* SELECT any st FROM INSTANCES OF SIMPLETEST WHERE ( SELECTED.sessionID == PARAM.sessionID ) */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any st FROM INSTANCES OF SIMPLETEST WHERE ( SELECTED.sessionID == PARAM.sessionID )" );
  st = 0;
  { UserComponent_SIMPLETEST * selected;
    Escher_Iterator_s iterstUserComponent_SIMPLETEST;
    Escher_IteratorReset( &iterstUserComponent_SIMPLETEST, &pG_UserComponent_SIMPLETEST_extent.active );
    while ( (selected = (UserComponent_SIMPLETEST *) Escher_IteratorNext( &iterstUserComponent_SIMPLETEST )) != 0 ) {
      if ( ( selected->sessionID == p_sessionID ) ) {
        st = selected;
        break;
      }
    }
  }
  /* IF ( not_empty st ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not_empty st )" );
  if ( ( 0 != st ) ) {
    /* GENERATE SIMPLETEST7:errorEvent(message:PARAM.message) TO st */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE SIMPLETEST7:errorEvent(message:PARAM.message) TO st" );
    { UserComponent_SIMPLETESTevent7 * e = (UserComponent_SIMPLETESTevent7 *) Escher_NewxtUMLEvent( st, &UserComponent_SIMPLETESTevent7c );
      Escher_strcpy( e->p_message, p_message );
      Escher_SendEvent( (Escher_xtUMLEvent_t *) e );
    }
  }
  else {
    /* LOG::LogInfo( message:UC: errorSignal:, no user session found ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:UC: errorSignal:, no user session found )" );
    LOG_LogInfo( "UC: errorSignal:, no user session found" );
  }
}

/*
 * Interface:  BookingProvider
 * Required Port:  UserInterface
 * From Provider Message:  extraServices
 */
void
UserComponent_UserInterface_extraServices( c_t p_aproximateArea[ESCHER_SYS_MAX_STRING_LEN], c_t p_description[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t p_id, const bool p_independent, const r_t p_price )
{
}

/*
 * Interface:  BookingProvider
 * Required Port:  UserInterface
 * To Provider Message:  paymentInfo
 */
void
UserComponent_UserInterface_paymentInfo( c_t p_info[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t p_sessionID )
{
  HotelComponent_UserInterface_paymentInfo(  p_info, p_sessionID );
}

/*
 * Interface:  BookingProvider
 * Required Port:  UserInterface
 * To Provider Message:  requestAvailableBookables
 */
void
UserComponent_UserInterface_requestAvailableBookables( Escher_Date_t p_fromDate, Escher_UniqueID_t p_sessionID, Escher_Date_t p_toDate )
{
  HotelComponent_UserInterface_requestAvailableBookables(  p_fromDate, p_sessionID, p_toDate );
}

/*
 * Interface:  BookingProvider
 * Required Port:  UserInterface
 * To Provider Message:  requestSession
 */
void
UserComponent_UserInterface_requestSession()
{
  HotelComponent_UserInterface_requestSession();
}

/*
 * Interface:  BookingProvider
 * Required Port:  UserInterface
 * To Provider Message:  selectBookable
 */
void
UserComponent_UserInterface_selectBookable( const i_t p_id, Escher_UniqueID_t p_sessionID )
{
  HotelComponent_UserInterface_selectBookable(  p_id, p_sessionID );
}

/*
 * Interface:  BookingProvider
 * Required Port:  UserInterface
 * From Provider Message:  session
 */
void
UserComponent_UserInterface_session( Escher_UniqueID_t p_bookingNumber, Escher_UniqueID_t p_sessionID )
{
  UserComponent_SIMPLETEST * st=0;
  /* LOG::LogInfo( message:Got session ID ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:Got session ID )" );
  LOG_LogInfo( "Got session ID" );
  /* SELECT any st FROM INSTANCES OF SIMPLETEST WHERE ( SELECTED.active == FALSE ) */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any st FROM INSTANCES OF SIMPLETEST WHERE ( SELECTED.active == FALSE )" );
  st = 0;
  { UserComponent_SIMPLETEST * selected;
    Escher_Iterator_s iterstUserComponent_SIMPLETEST;
    Escher_IteratorReset( &iterstUserComponent_SIMPLETEST, &pG_UserComponent_SIMPLETEST_extent.active );
    while ( (selected = (UserComponent_SIMPLETEST *) Escher_IteratorNext( &iterstUserComponent_SIMPLETEST )) != 0 ) {
      if ( ( selected->active == FALSE ) ) {
        st = selected;
        break;
      }
    }
  }
  /* ASSIGN st.active = TRUE */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN st.active = TRUE" );
  st->active = TRUE;
  /* GENERATE SIMPLETEST2:sessionEvent(bookingNumber:PARAM.bookingNumber, sessionID:PARAM.sessionID) TO st */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE SIMPLETEST2:sessionEvent(bookingNumber:PARAM.bookingNumber, sessionID:PARAM.sessionID) TO st" );
  { UserComponent_SIMPLETESTevent2 * e = (UserComponent_SIMPLETESTevent2 *) Escher_NewxtUMLEvent( st, &UserComponent_SIMPLETESTevent2c );
    e->p_bookingNumber = p_bookingNumber;    e->p_sessionID = p_sessionID;
    Escher_SendEvent( (Escher_xtUMLEvent_t *) e );
  }
}

/*
 * Interface:  StaffInterface
 * Required Port:  Port1
 * To Provider Message:  addFacility
 */
void
UserComponent_Port1_addFacility( c_t p_facilityID[ESCHER_SYS_MAX_STRING_LEN], const i_t p_facilityType )
{
  HotelComponent_StaffPort_addFacility(  p_facilityID, p_facilityType );
}

/*
 * Interface:  StaffInterface
 * Required Port:  Port1
 * To Provider Message:  addFacilityType
 */
void
UserComponent_Port1_addFacilityType( c_t p_approximateArea[ESCHER_SYS_MAX_STRING_LEN], c_t p_description[ESCHER_SYS_MAX_STRING_LEN], const i_t p_id, c_t p_name[ESCHER_SYS_MAX_STRING_LEN], const r_t p_price )
{
  HotelComponent_StaffPort_addFacilityType(  p_approximateArea, p_description, p_id, p_name, p_price );
}

/*
 * Interface:  StaffInterface
 * Required Port:  Port1
 * From Provider Message:  sendFacilityType
 */
void
UserComponent_Port1_sendFacilityType( const i_t p_facilityTypeID, c_t p_name[ESCHER_SYS_MAX_STRING_LEN] )
{
  UserComponent_SETUP * setup=0;
  /* SELECT any setup FROM INSTANCES OF SETUP */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any setup FROM INSTANCES OF SETUP" );
  setup = (UserComponent_SETUP *) Escher_SetGetAny( &pG_UserComponent_SETUP_extent.active );
  /* GENERATE SETUP1:facilityTypeAdded(facilityType:PARAM.facilityTypeID) TO setup */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE SETUP1:facilityTypeAdded(facilityType:PARAM.facilityTypeID) TO setup" );
  { UserComponent_SETUPevent1 * e = (UserComponent_SETUPevent1 *) Escher_NewxtUMLEvent( setup, &UserComponent_SETUPevent1c );
    e->p_facilityType = p_facilityTypeID;
    Escher_SendEvent( (Escher_xtUMLEvent_t *) e );
  }
}

/*
 * Interface:  CustomerInterface
 * Required Port:  Port2
 * To Provider Message:  checkInGuest
 */
void
UserComponent_Port2_checkInGuest( const i_t p_age, Escher_UniqueID_t p_bookingNumber, c_t p_name[ESCHER_SYS_MAX_STRING_LEN] )
{
  HotelComponent_CustomerPort_checkInGuest(  p_age, p_bookingNumber, p_name );
}

/*
 * Interface:  CustomerInterface
 * Required Port:  Port2
 * From Provider Message:  checkInReturn
 */
void
UserComponent_Port2_checkInReturn( Escher_UniqueID_t p_bookingNumber, c_t p_message[ESCHER_SYS_MAX_STRING_LEN], const bool p_success )
{
  UserComponent_CHECKINTEST * t=0;
  /* SELECT any t FROM INSTANCES OF CHECKINTEST WHERE ( SELECTED.bookingNumber == PARAM.bookingNumber ) */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any t FROM INSTANCES OF CHECKINTEST WHERE ( SELECTED.bookingNumber == PARAM.bookingNumber )" );
  t = 0;
  { UserComponent_CHECKINTEST * selected;
    Escher_Iterator_s itertUserComponent_CHECKINTEST;
    Escher_IteratorReset( &itertUserComponent_CHECKINTEST, &pG_UserComponent_CHECKINTEST_extent.active );
    while ( (selected = (UserComponent_CHECKINTEST *) Escher_IteratorNext( &itertUserComponent_CHECKINTEST )) != 0 ) {
      if ( ( selected->bookingNumber == p_bookingNumber ) ) {
        t = selected;
        break;
      }
    }
  }
  /* IF ( not PARAM.success ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not PARAM.success )" );
  if ( !p_success ) {
    /* LOG::LogInfo( message:( UC checkInReturn singal: failure,  + PARAM.message ) ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:( UC checkInReturn singal: failure,  + PARAM.message ) )" );
    LOG_LogInfo( Escher_stradd( "UC checkInReturn singal: failure, ", p_message ) );
  }
  /* GENERATE CHECKINTEST3:checkInReturnEvent(success:PARAM.success) TO t */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE CHECKINTEST3:checkInReturnEvent(success:PARAM.success) TO t" );
  { UserComponent_CHECKINTESTevent3 * e = (UserComponent_CHECKINTESTevent3 *) Escher_NewxtUMLEvent( t, &UserComponent_CHECKINTESTevent3c );
    e->p_success = p_success;
    Escher_SendEvent( (Escher_xtUMLEvent_t *) e );
  }
}

/*
 * Interface:  CustomerInterface
 * Required Port:  Port2
 * To Provider Message:  checkOutGuest
 */
void
UserComponent_Port2_checkOutGuest( const i_t p_age, Escher_UniqueID_t p_bookingNumber, c_t p_name[ESCHER_SYS_MAX_STRING_LEN] )
{
  HotelComponent_CustomerPort_checkOutGuest(  p_age, p_bookingNumber, p_name );
}

/*
 * Interface:  CustomerInterface
 * Required Port:  Port2
 * From Provider Message:  checkOutReturn
 */
void
UserComponent_Port2_checkOutReturn( Escher_UniqueID_t p_bookingNumber, c_t p_message[ESCHER_SYS_MAX_STRING_LEN], const bool p_success )
{
  UserComponent_CHECKOUTTEST * ct=0;
  /* SELECT any ct FROM INSTANCES OF CHECKOUTTEST WHERE ( SELECTED.bookingNumber == PARAM.bookingNumber ) */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any ct FROM INSTANCES OF CHECKOUTTEST WHERE ( SELECTED.bookingNumber == PARAM.bookingNumber )" );
  ct = 0;
  { UserComponent_CHECKOUTTEST * selected;
    Escher_Iterator_s iterctUserComponent_CHECKOUTTEST;
    Escher_IteratorReset( &iterctUserComponent_CHECKOUTTEST, &pG_UserComponent_CHECKOUTTEST_extent.active );
    while ( (selected = (UserComponent_CHECKOUTTEST *) Escher_IteratorNext( &iterctUserComponent_CHECKOUTTEST )) != 0 ) {
      if ( ( selected->bookingNumber == p_bookingNumber ) ) {
        ct = selected;
        break;
      }
    }
  }
  /* IF ( not PARAM.success ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not PARAM.success )" );
  if ( !p_success ) {
    /* LOG::LogInfo( message:( UC checkOutReturn signal: failure,  + PARAM.message ) ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:( UC checkOutReturn signal: failure,  + PARAM.message ) )" );
    LOG_LogInfo( Escher_stradd( "UC checkOutReturn signal: failure, ", p_message ) );
  }
  /* GENERATE CHECKOUTTEST2:checkOutReturnEvent(success:PARAM.success) TO ct */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE CHECKOUTTEST2:checkOutReturnEvent(success:PARAM.success) TO ct" );
  { UserComponent_CHECKOUTTESTevent2 * e = (UserComponent_CHECKOUTTESTevent2 *) Escher_NewxtUMLEvent( ct, &UserComponent_CHECKOUTTESTevent2c );
    e->p_success = p_success;
    Escher_SendEvent( (Escher_xtUMLEvent_t *) e );
  }
}

/*
 * Interface:  CustomerInterface
 * Required Port:  Port2
 * To Provider Message:  confirmSignal
 */
void
UserComponent_Port2_confirmSignal( c_t p_message[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t p_sessionID )
{
  HotelComponent_CustomerPort_confirmSignal(  p_message, p_sessionID );
}

/*
 * Interface:  CustomerInterface
 * Required Port:  Port2
 * From Provider Message:  endOfList
 */
void
UserComponent_Port2_endOfList( Escher_UniqueID_t p_sessionID )
{
  UserComponent_SIMPLETEST * st=0;
  /* SELECT any st FROM INSTANCES OF SIMPLETEST WHERE ( SELECTED.sessionID == PARAM.sessionID ) */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any st FROM INSTANCES OF SIMPLETEST WHERE ( SELECTED.sessionID == PARAM.sessionID )" );
  st = 0;
  { UserComponent_SIMPLETEST * selected;
    Escher_Iterator_s iterstUserComponent_SIMPLETEST;
    Escher_IteratorReset( &iterstUserComponent_SIMPLETEST, &pG_UserComponent_SIMPLETEST_extent.active );
    while ( (selected = (UserComponent_SIMPLETEST *) Escher_IteratorNext( &iterstUserComponent_SIMPLETEST )) != 0 ) {
      if ( ( selected->sessionID == p_sessionID ) ) {
        st = selected;
        break;
      }
    }
  }
  /* GENERATE SIMPLETEST5:endOfListEvent() TO st */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE SIMPLETEST5:endOfListEvent() TO st" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( st, &UserComponent_SIMPLETESTevent5c );
    Escher_SendEvent( e );
  }
}

/*
 * Interface:  CustomerInterface
 * Required Port:  Port2
 * To Provider Message:  o1
 */
void
UserComponent_Port2_o1()
{
  HotelComponent_CustomerPort_o1();
  HotelComponent_CustomerPort_o1();
  HotelComponent_CustomerPort_o1();
  HotelComponent_CustomerPort_o1();
  HotelComponent_CustomerPort_o1();
}

/*
 * Interface:  CustomerInterface
 * Required Port:  Port2
 * To Provider Message:  o1
 */
void
UserComponent_Port2_o1()
{
  HotelComponent_CustomerPort_o1();
  HotelComponent_CustomerPort_o1();
  HotelComponent_CustomerPort_o1();
  HotelComponent_CustomerPort_o1();
  HotelComponent_CustomerPort_o1();
}

/*
 * Interface:  CustomerInterface
 * Required Port:  Port2
 * To Provider Message:  o1
 */
void
UserComponent_Port2_o1()
{
  HotelComponent_CustomerPort_o1();
  HotelComponent_CustomerPort_o1();
  HotelComponent_CustomerPort_o1();
  HotelComponent_CustomerPort_o1();
  HotelComponent_CustomerPort_o1();
}

/*
 * Interface:  CustomerInterface
 * Required Port:  Port2
 * To Provider Message:  o1
 */
void
UserComponent_Port2_o1()
{
  HotelComponent_CustomerPort_o1();
  HotelComponent_CustomerPort_o1();
  HotelComponent_CustomerPort_o1();
  HotelComponent_CustomerPort_o1();
  HotelComponent_CustomerPort_o1();
}

/*
 * Interface:  CustomerInterface
 * Required Port:  Port2
 * To Provider Message:  o1
 */
void
UserComponent_Port2_o1()
{
  HotelComponent_CustomerPort_o1();
  HotelComponent_CustomerPort_o1();
  HotelComponent_CustomerPort_o1();
  HotelComponent_CustomerPort_o1();
  HotelComponent_CustomerPort_o1();
}

/*
 * Interface:  CustomerInterface
 * Required Port:  Port2
 * To Provider Message:  o2
 */
void
UserComponent_Port2_o2()
{
  HotelComponent_CustomerPort_o2();
  HotelComponent_CustomerPort_o2();
  HotelComponent_CustomerPort_o2();
  HotelComponent_CustomerPort_o2();
  HotelComponent_CustomerPort_o2();
}

/*
 * Interface:  CustomerInterface
 * Required Port:  Port2
 * To Provider Message:  o2
 */
void
UserComponent_Port2_o2()
{
  HotelComponent_CustomerPort_o2();
  HotelComponent_CustomerPort_o2();
  HotelComponent_CustomerPort_o2();
  HotelComponent_CustomerPort_o2();
  HotelComponent_CustomerPort_o2();
}

/*
 * Interface:  CustomerInterface
 * Required Port:  Port2
 * To Provider Message:  o2
 */
void
UserComponent_Port2_o2()
{
  HotelComponent_CustomerPort_o2();
  HotelComponent_CustomerPort_o2();
  HotelComponent_CustomerPort_o2();
  HotelComponent_CustomerPort_o2();
  HotelComponent_CustomerPort_o2();
}

/*
 * Interface:  CustomerInterface
 * Required Port:  Port2
 * To Provider Message:  o2
 */
void
UserComponent_Port2_o2()
{
  HotelComponent_CustomerPort_o2();
  HotelComponent_CustomerPort_o2();
  HotelComponent_CustomerPort_o2();
  HotelComponent_CustomerPort_o2();
  HotelComponent_CustomerPort_o2();
}

/*
 * Interface:  CustomerInterface
 * Required Port:  Port2
 * To Provider Message:  o2
 */
void
UserComponent_Port2_o2()
{
  HotelComponent_CustomerPort_o2();
  HotelComponent_CustomerPort_o2();
  HotelComponent_CustomerPort_o2();
  HotelComponent_CustomerPort_o2();
  HotelComponent_CustomerPort_o2();
}

/*
 * Interface:  CustomerInterface
 * Required Port:  Port2
 * To Provider Message:  s1
 */
void
UserComponent_Port2_s1()
{
  HotelComponent_CustomerPort_s1();
  HotelComponent_CustomerPort_s1();
  HotelComponent_CustomerPort_s1();
  HotelComponent_CustomerPort_s1();
  HotelComponent_CustomerPort_s1();
}

/*
 * Interface:  CustomerInterface
 * Required Port:  Port2
 * To Provider Message:  s1
 */
void
UserComponent_Port2_s1()
{
  HotelComponent_CustomerPort_s1();
  HotelComponent_CustomerPort_s1();
  HotelComponent_CustomerPort_s1();
  HotelComponent_CustomerPort_s1();
  HotelComponent_CustomerPort_s1();
}

/*
 * Interface:  CustomerInterface
 * Required Port:  Port2
 * To Provider Message:  s1
 */
void
UserComponent_Port2_s1()
{
  HotelComponent_CustomerPort_s1();
  HotelComponent_CustomerPort_s1();
  HotelComponent_CustomerPort_s1();
  HotelComponent_CustomerPort_s1();
  HotelComponent_CustomerPort_s1();
}

/*
 * Interface:  CustomerInterface
 * Required Port:  Port2
 * To Provider Message:  s1
 */
void
UserComponent_Port2_s1()
{
  HotelComponent_CustomerPort_s1();
  HotelComponent_CustomerPort_s1();
  HotelComponent_CustomerPort_s1();
  HotelComponent_CustomerPort_s1();
  HotelComponent_CustomerPort_s1();
}

/*
 * Interface:  CustomerInterface
 * Required Port:  Port2
 * To Provider Message:  s1
 */
void
UserComponent_Port2_s1()
{
  HotelComponent_CustomerPort_s1();
  HotelComponent_CustomerPort_s1();
  HotelComponent_CustomerPort_s1();
  HotelComponent_CustomerPort_s1();
  HotelComponent_CustomerPort_s1();
}

/*
 * Interface:  CustomerInterface
 * Required Port:  Port2
 * To Provider Message:  s2
 */
void
UserComponent_Port2_s2()
{
  HotelComponent_CustomerPort_s2();
  HotelComponent_CustomerPort_s2();
  HotelComponent_CustomerPort_s2();
  HotelComponent_CustomerPort_s2();
  HotelComponent_CustomerPort_s2();
}

/*
 * Interface:  CustomerInterface
 * Required Port:  Port2
 * To Provider Message:  s2
 */
void
UserComponent_Port2_s2()
{
  HotelComponent_CustomerPort_s2();
  HotelComponent_CustomerPort_s2();
  HotelComponent_CustomerPort_s2();
  HotelComponent_CustomerPort_s2();
  HotelComponent_CustomerPort_s2();
}

/*
 * Interface:  CustomerInterface
 * Required Port:  Port2
 * To Provider Message:  s2
 */
void
UserComponent_Port2_s2()
{
  HotelComponent_CustomerPort_s2();
  HotelComponent_CustomerPort_s2();
  HotelComponent_CustomerPort_s2();
  HotelComponent_CustomerPort_s2();
  HotelComponent_CustomerPort_s2();
}

/*
 * Interface:  CustomerInterface
 * Required Port:  Port2
 * To Provider Message:  s2
 */
void
UserComponent_Port2_s2()
{
  HotelComponent_CustomerPort_s2();
  HotelComponent_CustomerPort_s2();
  HotelComponent_CustomerPort_s2();
  HotelComponent_CustomerPort_s2();
  HotelComponent_CustomerPort_s2();
}

/*
 * Interface:  CustomerInterface
 * Required Port:  Port2
 * To Provider Message:  s2
 */
void
UserComponent_Port2_s2()
{
  HotelComponent_CustomerPort_s2();
  HotelComponent_CustomerPort_s2();
  HotelComponent_CustomerPort_s2();
  HotelComponent_CustomerPort_s2();
  HotelComponent_CustomerPort_s2();
}

/*
 * UML Domain Functions (Synchronous Services)
 */

/*
 * Domain Function:  checkInGuestTest
 */
void
UserComponent_checkInGuestTest()
{
  UserComponent_CHECKINTEST * ct;UserComponent_SIMPLETEST * st=0;
  /* SELECT any st FROM INSTANCES OF SIMPLETEST */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any st FROM INSTANCES OF SIMPLETEST" );
  st = (UserComponent_SIMPLETEST *) Escher_SetGetAny( &pG_UserComponent_SIMPLETEST_extent.active );
  /* CREATE OBJECT INSTANCE ct OF CHECKINTEST */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE ct OF CHECKINTEST" );
  ct = (UserComponent_CHECKINTEST *) Escher_CreateInstance( UserComponent_DOMAIN_ID, UserComponent_CHECKINTEST_CLASS_NUMBER );
  /* GENERATE CHECKINTEST4:start(bookingNumber:st.bookingNumber) TO ct */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE CHECKINTEST4:start(bookingNumber:st.bookingNumber) TO ct" );
  { UserComponent_CHECKINTESTevent4 * e = (UserComponent_CHECKINTESTevent4 *) Escher_NewxtUMLEvent( ct, &UserComponent_CHECKINTESTevent4c );
    e->p_bookingNumber = st->bookingNumber;
    Escher_SendEvent( (Escher_xtUMLEvent_t *) e );
  }

}

/*
 * Domain Function:  checkOutGuestTest
 */
void
UserComponent_checkOutGuestTest()
{
  i_t age;c_t name[ESCHER_SYS_MAX_STRING_LEN];UserComponent_CHECKOUTTEST * ct;UserComponent_SIMPLETEST * st=0;
  /* ASSIGN name = Glenn Goe */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN name = Glenn Goe" );
  Escher_strcpy( name, "Glenn Goe" );
  /* ASSIGN age = 13 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN age = 13" );
  age = 13;
  /* SELECT any st FROM INSTANCES OF SIMPLETEST */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any st FROM INSTANCES OF SIMPLETEST" );
  st = (UserComponent_SIMPLETEST *) Escher_SetGetAny( &pG_UserComponent_SIMPLETEST_extent.active );
  /* CREATE OBJECT INSTANCE ct OF CHECKOUTTEST */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE ct OF CHECKOUTTEST" );
  ct = (UserComponent_CHECKOUTTEST *) Escher_CreateInstance( UserComponent_DOMAIN_ID, UserComponent_CHECKOUTTEST_CLASS_NUMBER );
  /* GENERATE CHECKOUTTEST1:start(name:name, age:age, bookingNumber:st.bookingNumber) TO ct */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE CHECKOUTTEST1:start(name:name, age:age, bookingNumber:st.bookingNumber) TO ct" );
  { UserComponent_CHECKOUTTESTevent1 * e = (UserComponent_CHECKOUTTESTevent1 *) Escher_NewxtUMLEvent( ct, &UserComponent_CHECKOUTTESTevent1c );
    Escher_strcpy( e->p_name, name );    e->p_age = age;    e->p_bookingNumber = st->bookingNumber;
    Escher_SendEvent( (Escher_xtUMLEvent_t *) e );
  }

}

/*
 * Domain Function:  init
 */
void
UserComponent_init()
{
  UserComponent_SETUP * setup;
  /* CREATE OBJECT INSTANCE setup OF SETUP */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE setup OF SETUP" );
  setup = (UserComponent_SETUP *) Escher_CreateInstance( UserComponent_DOMAIN_ID, UserComponent_SETUP_CLASS_NUMBER );
  /* GENERATE SETUP2:createInstances() TO setup */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE SETUP2:createInstances() TO setup" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( setup, &UserComponent_SETUPevent2c );
    Escher_SendEvent( e );
  }

}

/*
 * Domain Function:  initBookingConcurrencyTest
 */
void
UserComponent_initBookingConcurrencyTest()
{
  Escher_Date_t toDate;Escher_Date_t fromDate;
  /* ASSIGN fromDate = TIM::create_date(day:1, hour:4, minute:12, month:1, second:8, year:2010) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN fromDate = TIM::create_date(day:1, hour:4, minute:12, month:1, second:8, year:2010)" );
  fromDate = TIM_create_date( 1, 4, 12, 1, 8, 2010 );
  /* ASSIGN toDate = TIM::create_date(day:2, hour:4, minute:12, month:1, second:8, year:2010) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN toDate = TIM::create_date(day:2, hour:4, minute:12, month:1, second:8, year:2010)" );
  toDate = TIM_create_date( 2, 4, 12, 1, 8, 2010 );
  /* ::startSimpleTest( desiredType:0, fromDate:fromDate, toDate:toDate ) */
  XTUML_OAL_STMT_TRACE( 1, "::startSimpleTest( desiredType:0, fromDate:fromDate, toDate:toDate )" );
  UserComponent_startSimpleTest( 0, fromDate, toDate );
  /* ::startSimpleTest( desiredType:0, fromDate:fromDate, toDate:toDate ) */
  XTUML_OAL_STMT_TRACE( 1, "::startSimpleTest( desiredType:0, fromDate:fromDate, toDate:toDate )" );
  UserComponent_startSimpleTest( 0, fromDate, toDate );
  /* ::startSimpleTest( desiredType:0, fromDate:fromDate, toDate:toDate ) */
  XTUML_OAL_STMT_TRACE( 1, "::startSimpleTest( desiredType:0, fromDate:fromDate, toDate:toDate )" );
  UserComponent_startSimpleTest( 0, fromDate, toDate );
  /* ::startSimpleTest( desiredType:0, fromDate:fromDate, toDate:toDate ) */
  XTUML_OAL_STMT_TRACE( 1, "::startSimpleTest( desiredType:0, fromDate:fromDate, toDate:toDate )" );
  UserComponent_startSimpleTest( 0, fromDate, toDate );
  /* ::startSimpleTest( desiredType:1, fromDate:fromDate, toDate:toDate ) */
  XTUML_OAL_STMT_TRACE( 1, "::startSimpleTest( desiredType:1, fromDate:fromDate, toDate:toDate )" );
  UserComponent_startSimpleTest( 1, fromDate, toDate );
  /* ::startSimpleTest( desiredType:1, fromDate:fromDate, toDate:toDate ) */
  XTUML_OAL_STMT_TRACE( 1, "::startSimpleTest( desiredType:1, fromDate:fromDate, toDate:toDate )" );
  UserComponent_startSimpleTest( 1, fromDate, toDate );
  /* ::startSimpleTest( desiredType:1, fromDate:fromDate, toDate:toDate ) */
  XTUML_OAL_STMT_TRACE( 1, "::startSimpleTest( desiredType:1, fromDate:fromDate, toDate:toDate )" );
  UserComponent_startSimpleTest( 1, fromDate, toDate );
  /* ::startSimpleTest( desiredType:1, fromDate:fromDate, toDate:toDate ) */
  XTUML_OAL_STMT_TRACE( 1, "::startSimpleTest( desiredType:1, fromDate:fromDate, toDate:toDate )" );
  UserComponent_startSimpleTest( 1, fromDate, toDate );

}

/*
 * Domain Function:  startSimpleTest
 */
void
UserComponent_startSimpleTest( const i_t p_desiredType, Escher_Date_t p_fromDate, Escher_Date_t p_toDate )
{
  UserComponent_SIMPLETEST * st;
  /* LOG::LogInfo( message:Starting simpleTest ; ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:Starting simpleTest ; )" );
  LOG_LogInfo( "Starting simpleTest ;" );
  /* CREATE OBJECT INSTANCE st OF SIMPLETEST */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE st OF SIMPLETEST" );
  st = (UserComponent_SIMPLETEST *) Escher_CreateInstance( UserComponent_DOMAIN_ID, UserComponent_SIMPLETEST_CLASS_NUMBER );
  /* LOG::LogInfo( message:Setup sent, starting test ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:Setup sent, starting test )" );
  LOG_LogInfo( "Setup sent, starting test" );
  /* GENERATE SIMPLETEST1:start(fromDate:PARAM.fromDate, toDate:PARAM.toDate, desiredType:PARAM.desiredType) TO st */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE SIMPLETEST1:start(fromDate:PARAM.fromDate, toDate:PARAM.toDate, desiredType:PARAM.desiredType) TO st" );
  { UserComponent_SIMPLETESTevent1 * e = (UserComponent_SIMPLETESTevent1 *) Escher_NewxtUMLEvent( st, &UserComponent_SIMPLETESTevent1c );
    e->p_fromDate = p_fromDate;    e->p_toDate = p_toDate;    e->p_desiredType = p_desiredType;
    Escher_SendEvent( (Escher_xtUMLEvent_t *) e );
  }

}

/*
 * Domain Function:  startSingleSimpleTest
 */
void
UserComponent_startSingleSimpleTest()
{
  Escher_Date_t toDate;Escher_Date_t fromDate;
  /* ASSIGN fromDate = TIM::create_date(day:1, hour:4, minute:12, month:1, second:8, year:2010) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN fromDate = TIM::create_date(day:1, hour:4, minute:12, month:1, second:8, year:2010)" );
  fromDate = TIM_create_date( 1, 4, 12, 1, 8, 2010 );
  /* ASSIGN toDate = TIM::create_date(day:2, hour:4, minute:12, month:1, second:8, year:2010) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN toDate = TIM::create_date(day:2, hour:4, minute:12, month:1, second:8, year:2010)" );
  toDate = TIM_create_date( 2, 4, 12, 1, 8, 2010 );
  /* ::startSimpleTest( desiredType:1, fromDate:fromDate, toDate:toDate ) */
  XTUML_OAL_STMT_TRACE( 1, "::startSimpleTest( desiredType:1, fromDate:fromDate, toDate:toDate )" );
  UserComponent_startSimpleTest( 1, fromDate, toDate );

}

/* xtUML class info (collections, sizes, etc.) */
Escher_Extent_t * const UserComponent_class_info[ UserComponent_MAX_CLASS_NUMBERS ] = {
  &pG_UserComponent_SIMPLETEST_extent,
  &pG_UserComponent_SETUP_extent,
  &pG_UserComponent_CHECKINTEST_extent,
  &pG_UserComponent_CHECKOUTTEST_extent,
  &pG_UserComponent_BPUNIT_extent,
  0,
  0
};

/*
 * Array of pointers to the class event dispatcher method.
 * Index is the (model compiler enumerated) number of the state model.
 */
const EventTaker_t UserComponent_EventDispatcher[ UserComponent_STATE_MODELS ] = {
  UserComponent_class_dispatchers
};

void UserComponent_execute_initialization()
{
}
