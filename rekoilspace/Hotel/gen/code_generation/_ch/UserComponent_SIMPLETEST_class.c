/*----------------------------------------------------------------------------
 * File:  UserComponent_SIMPLETEST_class.c
 *
 * Class:       SimpleTest  (SIMPLETEST)
 * Component:   UserComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "Hotel_sys_types.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "UserComponent_classes.h"


/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s UserComponent_SIMPLETEST_container[ UserComponent_SIMPLETEST_MAX_EXTENT_SIZE ];
static UserComponent_SIMPLETEST UserComponent_SIMPLETEST_instances[ UserComponent_SIMPLETEST_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_UserComponent_SIMPLETEST_extent = {
  {0}, {0}, &UserComponent_SIMPLETEST_container[ 0 ],
  (Escher_iHandle_t) &UserComponent_SIMPLETEST_instances,
  sizeof( UserComponent_SIMPLETEST ), UserComponent_SIMPLETEST_STATE_1, UserComponent_SIMPLETEST_MAX_EXTENT_SIZE
  };
/*----------------------------------------------------------------------------
 * State and transition action implementations for the following class:
 *
 * Class:      SimpleTest  (SIMPLETEST)
 * Component:  UserComponent
 *--------------------------------------------------------------------------*/

/*
 * State 1:  [entryPoint]
 * Note: Self creation state (asynchronous creation)
 */
static void UserComponent_SIMPLETEST_act1( UserComponent_SIMPLETEST *, const Escher_xtUMLEvent_t * const );
static void
UserComponent_SIMPLETEST_act1( UserComponent_SIMPLETEST * self, const Escher_xtUMLEvent_t * const event )
{
  /* LOG::LogInfo( message:Starting simple test... woopido ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:Starting simple test... woopido )" );
  LOG_LogInfo( "Starting simple test... woopido" );
}

/*
 * State 2:  [requestSession]
 */
static void UserComponent_SIMPLETEST_act2( UserComponent_SIMPLETEST *, const Escher_xtUMLEvent_t * const );
static void
UserComponent_SIMPLETEST_act2( UserComponent_SIMPLETEST * self, const Escher_xtUMLEvent_t * const event )
{
  UserComponent_SIMPLETESTevent1 * rcvd_evt = (UserComponent_SIMPLETESTevent1 *) event;
  /* LOG::LogInfo( message:Starting simple test... requesting session ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:Starting simple test... requesting session )" );
  LOG_LogInfo( "Starting simple test... requesting session" );
  /* ASSIGN self.desiredType = PARAM.desiredType */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN self.desiredType = PARAM.desiredType" );
  self->desiredType = rcvd_evt->p_desiredType;
  /* ASSIGN self.fromDate = PARAM.fromDate */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN self.fromDate = PARAM.fromDate" );
  self->fromDate = rcvd_evt->p_fromDate;
  /* ASSIGN self.toDate = PARAM.toDate */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN self.toDate = PARAM.toDate" );
  self->toDate = rcvd_evt->p_toDate;
  /* SEND UserInterface::requestSession() */
  XTUML_OAL_STMT_TRACE( 1, "SEND UserInterface::requestSession()" );
  UserComponent_UserInterface_requestSession();
}

/*
 * State 3:  [requestAvailableBookables]
 */
static void UserComponent_SIMPLETEST_act3( UserComponent_SIMPLETEST *, const Escher_xtUMLEvent_t * const );
static void
UserComponent_SIMPLETEST_act3( UserComponent_SIMPLETEST * self, const Escher_xtUMLEvent_t * const event )
{
  UserComponent_SIMPLETESTevent2 * rcvd_evt = (UserComponent_SIMPLETESTevent2 *) event;
  /* LOG::LogInfo( message:Session recieved ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:Session recieved )" );
  LOG_LogInfo( "Session recieved" );
  /* ASSIGN self.sessionID = PARAM.sessionID */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN self.sessionID = PARAM.sessionID" );
  self->sessionID = rcvd_evt->p_sessionID;
  /* ASSIGN self.bookingNumber = PARAM.bookingNumber */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN self.bookingNumber = PARAM.bookingNumber" );
  self->bookingNumber = rcvd_evt->p_bookingNumber;
  /* LOG::LogInfo( message:Requesting available bookables... ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:Requesting available bookables... )" );
  LOG_LogInfo( "Requesting available bookables..." );
  /* SEND UserInterface::requestAvailableBookables(fromDate:self.fromDate, sessionID:self.sessionID, toDate:self.toDate) */
  XTUML_OAL_STMT_TRACE( 1, "SEND UserInterface::requestAvailableBookables(fromDate:self.fromDate, sessionID:self.sessionID, toDate:self.toDate)" );
  UserComponent_UserInterface_requestAvailableBookables( self->fromDate, self->sessionID, self->toDate );
}

/*
 * State 4:  [selectRooms]
 */
static void UserComponent_SIMPLETEST_act4( UserComponent_SIMPLETEST *, const Escher_xtUMLEvent_t * const );
static void
UserComponent_SIMPLETEST_act4( UserComponent_SIMPLETEST * self, const Escher_xtUMLEvent_t * const event )
{
  UserComponent_SIMPLETESTevent3 * rcvd_evt = (UserComponent_SIMPLETESTevent3 *) event;
  i_t id;
  /* LOG::LogInfo( message:UC selectRooms: Received available, selecting... ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:UC selectRooms: Received available, selecting... )" );
  LOG_LogInfo( "UC selectRooms: Received available, selecting..." );
  /* ASSIGN id = PARAM.id */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN id = PARAM.id" );
  id = rcvd_evt->p_id;
  /* IF ( ( id == self.desiredType ) ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( ( id == self.desiredType ) )" );
  if ( ( id == self->desiredType ) ) {
    /* LOG::LogInteger( message:id ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInteger( message:id )" );
    LOG_LogInteger( id );
    /* GENERATE SIMPLETEST6:foundDesiredRoomEvent() TO self */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE SIMPLETEST6:foundDesiredRoomEvent() TO self" );
    { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( self, &UserComponent_SIMPLETESTevent6c );
      Escher_SendSelfEvent( e );
    }
  }
}

/*
 * State 5:  [addGuest]
 */
static void UserComponent_SIMPLETEST_act5( UserComponent_SIMPLETEST *, const Escher_xtUMLEvent_t * const );
static void
UserComponent_SIMPLETEST_act5( UserComponent_SIMPLETEST * self, const Escher_xtUMLEvent_t * const event )
{
  UserComponent_SIMPLETESTevent4 * rcvd_evt = (UserComponent_SIMPLETESTevent4 *) event;
  /* LOG::LogInfo( message:UC ST, adding guest ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:UC ST, adding guest )" );
  LOG_LogInfo( "UC ST, adding guest" );
  /* SEND UserInterface::addGuest(guestAge:13, guestName:Glenn Goe, sessionID:self.sessionID) */
  XTUML_OAL_STMT_TRACE( 1, "SEND UserInterface::addGuest(guestAge:13, guestName:Glenn Goe, sessionID:self.sessionID)" );
  UserComponent_UserInterface_addGuest( 13, "Glenn Goe", self->sessionID );
}

/*
 * State 6:  [confirmBooking]
 */
static void UserComponent_SIMPLETEST_act6( UserComponent_SIMPLETEST *, const Escher_xtUMLEvent_t * const );
static void
UserComponent_SIMPLETEST_act6( UserComponent_SIMPLETEST * self, const Escher_xtUMLEvent_t * const event )
{
  UserComponent_SIMPLETESTevent4 * rcvd_evt = (UserComponent_SIMPLETESTevent4 *) event;
  /* LOG::LogInfo( message:UC confirmBooking, sending confirm back ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:UC confirmBooking, sending confirm back )" );
  LOG_LogInfo( "UC confirmBooking, sending confirm back" );
  /* SEND Port2::confirmSignal(message:Confirmed!, sessionID:self.sessionID) */
  XTUML_OAL_STMT_TRACE( 1, "SEND Port2::confirmSignal(message:Confirmed!, sessionID:self.sessionID)" );
  UserComponent_Port2_confirmSignal( "Confirmed!", self->sessionID );
}

/*
 * State 7:  [sendCustomerDetails]
 */
static void UserComponent_SIMPLETEST_act7( UserComponent_SIMPLETEST *, const Escher_xtUMLEvent_t * const );
static void
UserComponent_SIMPLETEST_act7( UserComponent_SIMPLETEST * self, const Escher_xtUMLEvent_t * const event )
{
  UserComponent_SIMPLETESTevent4 * rcvd_evt = (UserComponent_SIMPLETESTevent4 *) event;
  /* LOG::LogInfo( message:UC sendCustomerDetails, sending customer details ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:UC sendCustomerDetails, sending customer details )" );
  LOG_LogInfo( "UC sendCustomerDetails, sending customer details" );
  /* SEND UserInterface::customerDetails(name:Geisha, phoneNumber:123123123, sessionID:self.sessionID) */
  XTUML_OAL_STMT_TRACE( 1, "SEND UserInterface::customerDetails(name:Geisha, phoneNumber:123123123, sessionID:self.sessionID)" );
  UserComponent_UserInterface_customerDetails( "Geisha", "123123123", self->sessionID );
}

/*
 * State 8:  [sendPaymentInfo]
 */
static void UserComponent_SIMPLETEST_act8( UserComponent_SIMPLETEST *, const Escher_xtUMLEvent_t * const );
static void
UserComponent_SIMPLETEST_act8( UserComponent_SIMPLETEST * self, const Escher_xtUMLEvent_t * const event )
{
  UserComponent_SIMPLETESTevent4 * rcvd_evt = (UserComponent_SIMPLETESTevent4 *) event;
  /* LOG::LogInfo( message:UC sendPaymentInfo, sending paymentinfo... ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:UC sendPaymentInfo, sending paymentinfo... )" );
  LOG_LogInfo( "UC sendPaymentInfo, sending paymentinfo..." );
  /* SEND UserInterface::paymentInfo(info:Stolen credit card, sessionID:self.sessionID) */
  XTUML_OAL_STMT_TRACE( 1, "SEND UserInterface::paymentInfo(info:Stolen credit card, sessionID:self.sessionID)" );
  UserComponent_UserInterface_paymentInfo( "Stolen credit card", self->sessionID );
}

/*
 * State 9:  [endOfListState]
 */
static void UserComponent_SIMPLETEST_act9( UserComponent_SIMPLETEST *, const Escher_xtUMLEvent_t * const );
static void
UserComponent_SIMPLETEST_act9( UserComponent_SIMPLETEST * self, const Escher_xtUMLEvent_t * const event )
{
  /* LOG::LogInfo( message:UC: EndOfListState found desired facilitytype ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:UC: EndOfListState found desired facilitytype )" );
  LOG_LogInfo( "UC: EndOfListState found desired facilitytype" );
  /* SEND UserInterface::selectBookable(id:self.desiredType, sessionID:self.sessionID) */
  XTUML_OAL_STMT_TRACE( 1, "SEND UserInterface::selectBookable(id:self.desiredType, sessionID:self.sessionID)" );
  UserComponent_UserInterface_selectBookable( self->desiredType, self->sessionID );
}

/*
 * State 10:  [failedTest]
 */
static void UserComponent_SIMPLETEST_act10( UserComponent_SIMPLETEST *, const Escher_xtUMLEvent_t * const );
static void
UserComponent_SIMPLETEST_act10( UserComponent_SIMPLETEST * self, const Escher_xtUMLEvent_t * const event )
{
  /* LOG::LogInfo( message:Test failed. ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:Test failed. )" );
  LOG_LogInfo( "Test failed." );
}



  /*
   * Array of string names of the state machine names.
   * Index is the (MC enumerated) number of the state.
   */
  static const c_t * const state_name_strings_CB[ 1 ] = {
    "",
  };

/*
 * There are either no events defined for this state machine,
 * no transitions, or no states.  So we will ignore _all_ events.
 */
void
UserComponent_SIMPLETEST_CBDispatch( Escher_xtUMLEvent_t * event )
{}

const Escher_xtUMLEventConstant_t UserComponent_SIMPLETESTevent1c = {
  UserComponent_DOMAIN_ID, UserComponent_SIMPLETEST_CLASS_NUMBER, USERCOMPONENT_SIMPLETESTEVENT1NUM,
  ESCHER_IS_INSTANCE_EVENT };

const Escher_xtUMLEventConstant_t UserComponent_SIMPLETESTevent2c = {
  UserComponent_DOMAIN_ID, UserComponent_SIMPLETEST_CLASS_NUMBER, USERCOMPONENT_SIMPLETESTEVENT2NUM,
  ESCHER_IS_INSTANCE_EVENT };

const Escher_xtUMLEventConstant_t UserComponent_SIMPLETESTevent3c = {
  UserComponent_DOMAIN_ID, UserComponent_SIMPLETEST_CLASS_NUMBER, USERCOMPONENT_SIMPLETESTEVENT3NUM,
  ESCHER_IS_INSTANCE_EVENT };

const Escher_xtUMLEventConstant_t UserComponent_SIMPLETESTevent4c = {
  UserComponent_DOMAIN_ID, UserComponent_SIMPLETEST_CLASS_NUMBER, USERCOMPONENT_SIMPLETESTEVENT4NUM,
  ESCHER_IS_INSTANCE_EVENT };

const Escher_xtUMLEventConstant_t UserComponent_SIMPLETESTevent5c = {
  UserComponent_DOMAIN_ID, UserComponent_SIMPLETEST_CLASS_NUMBER, USERCOMPONENT_SIMPLETESTEVENT5NUM,
  ESCHER_IS_INSTANCE_EVENT };

const Escher_xtUMLEventConstant_t UserComponent_SIMPLETESTevent6c = {
  UserComponent_DOMAIN_ID, UserComponent_SIMPLETEST_CLASS_NUMBER, USERCOMPONENT_SIMPLETESTEVENT6NUM,
  ESCHER_IS_INSTANCE_EVENT };

const Escher_xtUMLEventConstant_t UserComponent_SIMPLETESTevent7c = {
  UserComponent_DOMAIN_ID, UserComponent_SIMPLETEST_CLASS_NUMBER, USERCOMPONENT_SIMPLETESTEVENT7NUM,
  ESCHER_IS_INSTANCE_EVENT };



/*
 * State-Event Matrix (SEM)
 * Row index is object (MC enumerated) current state.
 * Row zero is the uninitialized state (e.g., for creation event transitions).
 * Column index is (MC enumerated) state machine events.
 */
static const Escher_SEMcell_t UserComponent_SIMPLETEST_StateEventMatrix[ 10 + 1 ][ 7 ] = {
  /* row 0:  uninitialized state (for creation events) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 1:  UserComponent_SIMPLETEST_STATE_1 (entryPoint) */
  { UserComponent_SIMPLETEST_STATE_2, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 2:  UserComponent_SIMPLETEST_STATE_2 (requestSession) */
  { EVENT_CANT_HAPPEN, UserComponent_SIMPLETEST_STATE_3, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 3:  UserComponent_SIMPLETEST_STATE_3 (requestAvailableBookables) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, UserComponent_SIMPLETEST_STATE_4, EVENT_CANT_HAPPEN, UserComponent_SIMPLETEST_STATE_10, EVENT_CANT_HAPPEN, UserComponent_SIMPLETEST_STATE_10 },
  /* row 4:  UserComponent_SIMPLETEST_STATE_4 (selectRooms) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, UserComponent_SIMPLETEST_STATE_4, EVENT_CANT_HAPPEN, UserComponent_SIMPLETEST_STATE_10, UserComponent_SIMPLETEST_STATE_9, EVENT_CANT_HAPPEN },
  /* row 5:  UserComponent_SIMPLETEST_STATE_5 (addGuest) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, UserComponent_SIMPLETEST_STATE_6, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 6:  UserComponent_SIMPLETEST_STATE_6 (confirmBooking) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, UserComponent_SIMPLETEST_STATE_7, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 7:  UserComponent_SIMPLETEST_STATE_7 (sendCustomerDetails) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, UserComponent_SIMPLETEST_STATE_8, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 8:  UserComponent_SIMPLETEST_STATE_8 (sendPaymentInfo) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 9:  UserComponent_SIMPLETEST_STATE_9 (endOfListState) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_IS_IGNORED, UserComponent_SIMPLETEST_STATE_5, EVENT_IS_IGNORED, EVENT_CANT_HAPPEN, UserComponent_SIMPLETEST_STATE_10 },
  /* row 10:  UserComponent_SIMPLETEST_STATE_10 (failedTest) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN }
};

  /*
   * Array of pointers to the class state action procedures.
   * Index is the (MC enumerated) number of the state action to execute.
   */
  static const StateAction_t UserComponent_SIMPLETEST_acts[ 11 ] = {
    (StateAction_t) 0,
    (StateAction_t) UserComponent_SIMPLETEST_act1,  /* entryPoint */
    (StateAction_t) UserComponent_SIMPLETEST_act2,  /* requestSession */
    (StateAction_t) UserComponent_SIMPLETEST_act3,  /* requestAvailableBookables */
    (StateAction_t) UserComponent_SIMPLETEST_act4,  /* selectRooms */
    (StateAction_t) UserComponent_SIMPLETEST_act5,  /* addGuest */
    (StateAction_t) UserComponent_SIMPLETEST_act6,  /* confirmBooking */
    (StateAction_t) UserComponent_SIMPLETEST_act7,  /* sendCustomerDetails */
    (StateAction_t) UserComponent_SIMPLETEST_act8,  /* sendPaymentInfo */
    (StateAction_t) UserComponent_SIMPLETEST_act9,  /* endOfListState */
    (StateAction_t) UserComponent_SIMPLETEST_act10  /* failedTest */
  };

  /*
   * Array of string names of the state machine names.
   * Index is the (MC enumerated) number of the state.
   */
  static const c_t * const state_name_strings[ 11 ] = {
    "",
    "entryPoint",
    "requestSession",
    "requestAvailableBookables",
    "selectRooms",
    "addGuest",
    "confirmBooking",
    "sendCustomerDetails",
    "sendPaymentInfo",
    "endOfListState",
    "failedTest"
  };

/*
 * instance state machine event dispatching
 */
void
UserComponent_SIMPLETEST_Dispatch( Escher_xtUMLEvent_t * event )
{
  Escher_iHandle_t instance = GetEventTargetInstance( event );
  Escher_EventNumber_t event_number = GetOoaEventNumber( event );
  Escher_StateNumber_t current_state;
  Escher_StateNumber_t next_state;
  
  if ( 0 != instance ) {
    current_state = instance->current_state;
    if ( current_state > 10 ) {
      /* instance validation failure (object deleted while event in flight) */
      UserEventNoInstanceCallout( event_number );
    } else {
      next_state = UserComponent_SIMPLETEST_StateEventMatrix[ current_state ][ event_number ];
      if ( next_state <= 10 ) {
        STATE_TXN_START_TRACE( "SIMPLETEST", current_state, state_name_strings[ current_state ] );
        /* Execute the state action and update the current state.  */
        ( *UserComponent_SIMPLETEST_acts[ next_state ] )( instance, event );
        STATE_TXN_END_TRACE( "SIMPLETEST", next_state, state_name_strings[ next_state ] );
        instance->current_state = next_state;
      } else if ( next_state == EVENT_CANT_HAPPEN ) {
          /* event cant happen */
          UserEventCantHappenCallout( current_state, next_state, event_number );
          STATE_TXN_CH_TRACE( "SIMPLETEST", current_state );
      } else if ( next_state == EVENT_IS_IGNORED ) {
          /* event ignored */
          STATE_TXN_IG_TRACE( "SIMPLETEST", current_state );
      } else {
        /* empty else */
      }
    }
  }
}


