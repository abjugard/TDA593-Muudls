/*----------------------------------------------------------------------------
 * File:  HotelComponent.c
 *
 * UML Component Port Messages
 * Component/Module Name:  HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "Hotel_sys_types.h"
#include "HotelComponent.h"
#include "TIM_bridge.h"
#include "LOG_bridge.h"
#include "PaymentServiceProviderComponent.h"
#include "UserComponent.h"
#include "HotelComponent_classes.h"

/*
 * Interface:  BookingProvider
 * Provided Port:  UserInterface
 * To Provider Message:  addGuest
 */
void
HotelComponent_UserInterface_addGuest( const i_t p_guestAge, c_t p_guestName[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t p_sessionID )
{
  HotelComponent_BOOKINGSESSION * bs=0;
  /* SELECT any bs FROM INSTANCES OF BOOKINGSESSION WHERE ( SELECTED.ID == PARAM.sessionID ) */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any bs FROM INSTANCES OF BOOKINGSESSION WHERE ( SELECTED.ID == PARAM.sessionID )" );
  bs = 0;
  { HotelComponent_BOOKINGSESSION * selected;
    Escher_Iterator_s iterbsHotelComponent_BOOKINGSESSION;
    Escher_IteratorReset( &iterbsHotelComponent_BOOKINGSESSION, &pG_HotelComponent_BOOKINGSESSION_extent.active );
    while ( (selected = (HotelComponent_BOOKINGSESSION *) Escher_IteratorNext( &iterbsHotelComponent_BOOKINGSESSION )) != 0 ) {
      if ( ( selected->ID == p_sessionID ) ) {
        bs = selected;
        break;
      }
    }
  }
  /* IF ( not_empty bs ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not_empty bs )" );
  if ( ( 0 != bs ) ) {
    /* LOG::LogInfo( message:H: addGuestSignal: Generating addGuest event. ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:H: addGuestSignal: Generating addGuest event. )" );
    LOG_LogInfo( "H: addGuestSignal: Generating addGuest event." );
    /* GENERATE BOOKINGSESSION2:addGuestEvent(age:PARAM.guestAge, name:PARAM.guestName) TO bs */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE BOOKINGSESSION2:addGuestEvent(age:PARAM.guestAge, name:PARAM.guestName) TO bs" );
    { HotelComponent_BOOKINGSESSIONevent2 * e = (HotelComponent_BOOKINGSESSIONevent2 *) Escher_NewxtUMLEvent( bs, &HotelComponent_BOOKINGSESSIONevent2c );
      e->p_age = p_guestAge;      Escher_strcpy( e->p_name, p_guestName );
      Escher_SendEvent( (Escher_xtUMLEvent_t *) e );
    }
  }
  else {
    /* LOG::LogInfo( message:H: addGuestSignal: Session not found. ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:H: addGuestSignal: Session not found. )" );
    LOG_LogInfo( "H: addGuestSignal: Session not found." );
  }
}

/*
 * Interface:  BookingProvider
 * Provided Port:  UserInterface
 * To Provider Message:  addServices
 */
void
HotelComponent_UserInterface_addServices( Escher_UniqueID_t p_desiredID, Escher_UniqueID_t p_sessionID )
{
}

/*
 * Interface:  BookingProvider
 * Provided Port:  UserInterface
 * From Provider Message:  available
 */
void
HotelComponent_UserInterface_available( c_t p_aproximateArea[ESCHER_SYS_MAX_STRING_LEN], c_t p_description[ESCHER_SYS_MAX_STRING_LEN], const i_t p_id, const bool p_independent, const r_t p_price, Escher_UniqueID_t p_sessionID )
{
  UserComponent_UserInterface_available(  p_aproximateArea, p_description, p_id, p_independent, p_price, p_sessionID );
}

/*
 * Interface:  BookingProvider
 * Provided Port:  UserInterface
 * From Provider Message:  confirmSignal
 */
void
HotelComponent_UserInterface_confirmSignal( c_t p_message[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t p_sessionID )
{
  UserComponent_UserInterface_confirmSignal(  p_message, p_sessionID );
}

/*
 * Interface:  BookingProvider
 * Provided Port:  UserInterface
 * To Provider Message:  customerDetails
 */
void
HotelComponent_UserInterface_customerDetails( c_t p_name[ESCHER_SYS_MAX_STRING_LEN], c_t p_phoneNumber[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t p_sessionID )
{
  HotelComponent_BOOKINGSESSION * bs=0;
  /* SELECT any bs FROM INSTANCES OF BOOKINGSESSION WHERE ( SELECTED.ID == PARAM.sessionID ) */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any bs FROM INSTANCES OF BOOKINGSESSION WHERE ( SELECTED.ID == PARAM.sessionID )" );
  bs = 0;
  { HotelComponent_BOOKINGSESSION * selected;
    Escher_Iterator_s iterbsHotelComponent_BOOKINGSESSION;
    Escher_IteratorReset( &iterbsHotelComponent_BOOKINGSESSION, &pG_HotelComponent_BOOKINGSESSION_extent.active );
    while ( (selected = (HotelComponent_BOOKINGSESSION *) Escher_IteratorNext( &iterbsHotelComponent_BOOKINGSESSION )) != 0 ) {
      if ( ( selected->ID == p_sessionID ) ) {
        bs = selected;
        break;
      }
    }
  }
  /* IF ( not_empty bs ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not_empty bs )" );
  if ( ( 0 != bs ) ) {
    /* LOG::LogInfo( message:H: customerDetailsSignal: Generating cusDet event. ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:H: customerDetailsSignal: Generating cusDet event. )" );
    LOG_LogInfo( "H: customerDetailsSignal: Generating cusDet event." );
    /* GENERATE BOOKINGSESSION5:customerDetailsEvent(phoneNumber:PARAM.phoneNumber, name:PARAM.name) TO bs */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE BOOKINGSESSION5:customerDetailsEvent(phoneNumber:PARAM.phoneNumber, name:PARAM.name) TO bs" );
    { HotelComponent_BOOKINGSESSIONevent5 * e = (HotelComponent_BOOKINGSESSIONevent5 *) Escher_NewxtUMLEvent( bs, &HotelComponent_BOOKINGSESSIONevent5c );
      Escher_strcpy( e->p_phoneNumber, p_phoneNumber );      Escher_strcpy( e->p_name, p_name );
      Escher_SendEvent( (Escher_xtUMLEvent_t *) e );
    }
  }
  else {
    /* LOG::LogInfo( message:H: customerDetailsSignal: Session not found. ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:H: customerDetailsSignal: Session not found. )" );
    LOG_LogInfo( "H: customerDetailsSignal: Session not found." );
  }
}

/*
 * Interface:  BookingProvider
 * Provided Port:  UserInterface
 * From Provider Message:  errorSignal
 */
void
HotelComponent_UserInterface_errorSignal( c_t p_message[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t p_sessionID )
{
  UserComponent_UserInterface_errorSignal(  p_message, p_sessionID );
}

/*
 * Interface:  BookingProvider
 * Provided Port:  UserInterface
 * From Provider Message:  extraServices
 */
void
HotelComponent_UserInterface_extraServices( c_t p_aproximateArea[ESCHER_SYS_MAX_STRING_LEN], c_t p_description[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t p_id, const bool p_independent, const r_t p_price )
{
  UserComponent_UserInterface_extraServices(  p_aproximateArea, p_description, p_id, p_independent, p_price );
}

/*
 * Interface:  BookingProvider
 * Provided Port:  UserInterface
 * To Provider Message:  paymentInfo
 */
void
HotelComponent_UserInterface_paymentInfo( c_t p_info[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t p_sessionID )
{
  HotelComponent_BOOKINGSESSION * bs=0;
  /* SELECT any bs FROM INSTANCES OF BOOKINGSESSION WHERE ( SELECTED.ID == PARAM.sessionID ) */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any bs FROM INSTANCES OF BOOKINGSESSION WHERE ( SELECTED.ID == PARAM.sessionID )" );
  bs = 0;
  { HotelComponent_BOOKINGSESSION * selected;
    Escher_Iterator_s iterbsHotelComponent_BOOKINGSESSION;
    Escher_IteratorReset( &iterbsHotelComponent_BOOKINGSESSION, &pG_HotelComponent_BOOKINGSESSION_extent.active );
    while ( (selected = (HotelComponent_BOOKINGSESSION *) Escher_IteratorNext( &iterbsHotelComponent_BOOKINGSESSION )) != 0 ) {
      if ( ( selected->ID == p_sessionID ) ) {
        bs = selected;
        break;
      }
    }
  }
  /* IF ( not_empty bs ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not_empty bs )" );
  if ( ( 0 != bs ) ) {
    /* LOG::LogInfo( message:H: paymentInfoSign: Generating paymentInfoEvent event. ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:H: paymentInfoSign: Generating paymentInfoEvent event. )" );
    LOG_LogInfo( "H: paymentInfoSign: Generating paymentInfoEvent event." );
    /* GENERATE BOOKINGSESSION6:paymentInfoEvent(info:PARAM.info) TO bs */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE BOOKINGSESSION6:paymentInfoEvent(info:PARAM.info) TO bs" );
    { HotelComponent_BOOKINGSESSIONevent6 * e = (HotelComponent_BOOKINGSESSIONevent6 *) Escher_NewxtUMLEvent( bs, &HotelComponent_BOOKINGSESSIONevent6c );
      Escher_strcpy( e->p_info, p_info );
      Escher_SendEvent( (Escher_xtUMLEvent_t *) e );
    }
  }
  else {
    /* LOG::LogInfo( message:H: paymentInfoSign: Session not found. ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:H: paymentInfoSign: Session not found. )" );
    LOG_LogInfo( "H: paymentInfoSign: Session not found." );
  }
}

/*
 * Interface:  BookingProvider
 * Provided Port:  UserInterface
 * To Provider Message:  requestAvailableBookables
 */
void
HotelComponent_UserInterface_requestAvailableBookables( Escher_Date_t p_fromDate, Escher_UniqueID_t p_sessionID, Escher_Date_t p_toDate )
{
  HotelComponent_BOOKINGSESSION * session=0;
  /* SELECT any session FROM INSTANCES OF BOOKINGSESSION WHERE ( SELECTED.ID == PARAM.sessionID ) */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any session FROM INSTANCES OF BOOKINGSESSION WHERE ( SELECTED.ID == PARAM.sessionID )" );
  session = 0;
  { HotelComponent_BOOKINGSESSION * selected;
    Escher_Iterator_s itersessionHotelComponent_BOOKINGSESSION;
    Escher_IteratorReset( &itersessionHotelComponent_BOOKINGSESSION, &pG_HotelComponent_BOOKINGSESSION_extent.active );
    while ( (selected = (HotelComponent_BOOKINGSESSION *) Escher_IteratorNext( &itersessionHotelComponent_BOOKINGSESSION )) != 0 ) {
      if ( ( selected->ID == p_sessionID ) ) {
        session = selected;
        break;
      }
    }
  }
  /* IF ( not_empty session ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not_empty session )" );
  if ( ( 0 != session ) ) {
    /* IF ( session.isBookingTimeAcceptable(fromDate:PARAM.fromDate, toDate:PARAM.toDate) ) */
    XTUML_OAL_STMT_TRACE( 2, "IF ( session.isBookingTimeAcceptable(fromDate:PARAM.fromDate, toDate:PARAM.toDate) )" );
    if ( HotelComponent_BOOKINGSESSION_op_isBookingTimeAcceptable(session, p_fromDate, p_toDate) ) {
    Escher_ObjectSet_s result_space={0}; Escher_ObjectSet_s * result = &result_space;HotelComponent_HOTEL * hotel=0;HotelComponent_BOOKING * booking=0;
    /* SELECT one booking RELATED BY session->BOOKING[R26] */
    XTUML_OAL_STMT_TRACE( 2, "SELECT one booking RELATED BY session->BOOKING[R26]" );
    booking = ( 0 != session ) ? session->BOOKING_R26 : 0;
    /* booking.setFromDate( fromDate:PARAM.fromDate ) */
    XTUML_OAL_STMT_TRACE( 2, "booking.setFromDate( fromDate:PARAM.fromDate )" );
    HotelComponent_BOOKING_op_setFromDate( booking,  p_fromDate );
    /* booking.setToDate( toDate:PARAM.toDate ) */
    XTUML_OAL_STMT_TRACE( 2, "booking.setToDate( toDate:PARAM.toDate )" );
    HotelComponent_BOOKING_op_setToDate( booking,  p_toDate );
    /* SELECT one hotel RELATED BY session->HOTEL[R17] */
    XTUML_OAL_STMT_TRACE( 2, "SELECT one hotel RELATED BY session->HOTEL[R17]" );
    hotel = ( 0 != session ) ? session->HOTEL_R17 : 0;
    /* ASSIGN result = hotel.searchFacilityTypes(fromDate:PARAM.fromDate, toDate:PARAM.toDate) */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN result = hotel.searchFacilityTypes(fromDate:PARAM.fromDate, toDate:PARAM.toDate)" );
    Escher_CopySet( result, HotelComponent_HOTEL_op_searchFacilityTypes(hotel, p_fromDate, p_toDate) );
    /* IF ( empty result ) */
    XTUML_OAL_STMT_TRACE( 2, "IF ( empty result )" );
    if ( Escher_SetIsEmpty( result ) ) {
    /* SEND UserInterface::errorSignal(message:H: requestAvail: No rooms found, sessionID:PARAM.sessionID) */
    XTUML_OAL_STMT_TRACE( 2, "SEND UserInterface::errorSignal(message:H: requestAvail: No rooms found, sessionID:PARAM.sessionID)" );
    HotelComponent_UserInterface_errorSignal( "H: requestAvail: No rooms found", p_sessionID );
    }
    else {
    HotelComponent_FACILITYTYPE * ft=0;
    /* GENERATE BOOKINGSESSION9:searchEvent(toDate:PARAM.toDate, fromDate:PARAM.fromDate) TO session */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE BOOKINGSESSION9:searchEvent(toDate:PARAM.toDate, fromDate:PARAM.fromDate) TO session" );
    { HotelComponent_BOOKINGSESSIONevent9 * e = (HotelComponent_BOOKINGSESSIONevent9 *) Escher_NewxtUMLEvent( session, &HotelComponent_BOOKINGSESSIONevent9c );
      e->p_toDate = p_toDate;      e->p_fromDate = p_fromDate;
      Escher_SendEvent( (Escher_xtUMLEvent_t *) e );
    }
    /* FOR EACH ft IN result */
    XTUML_OAL_STMT_TRACE( 2, "FOR EACH ft IN result" );
    { Escher_Iterator_s iterft;
    HotelComponent_FACILITYTYPE * iift;
    Escher_IteratorReset( &iterft, result );
    while ( (iift = (HotelComponent_FACILITYTYPE *)Escher_IteratorNext( &iterft )) != 0 ) {
      ft = iift; {
    HotelComponent_BOOKABLE * b=0;
    /* SELECT one b RELATED BY ft->BOOKABLE[R2] */
    XTUML_OAL_STMT_TRACE( 2, "SELECT one b RELATED BY ft->BOOKABLE[R2]" );
    b = ( 0 != ft ) ? ft->BOOKABLE_R2 : 0;
    /* SEND UserInterface::available(aproximateArea:ft.approximateArea, description:b.description, id:ft.id, independent:FALSE, price:b.price, sessionID:session.ID) */
    XTUML_OAL_STMT_TRACE( 2, "SEND UserInterface::available(aproximateArea:ft.approximateArea, description:b.description, id:ft.id, independent:FALSE, price:b.price, sessionID:session.ID)" );
    HotelComponent_UserInterface_available( ft->approximateArea, b->description, ft->id, FALSE, b->price, session->ID );
    }}}
    /* SEND CustomerPort::endOfList(sessionID:session.ID) */
    XTUML_OAL_STMT_TRACE( 2, "SEND CustomerPort::endOfList(sessionID:session.ID)" );
    HotelComponent_CustomerPort_endOfList( session->ID );
    }
    Escher_ClearSet( result );
    }
    else {
    /* GENERATE BOOKINGSESSION11:errorEvent(message:Too long booking period selected) TO session */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE BOOKINGSESSION11:errorEvent(message:Too long booking period selected) TO session" );
    { HotelComponent_BOOKINGSESSIONevent11 * e = (HotelComponent_BOOKINGSESSIONevent11 *) Escher_NewxtUMLEvent( session, &HotelComponent_BOOKINGSESSIONevent11c );
      Escher_strcpy( e->p_message, "Too long booking period selected" );
      Escher_SendEvent( (Escher_xtUMLEvent_t *) e );
    }
    /* SEND UserInterface::errorSignal(message:H: Too long booking period selected, sessionID:PARAM.sessionID) */
    XTUML_OAL_STMT_TRACE( 2, "SEND UserInterface::errorSignal(message:H: Too long booking period selected, sessionID:PARAM.sessionID)" );
    HotelComponent_UserInterface_errorSignal( "H: Too long booking period selected", p_sessionID );
    }
  }
  else {
    /* SEND UserInterface::errorSignal(message:H: requestAvail: Session not found, sessionID:PARAM.sessionID) */
    XTUML_OAL_STMT_TRACE( 2, "SEND UserInterface::errorSignal(message:H: requestAvail: Session not found, sessionID:PARAM.sessionID)" );
    HotelComponent_UserInterface_errorSignal( "H: requestAvail: Session not found", p_sessionID );
  }
}

/*
 * Interface:  BookingProvider
 * Provided Port:  UserInterface
 * To Provider Message:  requestSession
 */
void
HotelComponent_UserInterface_requestSession()
{
  i_t seconds;HotelComponent_BOOKING * booking;HotelComponent_BOOKINGSESSION * session;Escher_xtUMLEvent_t * cancel;HotelComponent_HOTEL * h=0;
  /* LOG::LogInfo( message:Recieved session request ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:Recieved session request )" );
  LOG_LogInfo( "Recieved session request" );
  /* CREATE OBJECT INSTANCE session OF BOOKINGSESSION */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE session OF BOOKINGSESSION" );
  session = (HotelComponent_BOOKINGSESSION *) Escher_CreateInstance( HotelComponent_DOMAIN_ID, HotelComponent_BOOKINGSESSION_CLASS_NUMBER );
  /* CREATE OBJECT INSTANCE booking OF BOOKING */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE booking OF BOOKING" );
  booking = (HotelComponent_BOOKING *) Escher_CreateInstance( HotelComponent_DOMAIN_ID, HotelComponent_BOOKING_CLASS_NUMBER );
  /* RELATE session TO booking ACROSS R26 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE session TO booking ACROSS R26" );
  HotelComponent_BOOKINGSESSION_R26_Link( booking, session );
  /* SELECT any h FROM INSTANCES OF HOTEL */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any h FROM INSTANCES OF HOTEL" );
  h = (HotelComponent_HOTEL *) Escher_SetGetAny( &pG_HotelComponent_HOTEL_extent.active );
  /* RELATE session TO h ACROSS R17 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE session TO h ACROSS R17" );
  HotelComponent_BOOKINGSESSION_R17_Link( h, session );
  /* ASSIGN seconds = 60 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN seconds = 60" );
  seconds = 60;
  /* CREATE EVENT INSTANCE cancel(  ) TO session */
  XTUML_OAL_STMT_TRACE( 1, "CREATE EVENT INSTANCE cancel(  ) TO session" );
  cancel = Escher_NewxtUMLEvent( (void *) session, &HotelComponent_BOOKINGSESSIONevent8c );
  /* SEND UserInterface::session(bookingNumber:booking.bookingNumber, sessionID:session.ID) */
  XTUML_OAL_STMT_TRACE( 1, "SEND UserInterface::session(bookingNumber:booking.bookingNumber, sessionID:session.ID)" );
  HotelComponent_UserInterface_session( booking->bookingNumber, session->ID );
}

/*
 * Interface:  BookingProvider
 * Provided Port:  UserInterface
 * To Provider Message:  selectBookable
 */
void
HotelComponent_UserInterface_selectBookable( const i_t p_id, Escher_UniqueID_t p_sessionID )
{
  HotelComponent_BOOKINGSESSION * bs=0;
  /* SELECT any bs FROM INSTANCES OF BOOKINGSESSION WHERE ( SELECTED.ID == PARAM.sessionID ) */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any bs FROM INSTANCES OF BOOKINGSESSION WHERE ( SELECTED.ID == PARAM.sessionID )" );
  bs = 0;
  { HotelComponent_BOOKINGSESSION * selected;
    Escher_Iterator_s iterbsHotelComponent_BOOKINGSESSION;
    Escher_IteratorReset( &iterbsHotelComponent_BOOKINGSESSION, &pG_HotelComponent_BOOKINGSESSION_extent.active );
    while ( (selected = (HotelComponent_BOOKINGSESSION *) Escher_IteratorNext( &iterbsHotelComponent_BOOKINGSESSION )) != 0 ) {
      if ( ( selected->ID == p_sessionID ) ) {
        bs = selected;
        break;
      }
    }
  }
  /* IF ( not_empty bs ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not_empty bs )" );
  if ( ( 0 != bs ) ) {
    /* LOG::LogInfo( message:H: selectSignal: Generating select event. ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:H: selectSignal: Generating select event. )" );
    LOG_LogInfo( "H: selectSignal: Generating select event." );
    /* GENERATE BOOKINGSESSION1:selectEvent(id:PARAM.id) TO bs */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE BOOKINGSESSION1:selectEvent(id:PARAM.id) TO bs" );
    { HotelComponent_BOOKINGSESSIONevent1 * e = (HotelComponent_BOOKINGSESSIONevent1 *) Escher_NewxtUMLEvent( bs, &HotelComponent_BOOKINGSESSIONevent1c );
      e->p_id = p_id;
      Escher_SendEvent( (Escher_xtUMLEvent_t *) e );
    }
  }
  else {
    /* LOG::LogInfo( message:H: selectSignal: Session not found. ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:H: selectSignal: Session not found. )" );
    LOG_LogInfo( "H: selectSignal: Session not found." );
  }
}

/*
 * Interface:  BookingProvider
 * Provided Port:  UserInterface
 * From Provider Message:  session
 */
void
HotelComponent_UserInterface_session( Escher_UniqueID_t p_bookingNumber, Escher_UniqueID_t p_sessionID )
{
  UserComponent_UserInterface_session(  p_bookingNumber, p_sessionID );
}

/*
 * Interface:  StaffInterface
 * Provided Port:  StaffPort
 * To Provider Message:  addFacility
 */
void
HotelComponent_StaffPort_addFacility( c_t p_facilityID[ESCHER_SYS_MAX_STRING_LEN], const i_t p_facilityType )
{
  HotelComponent_FACILITY * f;HotelComponent_FACILITYTYPE * ft=0;
  /* CREATE OBJECT INSTANCE f OF FACILITY */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE f OF FACILITY" );
  f = (HotelComponent_FACILITY *) Escher_CreateInstance( HotelComponent_DOMAIN_ID, HotelComponent_FACILITY_CLASS_NUMBER );
  /* SELECT any ft FROM INSTANCES OF FACILITYTYPE WHERE ( SELECTED.id == PARAM.facilityType ) */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any ft FROM INSTANCES OF FACILITYTYPE WHERE ( SELECTED.id == PARAM.facilityType )" );
  ft = 0;
  { HotelComponent_FACILITYTYPE * selected;
    Escher_Iterator_s iterftHotelComponent_FACILITYTYPE;
    Escher_IteratorReset( &iterftHotelComponent_FACILITYTYPE, &pG_HotelComponent_FACILITYTYPE_extent.active );
    while ( (selected = (HotelComponent_FACILITYTYPE *) Escher_IteratorNext( &iterftHotelComponent_FACILITYTYPE )) != 0 ) {
      if ( ( selected->id == p_facilityType ) ) {
        ft = selected;
        break;
      }
    }
  }
  /* IF ( not_empty ft ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not_empty ft )" );
  if ( ( 0 != ft ) ) {
    /* RELATE f TO ft ACROSS R1 */
    XTUML_OAL_STMT_TRACE( 2, "RELATE f TO ft ACROSS R1" );
    HotelComponent_FACILITY_R1_Link( ft, f );
    /* ASSIGN f.facilityID = PARAM.facilityID */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN f.facilityID = PARAM.facilityID" );
    Escher_strcpy( f->facilityID, p_facilityID );
  }
}

/*
 * Interface:  StaffInterface
 * Provided Port:  StaffPort
 * To Provider Message:  addFacilityType
 */
void
HotelComponent_StaffPort_addFacilityType( c_t p_approximateArea[ESCHER_SYS_MAX_STRING_LEN], c_t p_description[ESCHER_SYS_MAX_STRING_LEN], const i_t p_id, c_t p_name[ESCHER_SYS_MAX_STRING_LEN], const r_t p_price )
{
  HotelComponent_BOOKABLE * b;HotelComponent_FACILITYTYPE * ft;HotelComponent_HOTEL * h=0;
  /* CREATE OBJECT INSTANCE ft OF FACILITYTYPE */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE ft OF FACILITYTYPE" );
  ft = (HotelComponent_FACILITYTYPE *) Escher_CreateInstance( HotelComponent_DOMAIN_ID, HotelComponent_FACILITYTYPE_CLASS_NUMBER );
  /* CREATE OBJECT INSTANCE b OF BOOKABLE */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE b OF BOOKABLE" );
  b = (HotelComponent_BOOKABLE *) Escher_CreateInstance( HotelComponent_DOMAIN_ID, HotelComponent_BOOKABLE_CLASS_NUMBER );
  /* ASSIGN ft.id = PARAM.id */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN ft.id = PARAM.id" );
  ft->id = p_id;
  /* RELATE ft TO b ACROSS R2 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE ft TO b ACROSS R2" );
  HotelComponent_FACILITYTYPE_R2_Link( b, ft );
  /* SELECT any h FROM INSTANCES OF HOTEL */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any h FROM INSTANCES OF HOTEL" );
  h = (HotelComponent_HOTEL *) Escher_SetGetAny( &pG_HotelComponent_HOTEL_extent.active );
  /* IF ( empty h ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( empty h )" );
  if ( ( 0 == h ) ) {
    /* CREATE OBJECT INSTANCE h OF HOTEL */
    XTUML_OAL_STMT_TRACE( 2, "CREATE OBJECT INSTANCE h OF HOTEL" );
    h = (HotelComponent_HOTEL *) Escher_CreateInstance( HotelComponent_DOMAIN_ID, HotelComponent_HOTEL_CLASS_NUMBER );
    h->maxBookingLength = 28; /* DefaultValue */
  }
  /* IF ( not_empty h ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not_empty h )" );
  if ( ( 0 != h ) ) {
    /* RELATE b TO h ACROSS R9 */
    XTUML_OAL_STMT_TRACE( 2, "RELATE b TO h ACROSS R9" );
    HotelComponent_BOOKABLE_R9_Link( h, b );
    /* ASSIGN b.price = PARAM.price */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN b.price = PARAM.price" );
    b->price = p_price;
    /* ASSIGN b.description = PARAM.description */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN b.description = PARAM.description" );
    Escher_strcpy( b->description, p_description );
    /* ASSIGN ft.approximateArea = PARAM.approximateArea */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN ft.approximateArea = PARAM.approximateArea" );
    Escher_strcpy( ft->approximateArea, p_approximateArea );
    /* ASSIGN b.name = PARAM.name */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN b.name = PARAM.name" );
    Escher_strcpy( b->name, p_name );
  }
  /* SEND StaffPort::sendFacilityType(facilityTypeID:ft.id, name:b.name) */
  XTUML_OAL_STMT_TRACE( 1, "SEND StaffPort::sendFacilityType(facilityTypeID:ft.id, name:b.name)" );
  HotelComponent_StaffPort_sendFacilityType( ft->id, b->name );
}

/*
 * Interface:  StaffInterface
 * Provided Port:  StaffPort
 * From Provider Message:  sendFacilityType
 */
void
HotelComponent_StaffPort_sendFacilityType( const i_t p_facilityTypeID, c_t p_name[ESCHER_SYS_MAX_STRING_LEN] )
{
  UserComponent_Port1_sendFacilityType(  p_facilityTypeID, p_name );
}

/*
 * Interface:  CustomerInterface
 * Provided Port:  CustomerPort
 * To Provider Message:  checkInGuest
 */
void
HotelComponent_CustomerPort_checkInGuest( const i_t p_age, Escher_UniqueID_t p_bookingNumber, c_t p_name[ESCHER_SYS_MAX_STRING_LEN] )
{
  HotelComponent_BOOKING * booking=0;
  /* SELECT any booking FROM INSTANCES OF BOOKING WHERE ( SELECTED.bookingNumber == PARAM.bookingNumber ) */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any booking FROM INSTANCES OF BOOKING WHERE ( SELECTED.bookingNumber == PARAM.bookingNumber )" );
  booking = 0;
  { HotelComponent_BOOKING * selected;
    Escher_Iterator_s iterbookingHotelComponent_BOOKING;
    Escher_IteratorReset( &iterbookingHotelComponent_BOOKING, &pG_HotelComponent_BOOKING_extent.active );
    while ( (selected = (HotelComponent_BOOKING *) Escher_IteratorNext( &iterbookingHotelComponent_BOOKING )) != 0 ) {
      if ( ( selected->bookingNumber == p_bookingNumber ) ) {
        booking = selected;
        break;
      }
    }
  }
  /* IF ( empty booking ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( empty booking )" );
  if ( ( 0 == booking ) ) {
    /* SEND CustomerPort::checkInReturn(bookingNumber:PARAM.bookingNumber, message:no booking found with that number, success:FALSE) */
    XTUML_OAL_STMT_TRACE( 2, "SEND CustomerPort::checkInReturn(bookingNumber:PARAM.bookingNumber, message:no booking found with that number, success:FALSE)" );
    HotelComponent_CustomerPort_checkInReturn( p_bookingNumber, "no booking found with that number", FALSE );
  }
  else {
    HotelComponent_GUEST * g=0;
    /* SELECT any g RELATED BY booking->GUEST[R15] WHERE ( ( SELECTED.name == PARAM.name ) ) */
    XTUML_OAL_STMT_TRACE( 2, "SELECT any g RELATED BY booking->GUEST[R15] WHERE ( ( SELECTED.name == PARAM.name ) )" );
    g = 0;
    if ( 0 != booking ) {
      HotelComponent_GUEST * selected;
      Escher_Iterator_s iGUEST_R15_use;
      Escher_IteratorReset( &iGUEST_R15_use, &booking->GUEST_R15_use );
      while ( 0 != ( selected = (HotelComponent_GUEST *) Escher_IteratorNext( &iGUEST_R15_use ) ) ) {
        if ( ( Escher_strcmp( selected->name, p_name ) == 0 ) ) {
          g = selected;
          break;
    }}}
    /* IF ( empty g ) */
    XTUML_OAL_STMT_TRACE( 2, "IF ( empty g )" );
    if ( ( 0 == g ) ) {
    /* SEND CustomerPort::checkInReturn(bookingNumber:PARAM.bookingNumber, message:( could not find guest with name  + PARAM.name ), success:FALSE) */
    XTUML_OAL_STMT_TRACE( 2, "SEND CustomerPort::checkInReturn(bookingNumber:PARAM.bookingNumber, message:( could not find guest with name  + PARAM.name ), success:FALSE)" );
    HotelComponent_CustomerPort_checkInReturn( p_bookingNumber, Escher_stradd( "could not find guest with name ", p_name ), FALSE );
    }
    else {
    HotelComponent_FACILITY * f=0;Escher_ObjectSet_s fs_space={0}; Escher_ObjectSet_s * fs = &fs_space;
    /* ASSIGN g.checkedIn = TIM::current_date() */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN g.checkedIn = TIM::current_date()" );
    g->checkedIn = TIM_current_date();
    /* SELECT many fs RELATED BY g->FACILITY[R16] */
    XTUML_OAL_STMT_TRACE( 2, "SELECT many fs RELATED BY g->FACILITY[R16]" );
    Escher_ClearSet( fs );
    if ( 0 != g ) {
      Escher_CopySet( fs, &g->FACILITY_R16 );
    }
    /* FOR EACH f IN fs */
    XTUML_OAL_STMT_TRACE( 2, "FOR EACH f IN fs" );
    { Escher_Iterator_s iterf;
    HotelComponent_FACILITY * iif;
    Escher_IteratorReset( &iterf, fs );
    while ( (iif = (HotelComponent_FACILITY *)Escher_IteratorNext( &iterf )) != 0 ) {
      f = iif; {
    /* ASSIGN f.checkedIn = g.checkedIn */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN f.checkedIn = g.checkedIn" );
    f->checkedIn = g->checkedIn;
    }}}
    /* SEND CustomerPort::checkInReturn(bookingNumber:PARAM.bookingNumber, message:success, success:TRUE) */
    XTUML_OAL_STMT_TRACE( 2, "SEND CustomerPort::checkInReturn(bookingNumber:PARAM.bookingNumber, message:success, success:TRUE)" );
    HotelComponent_CustomerPort_checkInReturn( p_bookingNumber, "success", TRUE );
    Escher_ClearSet( fs ); 
    }
  }
}

/*
 * Interface:  CustomerInterface
 * Provided Port:  CustomerPort
 * From Provider Message:  checkInReturn
 */
void
HotelComponent_CustomerPort_checkInReturn( Escher_UniqueID_t p_bookingNumber, c_t p_message[ESCHER_SYS_MAX_STRING_LEN], const bool p_success )
{
  UserComponent_Port2_checkInReturn(  p_bookingNumber, p_message, p_success );
}

/*
 * Interface:  CustomerInterface
 * Provided Port:  CustomerPort
 * To Provider Message:  checkOutGuest
 */
void
HotelComponent_CustomerPort_checkOutGuest( const i_t p_age, Escher_UniqueID_t p_bookingNumber, c_t p_name[ESCHER_SYS_MAX_STRING_LEN] )
{
  HotelComponent_BOOKING * booking=0;
  /* SELECT any booking FROM INSTANCES OF BOOKING WHERE ( SELECTED.bookingNumber == PARAM.bookingNumber ) */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any booking FROM INSTANCES OF BOOKING WHERE ( SELECTED.bookingNumber == PARAM.bookingNumber )" );
  booking = 0;
  { HotelComponent_BOOKING * selected;
    Escher_Iterator_s iterbookingHotelComponent_BOOKING;
    Escher_IteratorReset( &iterbookingHotelComponent_BOOKING, &pG_HotelComponent_BOOKING_extent.active );
    while ( (selected = (HotelComponent_BOOKING *) Escher_IteratorNext( &iterbookingHotelComponent_BOOKING )) != 0 ) {
      if ( ( selected->bookingNumber == p_bookingNumber ) ) {
        booking = selected;
        break;
      }
    }
  }
  /* IF ( empty booking ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( empty booking )" );
  if ( ( 0 == booking ) ) {
    /* SEND CustomerPort::checkOutReturn(bookingNumber:PARAM.bookingNumber, message:could not find booking, success:FALSE) */
    XTUML_OAL_STMT_TRACE( 2, "SEND CustomerPort::checkOutReturn(bookingNumber:PARAM.bookingNumber, message:could not find booking, success:FALSE)" );
    HotelComponent_CustomerPort_checkOutReturn( p_bookingNumber, "could not find booking", FALSE );
  }
  else {
    HotelComponent_GUEST * guest=0;
    /* SELECT any guest RELATED BY booking->GUEST[R15] WHERE ( ( SELECTED.name == PARAM.name ) ) */
    XTUML_OAL_STMT_TRACE( 2, "SELECT any guest RELATED BY booking->GUEST[R15] WHERE ( ( SELECTED.name == PARAM.name ) )" );
    guest = 0;
    if ( 0 != booking ) {
      HotelComponent_GUEST * selected;
      Escher_Iterator_s iGUEST_R15_use;
      Escher_IteratorReset( &iGUEST_R15_use, &booking->GUEST_R15_use );
      while ( 0 != ( selected = (HotelComponent_GUEST *) Escher_IteratorNext( &iGUEST_R15_use ) ) ) {
        if ( ( Escher_strcmp( selected->name, p_name ) == 0 ) ) {
          guest = selected;
          break;
    }}}
    /* IF ( empty guest ) */
    XTUML_OAL_STMT_TRACE( 2, "IF ( empty guest )" );
    if ( ( 0 == guest ) ) {
    /* SEND CustomerPort::checkOutReturn(bookingNumber:PARAM.bookingNumber, message:( could not find guest with name  + PARAM.name ), success:FALSE) */
    XTUML_OAL_STMT_TRACE( 2, "SEND CustomerPort::checkOutReturn(bookingNumber:PARAM.bookingNumber, message:( could not find guest with name  + PARAM.name ), success:FALSE)" );
    HotelComponent_CustomerPort_checkOutReturn( p_bookingNumber, Escher_stradd( "could not find guest with name ", p_name ), FALSE );
    }
    else {
    HotelComponent_FACILITY * f=0;Escher_ObjectSet_s fset_space={0}; Escher_ObjectSet_s * fset = &fset_space;
    /* ASSIGN guest.checkedOut = TIM::current_date() */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN guest.checkedOut = TIM::current_date()" );
    guest->checkedOut = TIM_current_date();
    /* SELECT many fset RELATED BY guest->FACILITY[R16] */
    XTUML_OAL_STMT_TRACE( 2, "SELECT many fset RELATED BY guest->FACILITY[R16]" );
    Escher_ClearSet( fset );
    if ( 0 != guest ) {
      Escher_CopySet( fset, &guest->FACILITY_R16 );
    }
    /* FOR EACH f IN fset */
    XTUML_OAL_STMT_TRACE( 2, "FOR EACH f IN fset" );
    { Escher_Iterator_s iterf;
    HotelComponent_FACILITY * iif;
    Escher_IteratorReset( &iterf, fset );
    while ( (iif = (HotelComponent_FACILITY *)Escher_IteratorNext( &iterf )) != 0 ) {
      f = iif; {
    /* ASSIGN f.checkedOut = guest.checkedOut */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN f.checkedOut = guest.checkedOut" );
    f->checkedOut = guest->checkedOut;
    }}}
    /* SEND CustomerPort::checkOutReturn(bookingNumber:PARAM.bookingNumber, message:( Successfully checked out  + PARAM.name ), success:TRUE) */
    XTUML_OAL_STMT_TRACE( 2, "SEND CustomerPort::checkOutReturn(bookingNumber:PARAM.bookingNumber, message:( Successfully checked out  + PARAM.name ), success:TRUE)" );
    HotelComponent_CustomerPort_checkOutReturn( p_bookingNumber, Escher_stradd( "Successfully checked out ", p_name ), TRUE );
    Escher_ClearSet( fset ); 
    }
  }
}

/*
 * Interface:  CustomerInterface
 * Provided Port:  CustomerPort
 * From Provider Message:  checkOutReturn
 */
void
HotelComponent_CustomerPort_checkOutReturn( Escher_UniqueID_t p_bookingNumber, c_t p_message[ESCHER_SYS_MAX_STRING_LEN], const bool p_success )
{
  UserComponent_Port2_checkOutReturn(  p_bookingNumber, p_message, p_success );
}

/*
 * Interface:  CustomerInterface
 * Provided Port:  CustomerPort
 * To Provider Message:  confirmSignal
 */
void
HotelComponent_CustomerPort_confirmSignal( c_t p_message[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t p_sessionID )
{
  HotelComponent_BOOKINGSESSION * bs=0;
  /* SELECT any bs FROM INSTANCES OF BOOKINGSESSION WHERE ( SELECTED.ID == PARAM.sessionID ) */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any bs FROM INSTANCES OF BOOKINGSESSION WHERE ( SELECTED.ID == PARAM.sessionID )" );
  bs = 0;
  { HotelComponent_BOOKINGSESSION * selected;
    Escher_Iterator_s iterbsHotelComponent_BOOKINGSESSION;
    Escher_IteratorReset( &iterbsHotelComponent_BOOKINGSESSION, &pG_HotelComponent_BOOKINGSESSION_extent.active );
    while ( (selected = (HotelComponent_BOOKINGSESSION *) Escher_IteratorNext( &iterbsHotelComponent_BOOKINGSESSION )) != 0 ) {
      if ( ( selected->ID == p_sessionID ) ) {
        bs = selected;
        break;
      }
    }
  }
  /* IF ( not_empty bs ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not_empty bs )" );
  if ( ( 0 != bs ) ) {
    /* LOG::LogInfo( message:H: confirmEvent: Generating confirm event. ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:H: confirmEvent: Generating confirm event. )" );
    LOG_LogInfo( "H: confirmEvent: Generating confirm event." );
    /* GENERATE BOOKINGSESSION4:confirmEvent() TO bs */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE BOOKINGSESSION4:confirmEvent() TO bs" );
    { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( bs, &HotelComponent_BOOKINGSESSIONevent4c );
      Escher_SendEvent( e );
    }
  }
  else {
    /* LOG::LogInfo( message:H: confirmEvent: Session not found. ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:H: confirmEvent: Session not found. )" );
    LOG_LogInfo( "H: confirmEvent: Session not found." );
  }
}

/*
 * Interface:  CustomerInterface
 * Provided Port:  CustomerPort
 * From Provider Message:  endOfList
 */
void
HotelComponent_CustomerPort_endOfList( Escher_UniqueID_t p_sessionID )
{
  UserComponent_Port2_endOfList(  p_sessionID );
}

/*
 * Interface:  CustomerInterface
 * Provided Port:  CustomerPort
 * To Provider Message:  o1
 */
void
HotelComponent_CustomerPort_o1()
{
}

/*
 * Interface:  CustomerInterface
 * Provided Port:  CustomerPort
 * To Provider Message:  o1
 */
void
HotelComponent_CustomerPort_o1()
{
}

/*
 * Interface:  CustomerInterface
 * Provided Port:  CustomerPort
 * To Provider Message:  o1
 */
void
HotelComponent_CustomerPort_o1()
{
}

/*
 * Interface:  CustomerInterface
 * Provided Port:  CustomerPort
 * To Provider Message:  o1
 */
void
HotelComponent_CustomerPort_o1()
{
}

/*
 * Interface:  CustomerInterface
 * Provided Port:  CustomerPort
 * To Provider Message:  o1
 */
void
HotelComponent_CustomerPort_o1()
{
}

/*
 * Interface:  CustomerInterface
 * Provided Port:  CustomerPort
 * To Provider Message:  o2
 */
void
HotelComponent_CustomerPort_o2()
{
}

/*
 * Interface:  CustomerInterface
 * Provided Port:  CustomerPort
 * To Provider Message:  o2
 */
void
HotelComponent_CustomerPort_o2()
{
}

/*
 * Interface:  CustomerInterface
 * Provided Port:  CustomerPort
 * To Provider Message:  o2
 */
void
HotelComponent_CustomerPort_o2()
{
}

/*
 * Interface:  CustomerInterface
 * Provided Port:  CustomerPort
 * To Provider Message:  o2
 */
void
HotelComponent_CustomerPort_o2()
{
}

/*
 * Interface:  CustomerInterface
 * Provided Port:  CustomerPort
 * To Provider Message:  o2
 */
void
HotelComponent_CustomerPort_o2()
{
}

/*
 * Interface:  CustomerInterface
 * Provided Port:  CustomerPort
 * To Provider Message:  s1
 */
void
HotelComponent_CustomerPort_s1()
{
}

/*
 * Interface:  CustomerInterface
 * Provided Port:  CustomerPort
 * To Provider Message:  s1
 */
void
HotelComponent_CustomerPort_s1()
{
}

/*
 * Interface:  CustomerInterface
 * Provided Port:  CustomerPort
 * To Provider Message:  s1
 */
void
HotelComponent_CustomerPort_s1()
{
}

/*
 * Interface:  CustomerInterface
 * Provided Port:  CustomerPort
 * To Provider Message:  s1
 */
void
HotelComponent_CustomerPort_s1()
{
}

/*
 * Interface:  CustomerInterface
 * Provided Port:  CustomerPort
 * To Provider Message:  s1
 */
void
HotelComponent_CustomerPort_s1()
{
}

/*
 * Interface:  CustomerInterface
 * Provided Port:  CustomerPort
 * To Provider Message:  s2
 */
void
HotelComponent_CustomerPort_s2()
{
}

/*
 * Interface:  CustomerInterface
 * Provided Port:  CustomerPort
 * To Provider Message:  s2
 */
void
HotelComponent_CustomerPort_s2()
{
}

/*
 * Interface:  CustomerInterface
 * Provided Port:  CustomerPort
 * To Provider Message:  s2
 */
void
HotelComponent_CustomerPort_s2()
{
}

/*
 * Interface:  CustomerInterface
 * Provided Port:  CustomerPort
 * To Provider Message:  s2
 */
void
HotelComponent_CustomerPort_s2()
{
}

/*
 * Interface:  CustomerInterface
 * Provided Port:  CustomerPort
 * To Provider Message:  s2
 */
void
HotelComponent_CustomerPort_s2()
{
}

/*
 * Interface:  PaymentProviderInterface
 * Required Port:  PaymentProviderPort
 * To Provider Message:  o1
 */
void
HotelComponent_PaymentProviderPort_o1()
{
  PaymentServiceProviderComponent_Port1_o1();
  PaymentServiceProviderComponent_Port1_o1();
}

/*
 * Interface:  PaymentProviderInterface
 * Required Port:  PaymentProviderPort
 * To Provider Message:  o1
 */
void
HotelComponent_PaymentProviderPort_o1()
{
  PaymentServiceProviderComponent_Port1_o1();
  PaymentServiceProviderComponent_Port1_o1();
}

/*
 * Interface:  PaymentProviderInterface
 * Required Port:  PaymentProviderPort
 * To Provider Message:  o2
 */
void
HotelComponent_PaymentProviderPort_o2()
{
  PaymentServiceProviderComponent_Port1_o2();
  PaymentServiceProviderComponent_Port1_o2();
}

/*
 * Interface:  PaymentProviderInterface
 * Required Port:  PaymentProviderPort
 * To Provider Message:  o2
 */
void
HotelComponent_PaymentProviderPort_o2()
{
  PaymentServiceProviderComponent_Port1_o2();
  PaymentServiceProviderComponent_Port1_o2();
}

/*
 * Interface:  PaymentProviderInterface
 * Required Port:  PaymentProviderPort
 * To Provider Message:  o3
 */
void
HotelComponent_PaymentProviderPort_o3()
{
  PaymentServiceProviderComponent_Port1_o3();
  PaymentServiceProviderComponent_Port1_o3();
}

/*
 * Interface:  PaymentProviderInterface
 * Required Port:  PaymentProviderPort
 * To Provider Message:  o3
 */
void
HotelComponent_PaymentProviderPort_o3()
{
  PaymentServiceProviderComponent_Port1_o3();
  PaymentServiceProviderComponent_Port1_o3();
}

/*
 * Interface:  PaymentProviderInterface
 * Required Port:  PaymentProviderPort
 * To Provider Message:  o4
 */
void
HotelComponent_PaymentProviderPort_o4()
{
  PaymentServiceProviderComponent_Port1_o4();
  PaymentServiceProviderComponent_Port1_o4();
}

/*
 * Interface:  PaymentProviderInterface
 * Required Port:  PaymentProviderPort
 * To Provider Message:  o4
 */
void
HotelComponent_PaymentProviderPort_o4()
{
  PaymentServiceProviderComponent_Port1_o4();
  PaymentServiceProviderComponent_Port1_o4();
}

/*
 * Interface:  PaymentProviderInterface
 * Required Port:  PaymentProviderPort
 * To Provider Message:  paymentInfo
 */
void
HotelComponent_PaymentProviderPort_paymentInfo( c_t p_paymentMethod[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t p_sessionID )
{
  PaymentServiceProviderComponent_Port1_paymentInfo(  p_paymentMethod, p_sessionID );
}

/*
 * Interface:  PaymentProviderInterface
 * Required Port:  PaymentProviderPort
 * From Provider Message:  paymentValid
 */
void
HotelComponent_PaymentProviderPort_paymentValid( Escher_UniqueID_t p_sessionID, const bool p_valid )
{
  HotelComponent_BOOKINGSESSION * bs=0;
  /* SELECT any bs FROM INSTANCES OF BOOKINGSESSION WHERE ( SELECTED.ID == PARAM.sessionID ) */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any bs FROM INSTANCES OF BOOKINGSESSION WHERE ( SELECTED.ID == PARAM.sessionID )" );
  bs = 0;
  { HotelComponent_BOOKINGSESSION * selected;
    Escher_Iterator_s iterbsHotelComponent_BOOKINGSESSION;
    Escher_IteratorReset( &iterbsHotelComponent_BOOKINGSESSION, &pG_HotelComponent_BOOKINGSESSION_extent.active );
    while ( (selected = (HotelComponent_BOOKINGSESSION *) Escher_IteratorNext( &iterbsHotelComponent_BOOKINGSESSION )) != 0 ) {
      if ( ( selected->ID == p_sessionID ) ) {
        bs = selected;
        break;
      }
    }
  }
  /* IF ( not_empty bs ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not_empty bs )" );
  if ( ( 0 != bs ) ) {
    /* LOG::LogInfo( message:H: paymentValidSignal: generating event ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:H: paymentValidSignal: generating event )" );
    LOG_LogInfo( "H: paymentValidSignal: generating event" );
    /* GENERATE BOOKINGSESSION7:paymentConfirmedEvent(valid:PARAM.valid) TO bs */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE BOOKINGSESSION7:paymentConfirmedEvent(valid:PARAM.valid) TO bs" );
    { HotelComponent_BOOKINGSESSIONevent7 * e = (HotelComponent_BOOKINGSESSIONevent7 *) Escher_NewxtUMLEvent( bs, &HotelComponent_BOOKINGSESSIONevent7c );
      e->p_valid = p_valid;
      Escher_SendEvent( (Escher_xtUMLEvent_t *) e );
    }
  }
  else {
    /* LOG::LogInfo( message:H: paymentValidSignal: Session not found. ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:H: paymentValidSignal: Session not found. )" );
    LOG_LogInfo( "H: paymentValidSignal: Session not found." );
  }
}

/*
 * Interface:  PaymentProviderInterface
 * Required Port:  PaymentProviderPort
 * To Provider Message:  s1
 */
void
HotelComponent_PaymentProviderPort_s1()
{
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
}

/*
 * Interface:  PaymentProviderInterface
 * Required Port:  PaymentProviderPort
 * To Provider Message:  s1
 */
void
HotelComponent_PaymentProviderPort_s1()
{
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
}

/*
 * Interface:  PaymentProviderInterface
 * Required Port:  PaymentProviderPort
 * To Provider Message:  s1
 */
void
HotelComponent_PaymentProviderPort_s1()
{
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
}

/*
 * Interface:  PaymentProviderInterface
 * Required Port:  PaymentProviderPort
 * To Provider Message:  s1
 */
void
HotelComponent_PaymentProviderPort_s1()
{
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
}

/*
 * Interface:  PaymentProviderInterface
 * Required Port:  PaymentProviderPort
 * To Provider Message:  s1
 */
void
HotelComponent_PaymentProviderPort_s1()
{
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
}

/*
 * Interface:  PaymentProviderInterface
 * Required Port:  PaymentProviderPort
 * To Provider Message:  s1
 */
void
HotelComponent_PaymentProviderPort_s1()
{
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
}

/*
 * Interface:  PaymentProviderInterface
 * Required Port:  PaymentProviderPort
 * To Provider Message:  s1
 */
void
HotelComponent_PaymentProviderPort_s1()
{
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
  PaymentServiceProviderComponent_Port1_s1();
}

/*
 * UML Domain Functions (Synchronous Services)
 */

/*
 * Domain Function:  PopulateFacilityTypes
 */
void
HotelComponent_PopulateFacilityTypes()
{
  HotelComponent_FACILITY * f3;HotelComponent_FACILITY * f2;HotelComponent_FACILITY * f1;HotelComponent_BOOKABLE * b;HotelComponent_FACILITYTYPE * ft;
  /* CREATE OBJECT INSTANCE ft OF FACILITYTYPE */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE ft OF FACILITYTYPE" );
  ft = (HotelComponent_FACILITYTYPE *) Escher_CreateInstance( HotelComponent_DOMAIN_ID, HotelComponent_FACILITYTYPE_CLASS_NUMBER );
  /* CREATE OBJECT INSTANCE b OF BOOKABLE */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE b OF BOOKABLE" );
  b = (HotelComponent_BOOKABLE *) Escher_CreateInstance( HotelComponent_DOMAIN_ID, HotelComponent_BOOKABLE_CLASS_NUMBER );
  /* RELATE ft TO b ACROSS R2 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE ft TO b ACROSS R2" );
  HotelComponent_FACILITYTYPE_R2_Link( b, ft );
  /* ASSIGN ft.approximateArea = About 20 square meters */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN ft.approximateArea = About 20 square meters" );
  Escher_strcpy( ft->approximateArea, "About 20 square meters" );
  /* ASSIGN b.price = 100 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN b.price = 100" );
  b->price = 100;
  /* ASSIGN b.description = A double bed room */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN b.description = A double bed room" );
  Escher_strcpy( b->description, "A double bed room" );
  /* CREATE OBJECT INSTANCE f1 OF FACILITY */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE f1 OF FACILITY" );
  f1 = (HotelComponent_FACILITY *) Escher_CreateInstance( HotelComponent_DOMAIN_ID, HotelComponent_FACILITY_CLASS_NUMBER );
  /* RELATE f1 TO ft ACROSS R1 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE f1 TO ft ACROSS R1" );
  HotelComponent_FACILITY_R1_Link( ft, f1 );
  /* ASSIGN f1.facilityID = Room1 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN f1.facilityID = Room1" );
  Escher_strcpy( f1->facilityID, "Room1" );
  /* CREATE OBJECT INSTANCE f2 OF FACILITY */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE f2 OF FACILITY" );
  f2 = (HotelComponent_FACILITY *) Escher_CreateInstance( HotelComponent_DOMAIN_ID, HotelComponent_FACILITY_CLASS_NUMBER );
  /* RELATE f2 TO ft ACROSS R1 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE f2 TO ft ACROSS R1" );
  HotelComponent_FACILITY_R1_Link( ft, f2 );
  /* ASSIGN f2.facilityID = Room2 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN f2.facilityID = Room2" );
  Escher_strcpy( f2->facilityID, "Room2" );
  /* CREATE OBJECT INSTANCE f3 OF FACILITY */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE f3 OF FACILITY" );
  f3 = (HotelComponent_FACILITY *) Escher_CreateInstance( HotelComponent_DOMAIN_ID, HotelComponent_FACILITY_CLASS_NUMBER );
  /* RELATE f3 TO ft ACROSS R1 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE f3 TO ft ACROSS R1" );
  HotelComponent_FACILITY_R1_Link( ft, f3 );
  /* ASSIGN f3.facilityID = Room3 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN f3.facilityID = Room3" );
  Escher_strcpy( f3->facilityID, "Room3" );

}

/*
 * Domain Function:  TestDateCompare
 */
void
HotelComponent_TestDateCompare()
{
  Escher_ObjectSet_s testbs_space={0}; Escher_ObjectSet_s * testbs = &testbs_space;HotelComponent_BOOKING * bb=0;HotelComponent_BOOKING * b=0;
  /* SELECT any b FROM INSTANCES OF BOOKING */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any b FROM INSTANCES OF BOOKING" );
  b = (HotelComponent_BOOKING *) Escher_SetGetAny( &pG_HotelComponent_BOOKING_extent.active );
  /* SELECT any bb FROM INSTANCES OF BOOKING */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any bb FROM INSTANCES OF BOOKING" );
  bb = (HotelComponent_BOOKING *) Escher_SetGetAny( &pG_HotelComponent_BOOKING_extent.active );
  /* LOG::LogInfo( message:Less success ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:Less success )" );
  LOG_LogInfo( "Less success" );
  /* LOG::LogDate( d:b.toDate, message:herp ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogDate( d:b.toDate, message:herp )" );
  LOG_LogDate( b->toDate, "herp" );
  /* LOG::LogDate( d:bb.toDate, message:herp1 ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogDate( d:bb.toDate, message:herp1 )" );
  LOG_LogDate( bb->toDate, "herp1" );
  /* IF ( ( 0 == ::compDate(b.toDate, bb.toDate) ) ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( ( 0 == ::compDate(b.toDate, bb.toDate) ) )" );
  if ( ( 0 == HotelComponent_compDate( b->toDate, bb->toDate ) ) ) {
    /* LOG::LogInfo( message:our success ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:our success )" );
    LOG_LogInfo( "our success" );
  }
  /* LOG::LogInfo( message:after our or not success ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:after our or not success )" );
  LOG_LogInfo( "after our or not success" );
  /* IF ( ( b.toDate <= bb.toDate ) ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( ( b.toDate <= bb.toDate ) )" );
  if ( ( b->toDate <= bb->toDate ) ) {
    /* LOG::LogInfo( message:Less success ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:Less success )" );
    LOG_LogInfo( "Less success" );
  }
  /* LOG::LogInfo( message:derp  success ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:derp  success )" );
  LOG_LogInfo( "derp  success" );
  /* SELECT many testbs FROM INSTANCES OF BOOKING */
  XTUML_OAL_STMT_TRACE( 1, "SELECT many testbs FROM INSTANCES OF BOOKING" );
  Escher_CopySet( testbs, &pG_HotelComponent_BOOKING_extent.active );
  /* LOG::LogInfo( message:after quarrrrrry success ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:after quarrrrrry success )" );
  LOG_LogInfo( "after quarrrrrry success" );
  Escher_ClearSet( testbs );

}

/*
 * Domain Function:  TestIsAcceptableBooking
 */
void
HotelComponent_TestIsAcceptableBooking()
{
  bool bol;Escher_Date_t t;Escher_Date_t f;HotelComponent_BOOKINGSESSION * bs;HotelComponent_HOTEL * h;
  /* CREATE OBJECT INSTANCE h OF HOTEL */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE h OF HOTEL" );
  h = (HotelComponent_HOTEL *) Escher_CreateInstance( HotelComponent_DOMAIN_ID, HotelComponent_HOTEL_CLASS_NUMBER );
  h->maxBookingLength = 28; /* DefaultValue */
  /* CREATE OBJECT INSTANCE bs OF BOOKINGSESSION */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE bs OF BOOKINGSESSION" );
  bs = (HotelComponent_BOOKINGSESSION *) Escher_CreateInstance( HotelComponent_DOMAIN_ID, HotelComponent_BOOKINGSESSION_CLASS_NUMBER );
  /* RELATE h TO bs ACROSS R17 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE h TO bs ACROSS R17" );
  HotelComponent_BOOKINGSESSION_R17_Link( h, bs );
  /* ASSIGN f = TIM::create_date(day:1, hour:4, minute:12, month:1, second:8, year:2010) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN f = TIM::create_date(day:1, hour:4, minute:12, month:1, second:8, year:2010)" );
  f = TIM_create_date( 1, 4, 12, 1, 8, 2010 );
  /* ASSIGN t = TIM::create_date(day:3, hour:4, minute:12, month:2, second:8, year:2010) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN t = TIM::create_date(day:3, hour:4, minute:12, month:2, second:8, year:2010)" );
  t = TIM_create_date( 3, 4, 12, 2, 8, 2010 );
  /* ASSIGN bol = bs.isBookingTimeAcceptable(fromDate:f, toDate:t) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN bol = bs.isBookingTimeAcceptable(fromDate:f, toDate:t)" );
  bol = HotelComponent_BOOKINGSESSION_op_isBookingTimeAcceptable(bs, f, t);
  /* IF ( bol ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( bol )" );
  if ( bol ) {
    /* LOG::LogInfo( message:date okay ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:date okay )" );
    LOG_LogInfo( "date okay" );
  }
  else {
    /* LOG::LogInfo( message:date not okay ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:date not okay )" );
    LOG_LogInfo( "date not okay" );
  }

}

/*
 * Domain Function:  compDate
 */
i_t
HotelComponent_compDate( Escher_Date_t p_d0, Escher_Date_t p_d1 )
{
  i_t y1;i_t y0;
  /* ASSIGN y0 = TIM::get_year(date:PARAM.d0) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN y0 = TIM::get_year(date:PARAM.d0)" );
  y0 = TIM_get_year( p_d0 );
  /* ASSIGN y1 = TIM::get_year(date:PARAM.d1) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN y1 = TIM::get_year(date:PARAM.d1)" );
  y1 = TIM_get_year( p_d1 );
  /* IF ( ( y0 == y1 ) ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( ( y0 == y1 ) )" );
  if ( ( y0 == y1 ) ) {
    i_t m1;i_t m0;
    /* ASSIGN m0 = TIM::get_month(date:PARAM.d0) */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN m0 = TIM::get_month(date:PARAM.d0)" );
    m0 = TIM_get_month( p_d0 );
    /* ASSIGN m1 = TIM::get_month(date:PARAM.d1) */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN m1 = TIM::get_month(date:PARAM.d1)" );
    m1 = TIM_get_month( p_d1 );
    /* IF ( ( m0 == m1 ) ) */
    XTUML_OAL_STMT_TRACE( 2, "IF ( ( m0 == m1 ) )" );
    if ( ( m0 == m1 ) ) {
    i_t day1;i_t day0;
    /* ASSIGN day0 = TIM::get_day(date:PARAM.d0) */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN day0 = TIM::get_day(date:PARAM.d0)" );
    day0 = TIM_get_day( p_d0 );
    /* ASSIGN day1 = TIM::get_day(date:PARAM.d1) */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN day1 = TIM::get_day(date:PARAM.d1)" );
    day1 = TIM_get_day( p_d1 );
    /* IF ( ( day0 == day1 ) ) */
    XTUML_OAL_STMT_TRACE( 2, "IF ( ( day0 == day1 ) )" );
    if ( ( day0 == day1 ) ) {
    i_t h1;i_t h0;
    /* ASSIGN h0 = TIM::get_hour(date:PARAM.d0) */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN h0 = TIM::get_hour(date:PARAM.d0)" );
    h0 = TIM_get_hour( p_d0 );
    /* ASSIGN h1 = TIM::get_hour(date:PARAM.d1) */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN h1 = TIM::get_hour(date:PARAM.d1)" );
    h1 = TIM_get_hour( p_d1 );
    /* IF ( ( h0 == h1 ) ) */
    XTUML_OAL_STMT_TRACE( 2, "IF ( ( h0 == h1 ) )" );
    if ( ( h0 == h1 ) ) {
    /* RETURN 0 */
    XTUML_OAL_STMT_TRACE( 2, "RETURN 0" );
    return 0;    }
    else {
    /* RETURN ( h0 - h1 ) */
    XTUML_OAL_STMT_TRACE( 2, "RETURN ( h0 - h1 )" );
    return ( h0 - h1 );    }
    }
    else {
    /* RETURN ( day0 - day1 ) */
    XTUML_OAL_STMT_TRACE( 2, "RETURN ( day0 - day1 )" );
    return ( day0 - day1 );    }
    }
    else {
    /* RETURN ( m0 - m1 ) */
    XTUML_OAL_STMT_TRACE( 2, "RETURN ( m0 - m1 )" );
    return ( m0 - m1 );    }
  }
  else {
    /* RETURN ( y0 - y1 ) */
    XTUML_OAL_STMT_TRACE( 2, "RETURN ( y0 - y1 )" );
    return ( y0 - y1 );  }

}

/*
 * Domain Function:  dateToInt
 */
i_t
HotelComponent_dateToInt( Escher_Date_t p_date )
{
  i_t d;
  /* ASSIGN d = ( 365 * TIM::get_year(PARAM.date) ) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN d = ( 365 * TIM::get_year(PARAM.date) )" );
  d = ( 365 * TIM_get_year( p_date ) );
  /* ASSIGN d = ( d + ( 31 * TIM::get_month(PARAM.date) ) ) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN d = ( d + ( 31 * TIM::get_month(PARAM.date) ) )" );
  d = ( d + ( 31 * TIM_get_month( p_date ) ) );
  /* ASSIGN d = ( d + TIM::get_day(PARAM.date) ) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN d = ( d + TIM::get_day(PARAM.date) )" );
  d = ( d + TIM_get_day( p_date ) );
  /* RETURN d */
  XTUML_OAL_STMT_TRACE( 1, "RETURN d" );
  return d;
}

/* xtUML class info (collections, sizes, etc.) */
Escher_Extent_t * const HotelComponent_class_info[ HotelComponent_MAX_CLASS_NUMBERS ] = {
  &pG_HotelComponent_BOOKINGSESSION_extent,
  0,
  &pG_HotelComponent_BOOKING_extent,
  &pG_HotelComponent_GUEST_extent,
  &pG_HotelComponent_BILLING_extent,
  &pG_HotelComponent_BILLINGITEM_extent,
  &pG_HotelComponent_PAYMENTMETHOD_extent,
  &pG_HotelComponent_CASH_extent,
  &pG_HotelComponent_INVOICE_extent,
  &pG_HotelComponent_CREDITCARD_extent,
  &pG_HotelComponent_BENEFIT_extent,
  &pG_HotelComponent_SERVICE_extent,
  &pG_HotelComponent_CUSTOMER_extent,
  &pG_HotelComponent_CLUB_extent,
  &pG_HotelComponent_FACILITYTYPE_extent,
  &pG_HotelComponent_FACILITY_extent,
  &pG_HotelComponent_FACILITYGROUP_extent,
  &pG_HotelComponent_BOOKABLE_extent,
  &pG_HotelComponent_PACKAGE_extent,
  &pG_HotelComponent_HOTEL_extent,
  &pG_HotelComponent_STAFF_extent,
  &pG_HotelComponent_PRIVILEGE_extent
};

/*
 * Array of pointers to the class event dispatcher method.
 * Index is the (model compiler enumerated) number of the state model.
 */
const EventTaker_t HotelComponent_EventDispatcher[ HotelComponent_STATE_MODELS ] = {
  HotelComponent_class_dispatchers
};

void HotelComponent_execute_initialization()
{
}
