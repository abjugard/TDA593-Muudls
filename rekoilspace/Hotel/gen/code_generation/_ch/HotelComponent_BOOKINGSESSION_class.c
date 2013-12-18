/*----------------------------------------------------------------------------
 * File:  HotelComponent_BOOKINGSESSION_class.c
 *
 * Class:       BookingSession  (BOOKINGSESSION)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "Hotel_sys_types.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "HotelComponent_classes.h"

/*
 * instance operation:  addGuest
 */
HotelComponent_BOOKING *
HotelComponent_BOOKINGSESSION_op_addGuest( HotelComponent_BOOKINGSESSION * self, const i_t p_age, HotelComponent_FACILITY * p_facility, c_t p_name[ESCHER_SYS_MAX_STRING_LEN] )
{

}

/*
 * instance operation:  createGuest
 */
bool
HotelComponent_BOOKINGSESSION_op_createGuest( HotelComponent_BOOKINGSESSION * self, const i_t p_age, c_t p_name[ESCHER_SYS_MAX_STRING_LEN] )
{

}

/*
 * instance operation:  selectBookable
 */
Escher_ObjectSet_s *
HotelComponent_BOOKINGSESSION_op_selectBookable( HotelComponent_BOOKINGSESSION * self, HotelComponent_FACILITYTYPE * p_facilityType )
{

}

/*
 * instance operation:  addService
 */
bool
HotelComponent_BOOKINGSESSION_op_addService( HotelComponent_BOOKINGSESSION * self, HotelComponent_BOOKABLE * p_bookable )
{

}

/*
 * instance operation:  createCustomer
 */
bool
HotelComponent_BOOKINGSESSION_op_createCustomer( HotelComponent_BOOKINGSESSION * self, c_t p_name[ESCHER_SYS_MAX_STRING_LEN] )
{

}

/*
 * instance operation:  destroySession
 */
void
HotelComponent_BOOKINGSESSION_op_destroySession( HotelComponent_BOOKINGSESSION * self)
{
  HotelComponent_HOTEL * hotel=0;HotelComponent_CUSTOMER * customer=0;HotelComponent_BOOKING * booking=0;
  /* SELECT one booking RELATED BY self->BOOKING[R26] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT one booking RELATED BY self->BOOKING[R26]" );
  booking = ( 0 != self ) ? self->BOOKING_R26 : 0;
  /* UNRELATE booking FROM self ACROSS R26 */
  XTUML_OAL_STMT_TRACE( 1, "UNRELATE booking FROM self ACROSS R26" );
  HotelComponent_BOOKINGSESSION_R26_Unlink( booking, self );
  /* SELECT one customer RELATED BY self->CUSTOMER[R27] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT one customer RELATED BY self->CUSTOMER[R27]" );
  customer = ( 0 != self ) ? self->CUSTOMER_R27 : 0;
  /* UNRELATE customer FROM self ACROSS R27 */
  XTUML_OAL_STMT_TRACE( 1, "UNRELATE customer FROM self ACROSS R27" );
  HotelComponent_BOOKINGSESSION_R27_Unlink( customer, self );
  /* SELECT one hotel RELATED BY self->HOTEL[R17] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT one hotel RELATED BY self->HOTEL[R17]" );
  hotel = ( 0 != self ) ? self->HOTEL_R17 : 0;
  /* UNRELATE hotel FROM self ACROSS R17 */
  XTUML_OAL_STMT_TRACE( 1, "UNRELATE hotel FROM self ACROSS R17" );
  HotelComponent_BOOKINGSESSION_R17_Unlink( hotel, self );
  /* DELETE OBJECT INSTANCE self */
  XTUML_OAL_STMT_TRACE( 1, "DELETE OBJECT INSTANCE self" );
  if ( 0 == self ) {
    XTUML_EMPTY_HANDLE_TRACE( "BOOKINGSESSION", "Escher_DeleteInstance" );
  }
  Escher_DeleteInstance( (Escher_iHandle_t) self, HotelComponent_DOMAIN_ID, HotelComponent_BOOKINGSESSION_CLASS_NUMBER );

}

/*
 * instance operation:  undoBookingSession
 */
void
HotelComponent_BOOKINGSESSION_op_undoBookingSession( HotelComponent_BOOKINGSESSION * self)
{
  HotelComponent_GUEST * g=0;HotelComponent_FACILITY * f=0;HotelComponent_BOOKABLE * b=0;HotelComponent_CUSTOMER * customer=0;Escher_ObjectSet_s guests_space={0}; Escher_ObjectSet_s * guests = &guests_space;Escher_ObjectSet_s facilities_space={0}; Escher_ObjectSet_s * facilities = &facilities_space;Escher_ObjectSet_s bookables_space={0}; Escher_ObjectSet_s * bookables = &bookables_space;HotelComponent_BOOKING * booking=0;
  /* SELECT one booking RELATED BY self->BOOKING[R26] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT one booking RELATED BY self->BOOKING[R26]" );
  booking = ( 0 != self ) ? self->BOOKING_R26 : 0;
  /* SELECT many bookables RELATED BY booking->BOOKABLE[R12] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT many bookables RELATED BY booking->BOOKABLE[R12]" );
  Escher_ClearSet( bookables );
  if ( 0 != booking ) {
    Escher_CopySet( bookables, &booking->BOOKABLE_R12 );
  }
  /* FOR EACH b IN bookables */
  XTUML_OAL_STMT_TRACE( 1, "FOR EACH b IN bookables" );
  { Escher_Iterator_s iterb;
  HotelComponent_BOOKABLE * iib;
  Escher_IteratorReset( &iterb, bookables );
  while ( (iib = (HotelComponent_BOOKABLE *)Escher_IteratorNext( &iterb )) != 0 ) {
    b = iib; {
    /* UNRELATE b FROM booking ACROSS R12 */
    XTUML_OAL_STMT_TRACE( 2, "UNRELATE b FROM booking ACROSS R12" );
    HotelComponent_BOOKING_R12_Unlink( b, booking );
  }}}
  /* SELECT many facilities RELATED BY booking->FACILITY[R14] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT many facilities RELATED BY booking->FACILITY[R14]" );
  Escher_ClearSet( facilities );
  if ( 0 != booking ) {
    Escher_CopySet( facilities, &booking->FACILITY_R14 );
  }
  /* FOR EACH f IN facilities */
  XTUML_OAL_STMT_TRACE( 1, "FOR EACH f IN facilities" );
  { Escher_Iterator_s iterf;
  HotelComponent_FACILITY * iif;
  Escher_IteratorReset( &iterf, facilities );
  while ( (iif = (HotelComponent_FACILITY *)Escher_IteratorNext( &iterf )) != 0 ) {
    f = iif; {
    /* UNRELATE f FROM booking ACROSS R14 */
    XTUML_OAL_STMT_TRACE( 2, "UNRELATE f FROM booking ACROSS R14" );
    HotelComponent_BOOKING_R14_Unlink_is_booked_in( f, booking );
  }}}
  /* SELECT many guests RELATED BY booking->GUEST[R15] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT many guests RELATED BY booking->GUEST[R15]" );
  Escher_ClearSet( guests );
  if ( 0 != booking ) {
    Escher_CopySet( guests, &booking->GUEST_R15_use );
  }
  /* FOR EACH g IN guests */
  XTUML_OAL_STMT_TRACE( 1, "FOR EACH g IN guests" );
  { Escher_Iterator_s iterg;
  HotelComponent_GUEST * iig;
  Escher_IteratorReset( &iterg, guests );
  while ( (iig = (HotelComponent_GUEST *)Escher_IteratorNext( &iterg )) != 0 ) {
    g = iig; {
    /* UNRELATE g FROM booking ACROSS R15 */
    XTUML_OAL_STMT_TRACE( 2, "UNRELATE g FROM booking ACROSS R15" );
    HotelComponent_GUEST_R15_Unlink_use( booking, g );
    /* g.destroyGuest() */
    XTUML_OAL_STMT_TRACE( 2, "g.destroyGuest()" );
    HotelComponent_GUEST_op_destroyGuest( g );
  }}}
  /* SELECT one customer RELATED BY self->CUSTOMER[R27] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT one customer RELATED BY self->CUSTOMER[R27]" );
  customer = ( 0 != self ) ? self->CUSTOMER_R27 : 0;
  /* UNRELATE customer FROM self ACROSS R27 */
  XTUML_OAL_STMT_TRACE( 1, "UNRELATE customer FROM self ACROSS R27" );
  HotelComponent_BOOKINGSESSION_R27_Unlink( customer, self );
  /* self.destroySession() */
  XTUML_OAL_STMT_TRACE( 1, "self.destroySession()" );
  HotelComponent_BOOKINGSESSION_op_destroySession( self );
  Escher_ClearSet( guests ); Escher_ClearSet( facilities ); Escher_ClearSet( bookables ); 

}

/*
 * instance operation:  isBookingTimeAcceptable
 */
bool
HotelComponent_BOOKINGSESSION_op_isBookingTimeAcceptable( HotelComponent_BOOKINGSESSION * self, Escher_TimeStamp_t p_fromDate, Escher_TimeStamp_t p_toDate )
{
  i_t day1;i_t day0;HotelComponent_HOTEL * h=0;
  /* SELECT one h RELATED BY self->HOTEL[R17] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT one h RELATED BY self->HOTEL[R17]" );
  h = ( 0 != self ) ? self->HOTEL_R17 : 0;
  /* ASSIGN day0 = ::dateToInt(date:PARAM.fromDate) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN day0 = ::dateToInt(date:PARAM.fromDate)" );
  day0 = HotelComponent_dateToInt( p_fromDate );
  /* ASSIGN day1 = ::dateToInt(date:PARAM.toDate) */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN day1 = ::dateToInt(date:PARAM.toDate)" );
  day1 = HotelComponent_dateToInt( p_toDate );
  /* RETURN ( ( day1 - day0 ) <= h.getMaxBookingLength() ) */
  XTUML_OAL_STMT_TRACE( 1, "RETURN ( ( day1 - day0 ) <= h.getMaxBookingLength() )" );
  return ( ( day1 - day0 ) <= HotelComponent_HOTEL_op_getMaxBookingLength(h) );
}


/*
 * RELATE HOTEL TO BOOKINGSESSION ACROSS R17
 */
void
HotelComponent_BOOKINGSESSION_R17_Link( HotelComponent_HOTEL * part, HotelComponent_BOOKINGSESSION * form )
{
  if ( (part == 0) || (form == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "BOOKINGSESSION", "HotelComponent_BOOKINGSESSION_R17_Link" );
    return;
  }
  form->HOTEL_R17 = part;
  /* Note:  HOTEL->BOOKINGSESSION[R17] not navigated */
}

/*
 * UNRELATE HOTEL FROM BOOKINGSESSION ACROSS R17
 */
void
HotelComponent_BOOKINGSESSION_R17_Unlink( HotelComponent_HOTEL * part, HotelComponent_BOOKINGSESSION * form )
{
  if ( (part == 0) || (form == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "BOOKINGSESSION", "HotelComponent_BOOKINGSESSION_R17_Unlink" );
    return;
  }
  form->HOTEL_R17 = 0;
  /* Note:  HOTEL->BOOKINGSESSION[R17] not navigated */
}

/*
 * RELATE BOOKING TO BOOKINGSESSION ACROSS R26
 */
void
HotelComponent_BOOKINGSESSION_R26_Link( HotelComponent_BOOKING * part, HotelComponent_BOOKINGSESSION * form )
{
  if ( (part == 0) || (form == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "BOOKINGSESSION", "HotelComponent_BOOKINGSESSION_R26_Link" );
    return;
  }
  form->BOOKING_R26 = part;
  /* Note:  BOOKING->BOOKINGSESSION[R26] not navigated */
}

/*
 * UNRELATE BOOKING FROM BOOKINGSESSION ACROSS R26
 */
void
HotelComponent_BOOKINGSESSION_R26_Unlink( HotelComponent_BOOKING * part, HotelComponent_BOOKINGSESSION * form )
{
  if ( (part == 0) || (form == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "BOOKINGSESSION", "HotelComponent_BOOKINGSESSION_R26_Unlink" );
    return;
  }
  form->BOOKING_R26 = 0;
  /* Note:  BOOKING->BOOKINGSESSION[R26] not navigated */
}

/*
 * RELATE CUSTOMER TO BOOKINGSESSION ACROSS R27
 */
void
HotelComponent_BOOKINGSESSION_R27_Link( HotelComponent_CUSTOMER * part, HotelComponent_BOOKINGSESSION * form )
{
  if ( (part == 0) || (form == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "BOOKINGSESSION", "HotelComponent_BOOKINGSESSION_R27_Link" );
    return;
  }
  form->CUSTOMER_R27 = part;
  /* Note:  CUSTOMER->BOOKINGSESSION[R27] not navigated */
}

/*
 * UNRELATE CUSTOMER FROM BOOKINGSESSION ACROSS R27
 */
void
HotelComponent_BOOKINGSESSION_R27_Unlink( HotelComponent_CUSTOMER * part, HotelComponent_BOOKINGSESSION * form )
{
  if ( (part == 0) || (form == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "BOOKINGSESSION", "HotelComponent_BOOKINGSESSION_R27_Unlink" );
    return;
  }
  form->CUSTOMER_R27 = 0;
  /* Note:  CUSTOMER->BOOKINGSESSION[R27] not navigated */
}


/*----------------------------------------------------------------------------
 * Operation action methods implementation for the following class:
 *
 * Class:      BookingSession  (BOOKINGSESSION)
 * Component:  HotelComponent
 *--------------------------------------------------------------------------*/
/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s HotelComponent_BOOKINGSESSION_container[ HotelComponent_BOOKINGSESSION_MAX_EXTENT_SIZE ];
static HotelComponent_BOOKINGSESSION HotelComponent_BOOKINGSESSION_instances[ HotelComponent_BOOKINGSESSION_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_HotelComponent_BOOKINGSESSION_extent = {
  {0}, {0}, &HotelComponent_BOOKINGSESSION_container[ 0 ],
  (Escher_iHandle_t) &HotelComponent_BOOKINGSESSION_instances,
  sizeof( HotelComponent_BOOKINGSESSION ), HotelComponent_BOOKINGSESSION_STATE_1, HotelComponent_BOOKINGSESSION_MAX_EXTENT_SIZE
  };
/*----------------------------------------------------------------------------
 * State and transition action implementations for the following class:
 *
 * Class:      BookingSession  (BOOKINGSESSION)
 * Component:  HotelComponent
 *--------------------------------------------------------------------------*/

/*
 * State 1:  [ready]
 * Note: Self creation state (asynchronous creation)
 */
static void HotelComponent_BOOKINGSESSION_act1( HotelComponent_BOOKINGSESSION *, const Escher_xtUMLEvent_t * const );
static void
HotelComponent_BOOKINGSESSION_act1( HotelComponent_BOOKINGSESSION * self, const Escher_xtUMLEvent_t * const event )
{
  /* LOG::LogInfo( message:Recieved session request ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:Recieved session request )" );
  LOG_LogInfo( "Recieved session request" );
}

/*
 * State 6:  [customerProvided]
 */
static void HotelComponent_BOOKINGSESSION_act6( HotelComponent_BOOKINGSESSION *, const Escher_xtUMLEvent_t * const );
static void
HotelComponent_BOOKINGSESSION_act6( HotelComponent_BOOKINGSESSION * self, const Escher_xtUMLEvent_t * const event )
{
  HotelComponent_BOOKINGSESSIONevent5 * rcvd_evt = (HotelComponent_BOOKINGSESSIONevent5 *) event;
  HotelComponent_CUSTOMER * c;
  /* LOG::LogInfo( message:H: customerProvided: Confirming... ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:H: customerProvided: Confirming... )" );
  LOG_LogInfo( "H: customerProvided: Confirming..." );
  /* CREATE OBJECT INSTANCE c OF CUSTOMER */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE c OF CUSTOMER" );
  c = (HotelComponent_CUSTOMER *) Escher_CreateInstance( HotelComponent_DOMAIN_ID, HotelComponent_CUSTOMER_CLASS_NUMBER );
  /* ASSIGN c.name = PARAM.name */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN c.name = PARAM.name" );
  Escher_strcpy( c->name, rcvd_evt->p_name );
  /* ASSIGN c.phoneNumber = PARAM.phoneNumber */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN c.phoneNumber = PARAM.phoneNumber" );
  Escher_strcpy( c->phoneNumber, rcvd_evt->p_phoneNumber );
  /* RELATE self TO c ACROSS R27 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE self TO c ACROSS R27" );
  HotelComponent_BOOKINGSESSION_R27_Link( c, self );
  /* SEND UserInterface::confirmSignal(message:Confirmed, sessionID:self.ID) */
  XTUML_OAL_STMT_TRACE( 1, "SEND UserInterface::confirmSignal(message:Confirmed, sessionID:self.ID)" );
  HotelComponent_UserInterface_confirmSignal( "Confirmed", self->ID );
}

/*
 * State 5:  [finallyReady]
 */
static void HotelComponent_BOOKINGSESSION_act5( HotelComponent_BOOKINGSESSION *, const Escher_xtUMLEvent_t * const );
static void
HotelComponent_BOOKINGSESSION_act5( HotelComponent_BOOKINGSESSION * self, const Escher_xtUMLEvent_t * const event )
{
  /* LOG::LogInfo( message:H finallyReady, sending confirm ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:H finallyReady, sending confirm )" );
  LOG_LogInfo( "H finallyReady, sending confirm" );
  /* SEND UserInterface::confirmSignal(message:Confirmed, sessionID:self.ID) */
  XTUML_OAL_STMT_TRACE( 1, "SEND UserInterface::confirmSignal(message:Confirmed, sessionID:self.ID)" );
  HotelComponent_UserInterface_confirmSignal( "Confirmed", self->ID );
}

/*
 * State 2:  [selected]
 */
static void HotelComponent_BOOKINGSESSION_act2( HotelComponent_BOOKINGSESSION *, const Escher_xtUMLEvent_t * const );
static void
HotelComponent_BOOKINGSESSION_act2( HotelComponent_BOOKINGSESSION * self, const Escher_xtUMLEvent_t * const event )
{
  HotelComponent_BOOKINGSESSIONevent1 * rcvd_evt = (HotelComponent_BOOKINGSESSIONevent1 *) event;
  HotelComponent_FACILITYTYPE * ft=0;
  /* SELECT any ft FROM INSTANCES OF FACILITYTYPE WHERE ( SELECTED.id == PARAM.id ) */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any ft FROM INSTANCES OF FACILITYTYPE WHERE ( SELECTED.id == PARAM.id )" );
  ft = 0;
  { HotelComponent_FACILITYTYPE * selected;
    Escher_Iterator_s iterftHotelComponent_FACILITYTYPE;
    Escher_IteratorReset( &iterftHotelComponent_FACILITYTYPE, &pG_HotelComponent_FACILITYTYPE_extent.active );
    while ( (selected = (HotelComponent_FACILITYTYPE *) Escher_IteratorNext( &iterftHotelComponent_FACILITYTYPE )) != 0 ) {
      if ( ( selected->id == rcvd_evt->p_id ) ) {
        ft = selected;
        break;
      }
    }
  }
  /* ASSIGN self.facilityTypeSelected = PARAM.id */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN self.facilityTypeSelected = PARAM.id" );
  self->facilityTypeSelected = rcvd_evt->p_id;
  /* ASSIGN self.waiting = TRUE */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN self.waiting = TRUE" );
  self->waiting = TRUE;
  /* GENERATE BOOKINGSESSION_A2:requestSelectEvent(sessionID:self.ID) TO BOOKINGSESSION CLASS */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE BOOKINGSESSION_A2:requestSelectEvent(sessionID:self.ID) TO BOOKINGSESSION CLASS" );
  { HotelComponent_BOOKINGSESSION_CBevent2 * e = (HotelComponent_BOOKINGSESSION_CBevent2 *) Escher_NewxtUMLEvent( 0, &HotelComponent_BOOKINGSESSION_CBevent2c );
    e->p_sessionID = self->ID;
    Escher_SendSelfEvent( (Escher_xtUMLEvent_t *) e );
  }
}

/*
 * State 3:  [guestAdded]
 */
static void HotelComponent_BOOKINGSESSION_act3( HotelComponent_BOOKINGSESSION *, const Escher_xtUMLEvent_t * const );
static void
HotelComponent_BOOKINGSESSION_act3( HotelComponent_BOOKINGSESSION * self, const Escher_xtUMLEvent_t * const event )
{
  HotelComponent_BOOKINGSESSIONevent2 * rcvd_evt = (HotelComponent_BOOKINGSESSIONevent2 *) event;
  HotelComponent_FACILITY * f;HotelComponent_GUEST * g;HotelComponent_BOOKING * b=0;
  /* CREATE OBJECT INSTANCE g OF GUEST */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE g OF GUEST" );
  g = (HotelComponent_GUEST *) Escher_CreateInstance( HotelComponent_DOMAIN_ID, HotelComponent_GUEST_CLASS_NUMBER );
  /* ASSIGN g.age = PARAM.age */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN g.age = PARAM.age" );
  g->age = rcvd_evt->p_age;
  /* ASSIGN g.name = PARAM.name */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN g.name = PARAM.name" );
  Escher_strcpy( g->name, rcvd_evt->p_name );
  /* SELECT one b RELATED BY self->BOOKING[R26] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT one b RELATED BY self->BOOKING[R26]" );
  b = ( 0 != self ) ? self->BOOKING_R26 : 0;
  /* RELATE g TO b ACROSS R15 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE g TO b ACROSS R15" );
  HotelComponent_GUEST_R15_Link_use( b, g );
  /* ASSIGN f = self.tmpFacility */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN f = self.tmpFacility" );
  f = self->tmpFacility;
  /* IF ( not empty f ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not empty f )" );
  if ( !( 0 == f ) ) {
    /* RELATE f TO g ACROSS R16 */
    XTUML_OAL_STMT_TRACE( 2, "RELATE f TO g ACROSS R16" );
    HotelComponent_GUEST_R16_Link_stays_in( f, g );
    /* SEND UserInterface::confirmSignal(message:H: guestAddEvt: Success, added guest, sessionID:self.ID) */
    XTUML_OAL_STMT_TRACE( 2, "SEND UserInterface::confirmSignal(message:H: guestAddEvt: Success, added guest, sessionID:self.ID)" );
    HotelComponent_UserInterface_confirmSignal( "H: guestAddEvt: Success, added guest", self->ID );
  }
  else {
    /* SEND UserInterface::errorSignal(message:H: guestAddedEvent: no facility selected, should never happen, sessionID:self.ID) */
    XTUML_OAL_STMT_TRACE( 2, "SEND UserInterface::errorSignal(message:H: guestAddedEvent: no facility selected, should never happen, sessionID:self.ID)" );
    HotelComponent_UserInterface_errorSignal( "H: guestAddedEvent: no facility selected, should never happen", self->ID );
  }
}

/*
 * State 4:  [addService]
 */
static void HotelComponent_BOOKINGSESSION_act4( HotelComponent_BOOKINGSESSION *, const Escher_xtUMLEvent_t * const );
static void
HotelComponent_BOOKINGSESSION_act4( HotelComponent_BOOKINGSESSION * self, const Escher_xtUMLEvent_t * const event )
{
}

/*
 * State 7:  [paymentSuggested]
 */
static void HotelComponent_BOOKINGSESSION_act7( HotelComponent_BOOKINGSESSION *, const Escher_xtUMLEvent_t * const );
static void
HotelComponent_BOOKINGSESSION_act7( HotelComponent_BOOKINGSESSION * self, const Escher_xtUMLEvent_t * const event )
{
  HotelComponent_BOOKINGSESSIONevent6 * rcvd_evt = (HotelComponent_BOOKINGSESSIONevent6 *) event;
  /* LOG::LogInfo( message:H: paymentSuggested: sending to bank. ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:H: paymentSuggested: sending to bank. )" );
  LOG_LogInfo( "H: paymentSuggested: sending to bank." );
  /* SEND PaymentProviderPort::paymentInfo(paymentMethod:PARAM.info, sessionID:self.ID) */
  XTUML_OAL_STMT_TRACE( 1, "SEND PaymentProviderPort::paymentInfo(paymentMethod:PARAM.info, sessionID:self.ID)" );
  HotelComponent_PaymentProviderPort_paymentInfo( rcvd_evt->p_info, self->ID );
}

/*
 * State 8:  [confirmation]
 */
static void HotelComponent_BOOKINGSESSION_act8( HotelComponent_BOOKINGSESSION *, const Escher_xtUMLEvent_t * const );
static void
HotelComponent_BOOKINGSESSION_act8( HotelComponent_BOOKINGSESSION * self, const Escher_xtUMLEvent_t * const event )
{
  HotelComponent_BOOKINGSESSIONevent7 * rcvd_evt = (HotelComponent_BOOKINGSESSIONevent7 *) event;
  /* LOG::LogInfo( message:H: confirmationState: Is payment valid? ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:H: confirmationState: Is payment valid? )" );
  LOG_LogInfo( "H: confirmationState: Is payment valid?" );
  /* IF ( PARAM.valid ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( PARAM.valid )" );
  if ( rcvd_evt->p_valid ) {
    /* LOG::LogInfo( message:H: confirmationState: Is valid! ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:H: confirmationState: Is valid! )" );
    LOG_LogInfo( "H: confirmationState: Is valid!" );
    /* GENERATE BOOKINGSESSION4:confirmEvent() TO self */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE BOOKINGSESSION4:confirmEvent() TO self" );
    { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( self, &HotelComponent_BOOKINGSESSIONevent4c );
      Escher_SendSelfEvent( e );
    }
  }
  else {
    /* LOG::LogInfo( message:H: confirmationState: Isn't valid! ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:H: confirmationState: Isn't valid! )" );
    LOG_LogInfo( "H: confirmationState: Isn't valid!" );
    /* GENERATE BOOKINGSESSION8:cancelEvent() TO self */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE BOOKINGSESSION8:cancelEvent() TO self" );
    { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( self, &HotelComponent_BOOKINGSESSIONevent8c );
      Escher_SendSelfEvent( e );
    }
  }
}

/*
 * State 9:  [accepted]
 */
static void HotelComponent_BOOKINGSESSION_act9( HotelComponent_BOOKINGSESSION *, const Escher_xtUMLEvent_t * const );
static void
HotelComponent_BOOKINGSESSION_act9( HotelComponent_BOOKINGSESSION * self, const Escher_xtUMLEvent_t * const event )
{
  HotelComponent_FACILITY * fac=0;HotelComponent_BILLING * bill;HotelComponent_HOTEL * h=0;HotelComponent_CUSTOMER * c=0;Escher_ObjectSet_s facilities_space={0}; Escher_ObjectSet_s * facilities = &facilities_space;HotelComponent_BOOKING * b=0;
  /* CREATE OBJECT INSTANCE bill OF BILLING */
  XTUML_OAL_STMT_TRACE( 1, "CREATE OBJECT INSTANCE bill OF BILLING" );
  bill = (HotelComponent_BILLING *) Escher_CreateInstance( HotelComponent_DOMAIN_ID, HotelComponent_BILLING_CLASS_NUMBER );
  /* ASSIGN bill.isPayed = FALSE */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN bill.isPayed = FALSE" );
  bill->isPayed = FALSE;
  /* SELECT one b RELATED BY self->BOOKING[R26] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT one b RELATED BY self->BOOKING[R26]" );
  b = ( 0 != self ) ? self->BOOKING_R26 : 0;
  /* SELECT many facilities RELATED BY b->FACILITY[R14] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT many facilities RELATED BY b->FACILITY[R14]" );
  Escher_ClearSet( facilities );
  if ( 0 != b ) {
    Escher_CopySet( facilities, &b->FACILITY_R14 );
  }
  /* FOR EACH fac IN facilities */
  XTUML_OAL_STMT_TRACE( 1, "FOR EACH fac IN facilities" );
  { Escher_Iterator_s iterfac;
  HotelComponent_FACILITY * iifac;
  Escher_IteratorReset( &iterfac, facilities );
  while ( (iifac = (HotelComponent_FACILITY *)Escher_IteratorNext( &iterfac )) != 0 ) {
    fac = iifac; {
    HotelComponent_BILLINGITEM * billItem;HotelComponent_BOOKABLE * bookable=0;
    /* SELECT one bookable RELATED BY fac->FACILITYTYPE[R1]->BOOKABLE[R2] */
    XTUML_OAL_STMT_TRACE( 2, "SELECT one bookable RELATED BY fac->FACILITYTYPE[R1]->BOOKABLE[R2]" );
    bookable = 0;
    {    if ( 0 != fac ) {
    HotelComponent_FACILITYTYPE * FACILITYTYPE_R1_is_instance_of = fac->FACILITYTYPE_R1_is_instance_of;
    if ( 0 != FACILITYTYPE_R1_is_instance_of ) {
    bookable = FACILITYTYPE_R1_is_instance_of->BOOKABLE_R2;
}}}
    /* CREATE OBJECT INSTANCE billItem OF BILLINGITEM */
    XTUML_OAL_STMT_TRACE( 2, "CREATE OBJECT INSTANCE billItem OF BILLINGITEM" );
    billItem = (HotelComponent_BILLINGITEM *) Escher_CreateInstance( HotelComponent_DOMAIN_ID, HotelComponent_BILLINGITEM_CLASS_NUMBER );
    /* ASSIGN billItem.cost = bookable.price */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN billItem.cost = bookable.price" );
    billItem->cost = bookable->price;
    /* ASSIGN billItem.description = ( ( bookable.name +   ) + bookable.description ) */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN billItem.description = ( ( bookable.name +   ) + bookable.description )" );
    Escher_strcpy( billItem->description, Escher_stradd( Escher_stradd( bookable->name, " " ), bookable->description ) );
    /* RELATE billItem TO bill ACROSS R20 */
    XTUML_OAL_STMT_TRACE( 2, "RELATE billItem TO bill ACROSS R20" );
    HotelComponent_BILLINGITEM_R20_Link( bill, billItem );
  }}}
  /* SELECT one c RELATED BY self->CUSTOMER[R27] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT one c RELATED BY self->CUSTOMER[R27]" );
  c = ( 0 != self ) ? self->CUSTOMER_R27 : 0;
  /* RELATE c TO b ACROSS R22 USING bill */
  XTUML_OAL_STMT_TRACE( 1, "RELATE c TO b ACROSS R22 USING bill" );
  HotelComponent_BILLING_R22_Link( c, b, bill );
  /* SELECT one b RELATED BY self->BOOKING[R26] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT one b RELATED BY self->BOOKING[R26]" );
  b = ( 0 != self ) ? self->BOOKING_R26 : 0;
  /* SELECT any h FROM INSTANCES OF HOTEL */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any h FROM INSTANCES OF HOTEL" );
  h = (HotelComponent_HOTEL *) Escher_SetGetAny( &pG_HotelComponent_HOTEL_extent.active );
  /* RELATE b TO h ACROSS R13 */
  XTUML_OAL_STMT_TRACE( 1, "RELATE b TO h ACROSS R13" );
  HotelComponent_BOOKING_R13_Link( h, b );
  /* LOG::LogInfo( message:H: WOHO BOOKING DONE!!!!!!!!!!! ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:H: WOHO BOOKING DONE!!!!!!!!!!! )" );
  LOG_LogInfo( "H: WOHO BOOKING DONE!!!!!!!!!!!" );
  /* self.destroySession() */
  XTUML_OAL_STMT_TRACE( 1, "self.destroySession()" );
  HotelComponent_BOOKINGSESSION_op_destroySession( self );
  Escher_ClearSet( facilities ); 
}

/*
 * State 10:  [aborted]
 */
static void HotelComponent_BOOKINGSESSION_act10( HotelComponent_BOOKINGSESSION *, const Escher_xtUMLEvent_t * const );
static void
HotelComponent_BOOKINGSESSION_act10( HotelComponent_BOOKINGSESSION * self, const Escher_xtUMLEvent_t * const event )
{
  /* self.undoBookingSession() */
  XTUML_OAL_STMT_TRACE( 1, "self.undoBookingSession()" );
  HotelComponent_BOOKINGSESSION_op_undoBookingSession( self );
}

/*
 * State 11:  [searched]
 */
static void HotelComponent_BOOKINGSESSION_act11( HotelComponent_BOOKINGSESSION *, const Escher_xtUMLEvent_t * const );
static void
HotelComponent_BOOKINGSESSION_act11( HotelComponent_BOOKINGSESSION * self, const Escher_xtUMLEvent_t * const event )
{
  HotelComponent_BOOKINGSESSIONevent9 * rcvd_evt = (HotelComponent_BOOKINGSESSIONevent9 *) event;
}

/*
 * State 1:  [Standby]
 */
static void HotelComponent_BOOKINGSESSION_CB_act1( HotelComponent_BOOKINGSESSION *, const Escher_xtUMLEvent_t * const );
static void
HotelComponent_BOOKINGSESSION_CB_act1( HotelComponent_BOOKINGSESSION * self, const Escher_xtUMLEvent_t * const event )
{
}

/*
 * State 2:  [Busy]
 */
static void HotelComponent_BOOKINGSESSION_CB_act2( HotelComponent_BOOKINGSESSION *, const Escher_xtUMLEvent_t * const );
static void
HotelComponent_BOOKINGSESSION_CB_act2( HotelComponent_BOOKINGSESSION * self, const Escher_xtUMLEvent_t * const event )
{
  HotelComponent_BOOKINGSESSION_CBevent2 * rcvd_evt = (HotelComponent_BOOKINGSESSION_CBevent2 *) event;
  HotelComponent_FACILITYTYPE * ft=0;HotelComponent_BOOKINGSESSION * session=0;HotelComponent_HOTEL * hotel=0;
  /* SELECT any session FROM INSTANCES OF BOOKINGSESSION WHERE ( SELECTED.ID == PARAM.sessionID ) */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any session FROM INSTANCES OF BOOKINGSESSION WHERE ( SELECTED.ID == PARAM.sessionID )" );
  session = 0;
  { HotelComponent_BOOKINGSESSION * selected;
    Escher_Iterator_s itersessionHotelComponent_BOOKINGSESSION;
    Escher_IteratorReset( &itersessionHotelComponent_BOOKINGSESSION, &pG_HotelComponent_BOOKINGSESSION_extent.active );
    while ( (selected = (HotelComponent_BOOKINGSESSION *) Escher_IteratorNext( &itersessionHotelComponent_BOOKINGSESSION )) != 0 ) {
      if ( ( selected->ID == rcvd_evt->p_sessionID ) ) {
        session = selected;
        break;
      }
    }
  }
  /* SELECT any ft FROM INSTANCES OF FACILITYTYPE WHERE ( SELECTED.id == session.facilityTypeSelected ) */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any ft FROM INSTANCES OF FACILITYTYPE WHERE ( SELECTED.id == session.facilityTypeSelected )" );
  ft = 0;
  { HotelComponent_FACILITYTYPE * selected;
    Escher_Iterator_s iterftHotelComponent_FACILITYTYPE;
    Escher_IteratorReset( &iterftHotelComponent_FACILITYTYPE, &pG_HotelComponent_FACILITYTYPE_extent.active );
    while ( (selected = (HotelComponent_FACILITYTYPE *) Escher_IteratorNext( &iterftHotelComponent_FACILITYTYPE )) != 0 ) {
      if ( ( selected->id == session->facilityTypeSelected ) ) {
        ft = selected;
        break;
      }
    }
  }
  /* SELECT one hotel RELATED BY session->HOTEL[R17] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT one hotel RELATED BY session->HOTEL[R17]" );
  hotel = ( 0 != session ) ? session->HOTEL_R17 : 0;
  /* IF ( not_empty session ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not_empty session )" );
  if ( ( 0 != session ) ) {
    /* ASSIGN session.waiting = FALSE */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN session.waiting = FALSE" );
    session->waiting = FALSE;
    /* LOG::LogInfo( message:H: BusyClassMachine: Found session ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:H: BusyClassMachine: Found session )" );
    LOG_LogInfo( "H: BusyClassMachine: Found session" );
    /* IF ( not_empty ft ) */
    XTUML_OAL_STMT_TRACE( 2, "IF ( not_empty ft )" );
    if ( ( 0 != ft ) ) {
    HotelComponent_FACILITY * f;HotelComponent_BOOKING * booking=0;
    /* SELECT one booking RELATED BY session->BOOKING[R26] */
    XTUML_OAL_STMT_TRACE( 2, "SELECT one booking RELATED BY session->BOOKING[R26]" );
    booking = ( 0 != session ) ? session->BOOKING_R26 : 0;
    /* LOG::LogInfo( message:H: BusyClassMachine: ft not empty ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:H: BusyClassMachine: ft not empty )" );
    LOG_LogInfo( "H: BusyClassMachine: ft not empty" );
    /* ASSIGN f = hotel.searchFacility(facilityType:ft.id, booking.getFromDate(), booking.getToDate()) */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN f = hotel.searchFacility(facilityType:ft.id, booking.getFromDate(), booking.getToDate())" );
    f = HotelComponent_HOTEL_op_searchFacility(hotel, ft->id, HotelComponent_BOOKING_op_getFromDate(booking), HotelComponent_BOOKING_op_getToDate(booking));
    /* LOG::LogInfo( message:H: BusyClassMachine: after serachFacility ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:H: BusyClassMachine: after serachFacility )" );
    LOG_LogInfo( "H: BusyClassMachine: after serachFacility" );
    /* IF ( not_empty f ) */
    XTUML_OAL_STMT_TRACE( 2, "IF ( not_empty f )" );
    if ( ( 0 != f ) ) {
    HotelComponent_BOOKABLE * bookable=0;
    /* LOG::LogInfo( message:H: BusyClassMachine: found room ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:H: BusyClassMachine: found room )" );
    LOG_LogInfo( "H: BusyClassMachine: found room" );
    /* ASSIGN session.tmpFacility = f */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN session.tmpFacility = f" );
    session->tmpFacility = f;
    /* SELECT one booking RELATED BY session->BOOKING[R26] */
    XTUML_OAL_STMT_TRACE( 2, "SELECT one booking RELATED BY session->BOOKING[R26]" );
    booking = ( 0 != session ) ? session->BOOKING_R26 : 0;
    /* RELATE f TO booking ACROSS R14 */
    XTUML_OAL_STMT_TRACE( 2, "RELATE f TO booking ACROSS R14" );
    HotelComponent_BOOKING_R14_Link_is_booked_in( f, booking );
    /* SELECT one bookable RELATED BY f->FACILITYTYPE[R1]->BOOKABLE[R2] */
    XTUML_OAL_STMT_TRACE( 2, "SELECT one bookable RELATED BY f->FACILITYTYPE[R1]->BOOKABLE[R2]" );
    bookable = 0;
    {    if ( 0 != f ) {
    HotelComponent_FACILITYTYPE * FACILITYTYPE_R1_is_instance_of = f->FACILITYTYPE_R1_is_instance_of;
    if ( 0 != FACILITYTYPE_R1_is_instance_of ) {
    bookable = FACILITYTYPE_R1_is_instance_of->BOOKABLE_R2;
}}}
    /* RELATE booking TO bookable ACROSS R12 */
    XTUML_OAL_STMT_TRACE( 2, "RELATE booking TO bookable ACROSS R12" );
    HotelComponent_BOOKING_R12_Link( bookable, booking );
    /* LOG::LogInfo( message:H: BusyClassMachine: Confirming facility. ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:H: BusyClassMachine: Confirming facility. )" );
    LOG_LogInfo( "H: BusyClassMachine: Confirming facility." );
    /* SEND UserInterface::confirmSignal(message:H: BusyClassMachine signal: Confirming facility, sessionID:session.ID) */
    XTUML_OAL_STMT_TRACE( 2, "SEND UserInterface::confirmSignal(message:H: BusyClassMachine signal: Confirming facility, sessionID:session.ID)" );
    HotelComponent_UserInterface_confirmSignal( "H: BusyClassMachine signal: Confirming facility", session->ID );
    }
    else {
    /* SEND UserInterface::errorSignal(message:H: BusyClassMachine signal: Could not find any facilities, sessionID:session.ID) */
    XTUML_OAL_STMT_TRACE( 2, "SEND UserInterface::errorSignal(message:H: BusyClassMachine signal: Could not find any facilities, sessionID:session.ID)" );
    HotelComponent_UserInterface_errorSignal( "H: BusyClassMachine signal: Could not find any facilities", session->ID );
    /* LOG::LogInfo( message:H: BusyClassMachine: Could not find facility. ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:H: BusyClassMachine: Could not find facility. )" );
    LOG_LogInfo( "H: BusyClassMachine: Could not find facility." );
    }
    }
    else {
    /* SEND UserInterface::errorSignal(message:H: BusyClassMachine signal: Could not find selected facility type, sessionID:session.ID) */
    XTUML_OAL_STMT_TRACE( 2, "SEND UserInterface::errorSignal(message:H: BusyClassMachine signal: Could not find selected facility type, sessionID:session.ID)" );
    HotelComponent_UserInterface_errorSignal( "H: BusyClassMachine signal: Could not find selected facility type", session->ID );
    /* LOG::LogInfo( message:H: BusyClassMachine: Could not find facility type. ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:H: BusyClassMachine: Could not find facility type. )" );
    LOG_LogInfo( "H: BusyClassMachine: Could not find facility type." );
    }
  }
  else {
    /* SEND UserInterface::errorSignal(message:H: selectted signal: Session not found, sessionID:session.ID) */
    XTUML_OAL_STMT_TRACE( 2, "SEND UserInterface::errorSignal(message:H: selectted signal: Session not found, sessionID:session.ID)" );
    HotelComponent_UserInterface_errorSignal( "H: selectted signal: Session not found", session->ID );
    /* LOG::LogInfo( message:H: BusyClassMachine: Could not find session ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:H: BusyClassMachine: Could not find session )" );
    LOG_LogInfo( "H: BusyClassMachine: Could not find session" );
  }
  /* GENERATE BOOKINGSESSION_A3:taskDoneEvent() TO BOOKINGSESSION CLASS */
  XTUML_OAL_STMT_TRACE( 1, "GENERATE BOOKINGSESSION_A3:taskDoneEvent() TO BOOKINGSESSION CLASS" );
  { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( 0, &HotelComponent_BOOKINGSESSION_CBevent3c );
    Escher_SendEvent( e );
  }
}

/*
 * State 3:  [ProcessQueue]
 */
static void HotelComponent_BOOKINGSESSION_CB_act3( HotelComponent_BOOKINGSESSION *, const Escher_xtUMLEvent_t * const );
static void
HotelComponent_BOOKINGSESSION_CB_act3( HotelComponent_BOOKINGSESSION * self, const Escher_xtUMLEvent_t * const event )
{
  HotelComponent_BOOKINGSESSION * session=0;
  /* SELECT any session FROM INSTANCES OF BOOKINGSESSION WHERE ( SELECTED.waiting == TRUE ) */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any session FROM INSTANCES OF BOOKINGSESSION WHERE ( SELECTED.waiting == TRUE )" );
  session = 0;
  { HotelComponent_BOOKINGSESSION * selected;
    Escher_Iterator_s itersessionHotelComponent_BOOKINGSESSION;
    Escher_IteratorReset( &itersessionHotelComponent_BOOKINGSESSION, &pG_HotelComponent_BOOKINGSESSION_extent.active );
    while ( (selected = (HotelComponent_BOOKINGSESSION *) Escher_IteratorNext( &itersessionHotelComponent_BOOKINGSESSION )) != 0 ) {
      if ( ( selected->waiting == TRUE ) ) {
        session = selected;
        break;
      }
    }
  }
  /* IF ( not_empty session ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( not_empty session )" );
  if ( ( 0 != session ) ) {
    /* ASSIGN session.waiting = FALSE */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN session.waiting = FALSE" );
    session->waiting = FALSE;
    /* GENERATE BOOKINGSESSION_A5:taskFoundEvent(sessionID:session.ID) TO BOOKINGSESSION CLASS */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE BOOKINGSESSION_A5:taskFoundEvent(sessionID:session.ID) TO BOOKINGSESSION CLASS" );
    { HotelComponent_BOOKINGSESSION_CBevent5 * e = (HotelComponent_BOOKINGSESSION_CBevent5 *) Escher_NewxtUMLEvent( 0, &HotelComponent_BOOKINGSESSION_CBevent5c );
      e->p_sessionID = session->ID;
      Escher_SendEvent( (Escher_xtUMLEvent_t *) e );
    }
  }
  else {
    /* GENERATE BOOKINGSESSION_A4:emptyQueueEvent() TO BOOKINGSESSION CLASS */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE BOOKINGSESSION_A4:emptyQueueEvent() TO BOOKINGSESSION CLASS" );
    { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( 0, &HotelComponent_BOOKINGSESSION_CBevent4c );
      Escher_SendEvent( e );
    }
  }
}

const Escher_xtUMLEventConstant_t HotelComponent_BOOKINGSESSION_CBevent2c = {
  HotelComponent_DOMAIN_ID, HotelComponent_BOOKINGSESSION_CLASS_NUMBER_CB, HOTELCOMPONENT_BOOKINGSESSION_CBEVENT2NUM,
  ESCHER_IS_ASSIGNER_EVENT };

const Escher_xtUMLEventConstant_t HotelComponent_BOOKINGSESSION_CBevent3c = {
  HotelComponent_DOMAIN_ID, HotelComponent_BOOKINGSESSION_CLASS_NUMBER_CB, HOTELCOMPONENT_BOOKINGSESSION_CBEVENT3NUM,
  ESCHER_IS_ASSIGNER_EVENT };

const Escher_xtUMLEventConstant_t HotelComponent_BOOKINGSESSION_CBevent4c = {
  HotelComponent_DOMAIN_ID, HotelComponent_BOOKINGSESSION_CLASS_NUMBER_CB, HOTELCOMPONENT_BOOKINGSESSION_CBEVENT4NUM,
  ESCHER_IS_ASSIGNER_EVENT };

const Escher_xtUMLEventConstant_t HotelComponent_BOOKINGSESSION_CBevent5c = {
  HotelComponent_DOMAIN_ID, HotelComponent_BOOKINGSESSION_CLASS_NUMBER_CB, HOTELCOMPONENT_BOOKINGSESSION_CBEVENT5NUM,
  ESCHER_IS_ASSIGNER_EVENT };



/*
 * State-Event Matrix (SEM)
 * Row index is object (MC enumerated) current state.
 * Row zero is the uninitialized state (e.g., for creation event transitions).
 * Column index is (MC enumerated) state machine events.
 */
static const Escher_SEMcell_t HotelComponent_BOOKINGSESSION_CB_StateEventMatrix[ 3 + 1 ][ 4 ] = {
  /* row 0:  uninitialized state (for creation events) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 1:  HotelComponent_BOOKINGSESSION_CB_STATE_1 (Standby) */
  { HotelComponent_BOOKINGSESSION_CB_STATE_2, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 2:  HotelComponent_BOOKINGSESSION_CB_STATE_2 (Busy) */
  { EVENT_IS_IGNORED, HotelComponent_BOOKINGSESSION_CB_STATE_3, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 3:  HotelComponent_BOOKINGSESSION_CB_STATE_3 (ProcessQueue) */
  { EVENT_IS_IGNORED, EVENT_CANT_HAPPEN, HotelComponent_BOOKINGSESSION_CB_STATE_1, HotelComponent_BOOKINGSESSION_CB_STATE_2 }
};

  /*
   * Array of pointers to the class state action procedures.
   * Index is the (MC enumerated) number of the state action to execute.
   */
  static const StateAction_t HotelComponent_BOOKINGSESSION_CB_acts[ 4 ] = {
    (StateAction_t) 0,
    (StateAction_t) HotelComponent_BOOKINGSESSION_CB_act1,  /* Standby */
    (StateAction_t) HotelComponent_BOOKINGSESSION_CB_act2,  /* Busy */
    (StateAction_t) HotelComponent_BOOKINGSESSION_CB_act3  /* ProcessQueue */
  };

  /*
   * Array of string names of the state machine names.
   * Index is the (MC enumerated) number of the state.
   */
  static const c_t * const state_name_strings_CB[ 4 ] = {
    "",
    "Standby",
    "Busy",
    "ProcessQueue"
  };

/*
 * class-based state machine event dispatching
 */
void
HotelComponent_BOOKINGSESSION_CBDispatch( Escher_xtUMLEvent_t * event )
{
  static Escher_InstanceBase_t class_based_singleton = { HotelComponent_BOOKINGSESSION_CB_STATE_1 };
  Escher_EventNumber_t event_number = GetOoaEventNumber( event );
  Escher_StateNumber_t current_state = class_based_singleton.current_state;
  Escher_StateNumber_t next_state = HotelComponent_BOOKINGSESSION_CB_StateEventMatrix[ current_state ][ event_number ];

  if ( next_state <= 3 ) {
    STATE_TXN_START_TRACE( "BOOKINGSESSION", current_state, state_name_strings_CB[ current_state ] );
    /* Execute the state action and update the current state.  */
    ( *HotelComponent_BOOKINGSESSION_CB_acts[ next_state ] )( &class_based_singleton, event );
    class_based_singleton.current_state = next_state;
    STATE_TXN_END_TRACE( "BOOKINGSESSION", next_state, state_name_strings_CB[ next_state ] );
  } else {
    if ( EVENT_CANT_HAPPEN == next_state ) {
      /* Event cannot happen.  */
      UserEventCantHappenCallout( current_state, next_state, event_number );
      STATE_TXN_CH_TRACE( "BOOKINGSESSION", current_state );
    } else if ( EVENT_IS_IGNORED == next_state ) {
      /* Event ignored */
      STATE_TXN_IG_TRACE( "BOOKINGSESSION", current_state );
    } else {
      /* Translation/memory/stack error, etc - TBD */
    }
  }
}

const Escher_xtUMLEventConstant_t HotelComponent_BOOKINGSESSIONevent1c = {
  HotelComponent_DOMAIN_ID, HotelComponent_BOOKINGSESSION_CLASS_NUMBER, HOTELCOMPONENT_BOOKINGSESSIONEVENT1NUM,
  ESCHER_IS_INSTANCE_EVENT };

const Escher_xtUMLEventConstant_t HotelComponent_BOOKINGSESSIONevent2c = {
  HotelComponent_DOMAIN_ID, HotelComponent_BOOKINGSESSION_CLASS_NUMBER, HOTELCOMPONENT_BOOKINGSESSIONEVENT2NUM,
  ESCHER_IS_INSTANCE_EVENT };


const Escher_xtUMLEventConstant_t HotelComponent_BOOKINGSESSIONevent4c = {
  HotelComponent_DOMAIN_ID, HotelComponent_BOOKINGSESSION_CLASS_NUMBER, HOTELCOMPONENT_BOOKINGSESSIONEVENT4NUM,
  ESCHER_IS_INSTANCE_EVENT };

const Escher_xtUMLEventConstant_t HotelComponent_BOOKINGSESSIONevent5c = {
  HotelComponent_DOMAIN_ID, HotelComponent_BOOKINGSESSION_CLASS_NUMBER, HOTELCOMPONENT_BOOKINGSESSIONEVENT5NUM,
  ESCHER_IS_INSTANCE_EVENT };

const Escher_xtUMLEventConstant_t HotelComponent_BOOKINGSESSIONevent6c = {
  HotelComponent_DOMAIN_ID, HotelComponent_BOOKINGSESSION_CLASS_NUMBER, HOTELCOMPONENT_BOOKINGSESSIONEVENT6NUM,
  ESCHER_IS_INSTANCE_EVENT };

const Escher_xtUMLEventConstant_t HotelComponent_BOOKINGSESSIONevent7c = {
  HotelComponent_DOMAIN_ID, HotelComponent_BOOKINGSESSION_CLASS_NUMBER, HOTELCOMPONENT_BOOKINGSESSIONEVENT7NUM,
  ESCHER_IS_INSTANCE_EVENT };

const Escher_xtUMLEventConstant_t HotelComponent_BOOKINGSESSIONevent8c = {
  HotelComponent_DOMAIN_ID, HotelComponent_BOOKINGSESSION_CLASS_NUMBER, HOTELCOMPONENT_BOOKINGSESSIONEVENT8NUM,
  ESCHER_IS_INSTANCE_EVENT };

const Escher_xtUMLEventConstant_t HotelComponent_BOOKINGSESSIONevent9c = {
  HotelComponent_DOMAIN_ID, HotelComponent_BOOKINGSESSION_CLASS_NUMBER, HOTELCOMPONENT_BOOKINGSESSIONEVENT9NUM,
  ESCHER_IS_INSTANCE_EVENT };


const Escher_xtUMLEventConstant_t HotelComponent_BOOKINGSESSIONevent11c = {
  HotelComponent_DOMAIN_ID, HotelComponent_BOOKINGSESSION_CLASS_NUMBER, HOTELCOMPONENT_BOOKINGSESSIONEVENT11NUM,
  ESCHER_IS_INSTANCE_EVENT };



/*
 * State-Event Matrix (SEM)
 * Row index is object (MC enumerated) current state.
 * Row zero is the uninitialized state (e.g., for creation event transitions).
 * Column index is (MC enumerated) state machine events.
 */
static const Escher_SEMcell_t HotelComponent_BOOKINGSESSION_StateEventMatrix[ 11 + 1 ][ 9 ] = {
  /* row 0:  uninitialized state (for creation events) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 1:  HotelComponent_BOOKINGSESSION_STATE_1 (ready) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, HotelComponent_BOOKINGSESSION_STATE_11, HotelComponent_BOOKINGSESSION_STATE_1 },
  /* row 2:  HotelComponent_BOOKINGSESSION_STATE_2 (selected) */
  { EVENT_CANT_HAPPEN, HotelComponent_BOOKINGSESSION_STATE_3, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 3:  HotelComponent_BOOKINGSESSION_STATE_3 (guestAdded) */
  { EVENT_CANT_HAPPEN, HotelComponent_BOOKINGSESSION_STATE_3, HotelComponent_BOOKINGSESSION_STATE_5, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 4:  HotelComponent_BOOKINGSESSION_STATE_4 (addService) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, HotelComponent_BOOKINGSESSION_STATE_5, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 5:  HotelComponent_BOOKINGSESSION_STATE_5 (finallyReady) */
  { HotelComponent_BOOKINGSESSION_STATE_2, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, HotelComponent_BOOKINGSESSION_STATE_6, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, HotelComponent_BOOKINGSESSION_STATE_5, EVENT_CANT_HAPPEN },
  /* row 6:  HotelComponent_BOOKINGSESSION_STATE_6 (customerProvided) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, HotelComponent_BOOKINGSESSION_STATE_7, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 7:  HotelComponent_BOOKINGSESSION_STATE_7 (paymentSuggested) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, HotelComponent_BOOKINGSESSION_STATE_8, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 8:  HotelComponent_BOOKINGSESSION_STATE_8 (confirmation) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, HotelComponent_BOOKINGSESSION_STATE_9, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, HotelComponent_BOOKINGSESSION_STATE_10, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 9:  HotelComponent_BOOKINGSESSION_STATE_9 (accepted) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 10:  HotelComponent_BOOKINGSESSION_STATE_10 (aborted) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 11:  HotelComponent_BOOKINGSESSION_STATE_11 (searched) */
  { HotelComponent_BOOKINGSESSION_STATE_2, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, HotelComponent_BOOKINGSESSION_STATE_11, HotelComponent_BOOKINGSESSION_STATE_1 }
};

  /*
   * Array of pointers to the class state action procedures.
   * Index is the (MC enumerated) number of the state action to execute.
   */
  static const StateAction_t HotelComponent_BOOKINGSESSION_acts[ 12 ] = {
    (StateAction_t) 0,
    (StateAction_t) HotelComponent_BOOKINGSESSION_act1,  /* ready */
    (StateAction_t) HotelComponent_BOOKINGSESSION_act2,  /* selected */
    (StateAction_t) HotelComponent_BOOKINGSESSION_act3,  /* guestAdded */
    (StateAction_t) HotelComponent_BOOKINGSESSION_act4,  /* addService */
    (StateAction_t) HotelComponent_BOOKINGSESSION_act5,  /* finallyReady */
    (StateAction_t) HotelComponent_BOOKINGSESSION_act6,  /* customerProvided */
    (StateAction_t) HotelComponent_BOOKINGSESSION_act7,  /* paymentSuggested */
    (StateAction_t) HotelComponent_BOOKINGSESSION_act8,  /* confirmation */
    (StateAction_t) HotelComponent_BOOKINGSESSION_act9,  /* accepted */
    (StateAction_t) HotelComponent_BOOKINGSESSION_act10,  /* aborted */
    (StateAction_t) HotelComponent_BOOKINGSESSION_act11  /* searched */
  };

  /*
   * Array of string names of the state machine names.
   * Index is the (MC enumerated) number of the state.
   */
  static const c_t * const state_name_strings[ 12 ] = {
    "",
    "ready",
    "selected",
    "guestAdded",
    "addService",
    "finallyReady",
    "customerProvided",
    "paymentSuggested",
    "confirmation",
    "accepted",
    "aborted",
    "searched"
  };

/*
 * instance state machine event dispatching
 */
void
HotelComponent_BOOKINGSESSION_Dispatch( Escher_xtUMLEvent_t * event )
{
  Escher_iHandle_t instance = GetEventTargetInstance( event );
  Escher_EventNumber_t event_number = GetOoaEventNumber( event );
  Escher_StateNumber_t current_state;
  Escher_StateNumber_t next_state;
  
  if ( 0 != instance ) {
    current_state = instance->current_state;
    if ( current_state > 11 ) {
      /* instance validation failure (object deleted while event in flight) */
      UserEventNoInstanceCallout( event_number );
    } else {
      next_state = HotelComponent_BOOKINGSESSION_StateEventMatrix[ current_state ][ event_number ];
      if ( next_state <= 11 ) {
        STATE_TXN_START_TRACE( "BOOKINGSESSION", current_state, state_name_strings[ current_state ] );
        /* Execute the state action and update the current state.  */
        ( *HotelComponent_BOOKINGSESSION_acts[ next_state ] )( instance, event );
        STATE_TXN_END_TRACE( "BOOKINGSESSION", next_state, state_name_strings[ next_state ] );
        instance->current_state = next_state;
      } else if ( next_state == EVENT_CANT_HAPPEN ) {
          /* event cant happen */
          UserEventCantHappenCallout( current_state, next_state, event_number );
          STATE_TXN_CH_TRACE( "BOOKINGSESSION", current_state );
      } else {
        /* empty else */
      }
    }
  }
}


