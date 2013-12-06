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
#include "LOG_bridge.h"
#include "UserComponent.h"
#include "HotelComponent_classes.h"

/*
 * Interface:  BookingProvider
 * Provided Port:  UserInterface
 * To Provider Message:  addGuest
 */
void
HotelComponent_UserInterface_addGuest( Escher_UniqueID_t p_facility, const i_t p_guestAge, c_t p_guestName[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t p_sessionID )
{
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
HotelComponent_UserInterface_available( c_t p_aproximateArea[ESCHER_SYS_MAX_STRING_LEN], c_t p_description[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t p_id, const bool p_independent, const r_t p_price )
{
  UserComponent_UserInterface_available(  p_aproximateArea, p_description, p_id, p_independent, p_price );
}

/*
 * Interface:  BookingProvider
 * Provided Port:  UserInterface
 * From Provider Message:  bookingConfirmation
 */
void
HotelComponent_UserInterface_bookingConfirmation( c_t p_message[ESCHER_SYS_MAX_STRING_LEN] )
{
  UserComponent_UserInterface_bookingConfirmation(  p_message );
}

/*
 * Interface:  BookingProvider
 * Provided Port:  UserInterface
 * To Provider Message:  customerDetails
 */
void
HotelComponent_UserInterface_customerDetails( c_t p_name[ESCHER_SYS_MAX_STRING_LEN], c_t p_phoneNumber[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t p_sessionID )
{
}

/*
 * Interface:  BookingProvider
 * Provided Port:  UserInterface
 * From Provider Message:  errorSignal
 */
void
HotelComponent_UserInterface_errorSignal( c_t p_message[ESCHER_SYS_MAX_STRING_LEN] )
{
  UserComponent_UserInterface_errorSignal(  p_message );
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
}

/*
 * Interface:  BookingProvider
 * Provided Port:  UserInterface
 * To Provider Message:  requestAvailableBookables
 */
void
HotelComponent_UserInterface_requestAvailableBookables( const i_t p_facilityType, Escher_TimeStamp_t p_fromDate, Escher_UniqueID_t p_sessionID, Escher_TimeStamp_t p_toDate )
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
    HotelComponent_FACILITYTYPE * ft=0;Escher_ObjectSet_s result_space={0}; Escher_ObjectSet_s * result = &result_space;
    /* ASSIGN result = session.search(facilityType:PARAM.facilityType, fromDate:PARAM.fromDate, toDate:PARAM.toDate) */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN result = session.search(facilityType:PARAM.facilityType, fromDate:PARAM.fromDate, toDate:PARAM.toDate)" );
    Escher_CopySet( result, HotelComponent_BOOKINGSESSION_op_search(session, p_facilityType, p_fromDate, p_toDate) );
    /* IF ( empty result ) */
    XTUML_OAL_STMT_TRACE( 2, "IF ( empty result )" );
    if ( Escher_SetIsEmpty( result ) ) {
    /* SEND UserInterface::errorSignal(message:No rooms found) */
    XTUML_OAL_STMT_TRACE( 2, "SEND UserInterface::errorSignal(message:No rooms found)" );
    HotelComponent_UserInterface_errorSignal( "No rooms found" );
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
    /* SEND UserInterface::available(aproximateArea:ft.approximateArea, description:b.description, id:ft.id, independent:FALSE, price:b.price) */
    XTUML_OAL_STMT_TRACE( 2, "SEND UserInterface::available(aproximateArea:ft.approximateArea, description:b.description, id:ft.id, independent:FALSE, price:b.price)" );
    HotelComponent_UserInterface_available( ft->approximateArea, b->description, ft->id, FALSE, b->price );
    }}}
    Escher_ClearSet( result );
  }
  else {
    /* SEND UserInterface::errorSignal(message:Session not found) */
    XTUML_OAL_STMT_TRACE( 2, "SEND UserInterface::errorSignal(message:Session not found)" );
    HotelComponent_UserInterface_errorSignal( "Session not found" );
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
  HotelComponent_BOOKING * booking;HotelComponent_BOOKINGSESSION * session;
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
  /* SEND UserInterface::bookingConfirmation(message:Hej) */
  XTUML_OAL_STMT_TRACE( 1, "SEND UserInterface::bookingConfirmation(message:Hej)" );
  HotelComponent_UserInterface_bookingConfirmation( "Hej" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( (void *) 0, &HotelComponent_BOOKINGSESSION_CBevent2c );
    Escher_SendEvent( e );
  }

}

/*
 * Interface:  BookingProvider
 * Provided Port:  UserInterface
 * To Provider Message:  select
 */
void
HotelComponent_UserInterface_select( Escher_UniqueID_t p_id, Escher_UniqueID_t p_sessionID )
{
}

/*
 * Interface:  BookingProvider
 * Provided Port:  UserInterface
 * From Provider Message:  session
 */
void
HotelComponent_UserInterface_session( Escher_UniqueID_t p_sessionID )
{
  UserComponent_UserInterface_session(  p_sessionID );
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
  HotelComponent_FACILITYTYPE_R1_Link_is_instance_of( f1, ft );
  /* ASSIGN f1.facilityID = Room1 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN f1.facilityID = Room1" );
  Escher_strcpy( f1->facilityID, "Room1" );
  /* CREATE OBJECT INSTANCE f2 OF FACILITY */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE f2 OF FACILITY" );
  f2 = (HotelComponent_FACILITY *) Escher_CreateInstance( HotelComponent_DOMAIN_ID, HotelComponent_FACILITY_CLASS_NUMBER );
  /* RELATE f2 TO ft ACROSS R1 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE f2 TO ft ACROSS R1" );
  HotelComponent_FACILITYTYPE_R1_Link_is_instance_of( f2, ft );
  /* ASSIGN f1.facilityID = Room2 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN f1.facilityID = Room2" );
  Escher_strcpy( f1->facilityID, "Room2" );
  /* CREATE OBJECT INSTANCE f3 OF FACILITY */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE f3 OF FACILITY" );
  f3 = (HotelComponent_FACILITY *) Escher_CreateInstance( HotelComponent_DOMAIN_ID, HotelComponent_FACILITY_CLASS_NUMBER );
  /* RELATE f3 TO ft ACROSS R1 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE f3 TO ft ACROSS R1" );
  HotelComponent_FACILITYTYPE_R1_Link_is_instance_of( f3, ft );
  /* ASSIGN f1.facilityID = Room3 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN f1.facilityID = Room3" );
  Escher_strcpy( f1->facilityID, "Room3" );

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
