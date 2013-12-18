/*----------------------------------------------------------------------------
 * File:  UserComponent_CHECKINTEST_class.c
 *
 * Class:       CheckInTest  (CHECKINTEST)
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
static Escher_SetElement_s UserComponent_CHECKINTEST_container[ UserComponent_CHECKINTEST_MAX_EXTENT_SIZE ];
static UserComponent_CHECKINTEST UserComponent_CHECKINTEST_instances[ UserComponent_CHECKINTEST_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_UserComponent_CHECKINTEST_extent = {
  {0}, {0}, &UserComponent_CHECKINTEST_container[ 0 ],
  (Escher_iHandle_t) &UserComponent_CHECKINTEST_instances,
  sizeof( UserComponent_CHECKINTEST ), UserComponent_CHECKINTEST_STATE_1, UserComponent_CHECKINTEST_MAX_EXTENT_SIZE
  };
/*----------------------------------------------------------------------------
 * State and transition action implementations for the following class:
 *
 * Class:      CheckInTest  (CHECKINTEST)
 * Component:  UserComponent
 *--------------------------------------------------------------------------*/

/*
 * State 1:  [booked]
 * Note: Self creation state (asynchronous creation)
 */
static void UserComponent_CHECKINTEST_act1( UserComponent_CHECKINTEST *, const Escher_xtUMLEvent_t * const );
static void
UserComponent_CHECKINTEST_act1( UserComponent_CHECKINTEST * self, const Escher_xtUMLEvent_t * const event )
{
}

/*
 * State 2:  [attemptCheckIn]
 */
static void UserComponent_CHECKINTEST_act2( UserComponent_CHECKINTEST *, const Escher_xtUMLEvent_t * const );
static void
UserComponent_CHECKINTEST_act2( UserComponent_CHECKINTEST * self, const Escher_xtUMLEvent_t * const event )
{
  UserComponent_CHECKINTESTevent4 * rcvd_evt = (UserComponent_CHECKINTESTevent4 *) event;
  /* ASSIGN self.bookingNumber = PARAM.bookingNumber */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN self.bookingNumber = PARAM.bookingNumber" );
  self->bookingNumber = rcvd_evt->p_bookingNumber;
  /* SEND Port2::checkInGuest(age:13, bookingNumber:self.bookingNumber, name:Glenn Goe) */
  XTUML_OAL_STMT_TRACE( 1, "SEND Port2::checkInGuest(age:13, bookingNumber:self.bookingNumber, name:Glenn Goe)" );
  UserComponent_Port2_checkInGuest( 13, self->bookingNumber, "Glenn Goe" );
}

/*
 * State 3:  [returnedCheckIn]
 */
static void UserComponent_CHECKINTEST_act3( UserComponent_CHECKINTEST *, const Escher_xtUMLEvent_t * const );
static void
UserComponent_CHECKINTEST_act3( UserComponent_CHECKINTEST * self, const Escher_xtUMLEvent_t * const event )
{
  UserComponent_CHECKINTESTevent3 * rcvd_evt = (UserComponent_CHECKINTESTevent3 *) event;
  bool success;
  /* ASSIGN success = PARAM.success */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN success = PARAM.success" );
  success = rcvd_evt->p_success;
  /* IF ( success ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( success )" );
  if ( success ) {
    /* GENERATE CHECKINTEST2:successEvent() TO self */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE CHECKINTEST2:successEvent() TO self" );
    { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( self, &UserComponent_CHECKINTESTevent2c );
      Escher_SendSelfEvent( e );
    }
  }
  else {
    /* GENERATE CHECKINTEST1:failEvent() TO self */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE CHECKINTEST1:failEvent() TO self" );
    { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( self, &UserComponent_CHECKINTESTevent1c );
      Escher_SendSelfEvent( e );
    }
  }
}

/*
 * State 4:  [testSuccess]
 */
static void UserComponent_CHECKINTEST_act4( UserComponent_CHECKINTEST *, const Escher_xtUMLEvent_t * const );
static void
UserComponent_CHECKINTEST_act4( UserComponent_CHECKINTEST * self, const Escher_xtUMLEvent_t * const event )
{
}

/*
 * State 5:  [testFailed]
 */
static void UserComponent_CHECKINTEST_act5( UserComponent_CHECKINTEST *, const Escher_xtUMLEvent_t * const );
static void
UserComponent_CHECKINTEST_act5( UserComponent_CHECKINTEST * self, const Escher_xtUMLEvent_t * const event )
{
}

const Escher_xtUMLEventConstant_t UserComponent_CHECKINTESTevent1c = {
  UserComponent_DOMAIN_ID, UserComponent_CHECKINTEST_CLASS_NUMBER, USERCOMPONENT_CHECKINTESTEVENT1NUM,
  ESCHER_IS_INSTANCE_EVENT };

const Escher_xtUMLEventConstant_t UserComponent_CHECKINTESTevent2c = {
  UserComponent_DOMAIN_ID, UserComponent_CHECKINTEST_CLASS_NUMBER, USERCOMPONENT_CHECKINTESTEVENT2NUM,
  ESCHER_IS_INSTANCE_EVENT };

const Escher_xtUMLEventConstant_t UserComponent_CHECKINTESTevent3c = {
  UserComponent_DOMAIN_ID, UserComponent_CHECKINTEST_CLASS_NUMBER, USERCOMPONENT_CHECKINTESTEVENT3NUM,
  ESCHER_IS_INSTANCE_EVENT };

const Escher_xtUMLEventConstant_t UserComponent_CHECKINTESTevent4c = {
  UserComponent_DOMAIN_ID, UserComponent_CHECKINTEST_CLASS_NUMBER, USERCOMPONENT_CHECKINTESTEVENT4NUM,
  ESCHER_IS_INSTANCE_EVENT };



/*
 * State-Event Matrix (SEM)
 * Row index is object (MC enumerated) current state.
 * Row zero is the uninitialized state (e.g., for creation event transitions).
 * Column index is (MC enumerated) state machine events.
 */
static const Escher_SEMcell_t UserComponent_CHECKINTEST_StateEventMatrix[ 5 + 1 ][ 4 ] = {
  /* row 0:  uninitialized state (for creation events) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 1:  UserComponent_CHECKINTEST_STATE_1 (booked) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, UserComponent_CHECKINTEST_STATE_2 },
  /* row 2:  UserComponent_CHECKINTEST_STATE_2 (attemptCheckIn) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, UserComponent_CHECKINTEST_STATE_3, EVENT_CANT_HAPPEN },
  /* row 3:  UserComponent_CHECKINTEST_STATE_3 (returnedCheckIn) */
  { UserComponent_CHECKINTEST_STATE_5, UserComponent_CHECKINTEST_STATE_4, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 4:  UserComponent_CHECKINTEST_STATE_4 (testSuccess) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 5:  UserComponent_CHECKINTEST_STATE_5 (testFailed) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN }
};

  /*
   * Array of pointers to the class state action procedures.
   * Index is the (MC enumerated) number of the state action to execute.
   */
  static const StateAction_t UserComponent_CHECKINTEST_acts[ 6 ] = {
    (StateAction_t) 0,
    (StateAction_t) UserComponent_CHECKINTEST_act1,  /* booked */
    (StateAction_t) UserComponent_CHECKINTEST_act2,  /* attemptCheckIn */
    (StateAction_t) UserComponent_CHECKINTEST_act3,  /* returnedCheckIn */
    (StateAction_t) UserComponent_CHECKINTEST_act4,  /* testSuccess */
    (StateAction_t) UserComponent_CHECKINTEST_act5  /* testFailed */
  };

  /*
   * Array of string names of the state machine names.
   * Index is the (MC enumerated) number of the state.
   */
  static const c_t * const state_name_strings[ 6 ] = {
    "",
    "booked",
    "attemptCheckIn",
    "returnedCheckIn",
    "testSuccess",
    "testFailed"
  };

/*
 * instance state machine event dispatching
 */
void
UserComponent_CHECKINTEST_Dispatch( Escher_xtUMLEvent_t * event )
{
  Escher_iHandle_t instance = GetEventTargetInstance( event );
  Escher_EventNumber_t event_number = GetOoaEventNumber( event );
  Escher_StateNumber_t current_state;
  Escher_StateNumber_t next_state;
  
  if ( 0 != instance ) {
    current_state = instance->current_state;
    if ( current_state > 5 ) {
      /* instance validation failure (object deleted while event in flight) */
      UserEventNoInstanceCallout( event_number );
    } else {
      next_state = UserComponent_CHECKINTEST_StateEventMatrix[ current_state ][ event_number ];
      if ( next_state <= 5 ) {
        STATE_TXN_START_TRACE( "CHECKINTEST", current_state, state_name_strings[ current_state ] );
        /* Execute the state action and update the current state.  */
        ( *UserComponent_CHECKINTEST_acts[ next_state ] )( instance, event );
        STATE_TXN_END_TRACE( "CHECKINTEST", next_state, state_name_strings[ next_state ] );
        instance->current_state = next_state;
      } else if ( next_state == EVENT_CANT_HAPPEN ) {
          /* event cant happen */
          UserEventCantHappenCallout( current_state, next_state, event_number );
          STATE_TXN_CH_TRACE( "CHECKINTEST", current_state );
      } else {
        /* empty else */
      }
    }
  }
}


