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
UserComponent_UserInterface_addGuest( Escher_UniqueID_t p_facility, const i_t p_guestAge, c_t p_guestName[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t p_sessionID )
{
  HotelComponent_UserInterface_addGuest(  p_facility, p_guestAge, p_guestName, p_sessionID );
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
UserComponent_UserInterface_available( c_t p_aproximateArea[ESCHER_SYS_MAX_STRING_LEN], c_t p_description[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t p_id, const bool p_independent, const r_t p_price )
{
}

/*
 * Interface:  BookingProvider
 * Required Port:  UserInterface
 * From Provider Message:  bookingConfirmation
 */
void
UserComponent_UserInterface_bookingConfirmation( c_t p_message[ESCHER_SYS_MAX_STRING_LEN] )
{
  /* LOG::LogInfo( message:PARAM.message ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:PARAM.message )" );
  LOG_LogInfo( p_message );
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
UserComponent_UserInterface_errorSignal( c_t p_message[ESCHER_SYS_MAX_STRING_LEN] )
{
  /* LOG::LogInfo( message:( ERROR:  + PARAM.message ) ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:( ERROR:  + PARAM.message ) )" );
  LOG_LogInfo( Escher_stradd( "ERROR: ", p_message ) );
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
UserComponent_UserInterface_requestAvailableBookables( const i_t p_facilityType, Escher_Date_t p_fromDate, Escher_UniqueID_t p_sessionID, Escher_Date_t p_toDate )
{
  HotelComponent_UserInterface_requestAvailableBookables(  p_facilityType, p_fromDate, p_sessionID, p_toDate );
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
 * To Provider Message:  select
 */
void
UserComponent_UserInterface_select( Escher_UniqueID_t p_id, Escher_UniqueID_t p_sessionID )
{
  HotelComponent_UserInterface_select(  p_id, p_sessionID );
}

/*
 * Interface:  BookingProvider
 * Required Port:  UserInterface
 * From Provider Message:  session
 */
void
UserComponent_UserInterface_session( Escher_UniqueID_t p_sessionID )
{
  UserComponent_SIMPLETEST * st=0;
  /* LOG::LogInfo( message:Got session ID ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:Got session ID )" );
  LOG_LogInfo( "Got session ID" );
  /* SELECT any st FROM INSTANCES OF SIMPLETEST */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any st FROM INSTANCES OF SIMPLETEST" );
  st = (UserComponent_SIMPLETEST *) Escher_SetGetAny( &pG_UserComponent_SIMPLETEST_extent.active );
  /* GENERATE SIMPLETEST2:sessionEvent(sessionID:PARAM.sessionID) TO st */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE SIMPLETEST2:sessionEvent(sessionID:PARAM.sessionID) TO st" );
  { UserComponent_SIMPLETESTevent2 * e = (UserComponent_SIMPLETESTevent2 *) Escher_NewxtUMLEvent( st, &UserComponent_SIMPLETESTevent2c );
    e->p_sessionID = p_sessionID;
    Escher_SendEvent( (Escher_xtUMLEvent_t *) e );
  }
}

/*
 * Interface:  StaffInterface
 * Required Port:  Port1
 * To Provider Message:  addFacility
 */
void
UserComponent_Port1_addFacility( c_t p_facilityID[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t p_facilityType )
{
  HotelComponent_Port1_addFacility(  p_facilityID, p_facilityType );
}

/*
 * Interface:  StaffInterface
 * Required Port:  Port1
 * To Provider Message:  addFacilityType
 */
void
UserComponent_Port1_addFacilityType( c_t p_approximateArea[ESCHER_SYS_MAX_STRING_LEN], c_t p_description[ESCHER_SYS_MAX_STRING_LEN], c_t p_name[ESCHER_SYS_MAX_STRING_LEN], const r_t p_price )
{
  HotelComponent_Port1_addFacilityType(  p_approximateArea, p_description, p_name, p_price );
}

/*
 * Interface:  StaffInterface
 * Required Port:  Port1
 * From Provider Message:  sendFacilityType
 */
void
UserComponent_Port1_sendFacilityType( Escher_UniqueID_t p_facilityTypeID, c_t p_name[ESCHER_SYS_MAX_STRING_LEN] )
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
 * UML Domain Functions (Synchronous Services)
 */

/*
 * Domain Function:  startSimpleTest
 */
void
UserComponent_startSimpleTest()
{
  UserComponent_SETUP * setup;UserComponent_SIMPLETEST * st;
  /* LOG::LogInfo( message:Starting simpleTest ; ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:Starting simpleTest ; )" );
  LOG_LogInfo( "Starting simpleTest ;" );
  /* CREATE OBJECT INSTANCE st OF SIMPLETEST */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE st OF SIMPLETEST" );
  st = (UserComponent_SIMPLETEST *) Escher_CreateInstance( UserComponent_DOMAIN_ID, UserComponent_SIMPLETEST_CLASS_NUMBER );
  /* CREATE OBJECT INSTANCE setup OF SETUP */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE setup OF SETUP" );
  setup = (UserComponent_SETUP *) Escher_CreateInstance( UserComponent_DOMAIN_ID, UserComponent_SETUP_CLASS_NUMBER );
  /* GENERATE SIMPLETEST1:start() TO st */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE SIMPLETEST1:start() TO st" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( st, &UserComponent_SIMPLETESTevent1c );
    Escher_SendEvent( e );
  }

}

/* xtUML class info (collections, sizes, etc.) */
Escher_Extent_t * const UserComponent_class_info[ UserComponent_MAX_CLASS_NUMBERS ] = {
  &pG_UserComponent_SIMPLETEST_extent,
  &pG_UserComponent_SETUP_extent,
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
