/*----------------------------------------------------------------------------
 * File:  UserComponent_CHECKOUTTEST_class.c
 *
 * Class:       CheckOutTest  (CHECKOUTTEST)
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
static Escher_SetElement_s UserComponent_CHECKOUTTEST_container[ UserComponent_CHECKOUTTEST_MAX_EXTENT_SIZE ];
static UserComponent_CHECKOUTTEST UserComponent_CHECKOUTTEST_instances[ UserComponent_CHECKOUTTEST_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_UserComponent_CHECKOUTTEST_extent = {
  {0}, {0}, &UserComponent_CHECKOUTTEST_container[ 0 ],
  (Escher_iHandle_t) &UserComponent_CHECKOUTTEST_instances,
  sizeof( UserComponent_CHECKOUTTEST ), UserComponent_CHECKOUTTEST_STATE_1, UserComponent_CHECKOUTTEST_MAX_EXTENT_SIZE
  };
/*----------------------------------------------------------------------------
 * State and transition action implementations for the following class:
 *
 * Class:      CheckOutTest  (CHECKOUTTEST)
 * Component:  UserComponent
 *--------------------------------------------------------------------------*/

/*
 * State 1:  [checkedIn]
 * Note: Self creation state (asynchronous creation)
 */
static void UserComponent_CHECKOUTTEST_act1( UserComponent_CHECKOUTTEST *, const Escher_xtUMLEvent_t * const );
static void
UserComponent_CHECKOUTTEST_act1( UserComponent_CHECKOUTTEST * self, const Escher_xtUMLEvent_t * const event )
{
}

/*
 * State 2:  [attemptCheckOut]
 */
static void UserComponent_CHECKOUTTEST_act2( UserComponent_CHECKOUTTEST *, const Escher_xtUMLEvent_t * const );
static void
UserComponent_CHECKOUTTEST_act2( UserComponent_CHECKOUTTEST * self, const Escher_xtUMLEvent_t * const event )
{
  UserComponent_CHECKOUTTESTevent1 * rcvd_evt = (UserComponent_CHECKOUTTESTevent1 *) event;
  /* ASSIGN self.bookingNumber = PARAM.bookingNumber */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN self.bookingNumber = PARAM.bookingNumber" );
  self->bookingNumber = rcvd_evt->p_bookingNumber;
  /* SEND Port2::checkOutGuest(age:PARAM.age, bookingNumber:self.bookingNumber, name:PARAM.name) */
  XTUML_OAL_STMT_TRACE( 1, "SEND Port2::checkOutGuest(age:PARAM.age, bookingNumber:self.bookingNumber, name:PARAM.name)" );
  UserComponent_Port2_checkOutGuest( rcvd_evt->p_age, self->bookingNumber, rcvd_evt->p_name );
}

/*
 * State 3:  [returnedCheckOut]
 */
static void UserComponent_CHECKOUTTEST_act3( UserComponent_CHECKOUTTEST *, const Escher_xtUMLEvent_t * const );
static void
UserComponent_CHECKOUTTEST_act3( UserComponent_CHECKOUTTEST * self, const Escher_xtUMLEvent_t * const event )
{
  UserComponent_CHECKOUTTESTevent2 * rcvd_evt = (UserComponent_CHECKOUTTESTevent2 *) event;
  bool success;
  /* ASSIGN success = PARAM.success */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN success = PARAM.success" );
  success = rcvd_evt->p_success;
  /* IF ( success ) */
  XTUML_OAL_STMT_TRACE( 1, "IF ( success )" );
  if ( success ) {
    /* GENERATE CHECKOUTTEST4:successEvent() TO self */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE CHECKOUTTEST4:successEvent() TO self" );
    { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( self, &UserComponent_CHECKOUTTESTevent4c );
      Escher_SendSelfEvent( e );
    }
  }
  else {
    /* GENERATE CHECKOUTTEST3:failEvent() TO self */
    XTUML_OAL_STMT_TRACE( 2, "GENERATE CHECKOUTTEST3:failEvent() TO self" );
    { Escher_xtUMLEvent_t * e = Escher_NewxtUMLEvent( self, &UserComponent_CHECKOUTTESTevent3c );
      Escher_SendSelfEvent( e );
    }
  }
}

/*
 * State 4:  [successState]
 */
static void UserComponent_CHECKOUTTEST_act4( UserComponent_CHECKOUTTEST *, const Escher_xtUMLEvent_t * const );
static void
UserComponent_CHECKOUTTEST_act4( UserComponent_CHECKOUTTEST * self, const Escher_xtUMLEvent_t * const event )
{
}

/*
 * State 5:  [failEvent]
 */
static void UserComponent_CHECKOUTTEST_act5( UserComponent_CHECKOUTTEST *, const Escher_xtUMLEvent_t * const );
static void
UserComponent_CHECKOUTTEST_act5( UserComponent_CHECKOUTTEST * self, const Escher_xtUMLEvent_t * const event )
{
}

const Escher_xtUMLEventConstant_t UserComponent_CHECKOUTTESTevent1c = {
  UserComponent_DOMAIN_ID, UserComponent_CHECKOUTTEST_CLASS_NUMBER, USERCOMPONENT_CHECKOUTTESTEVENT1NUM,
  ESCHER_IS_INSTANCE_EVENT };

const Escher_xtUMLEventConstant_t UserComponent_CHECKOUTTESTevent2c = {
  UserComponent_DOMAIN_ID, UserComponent_CHECKOUTTEST_CLASS_NUMBER, USERCOMPONENT_CHECKOUTTESTEVENT2NUM,
  ESCHER_IS_INSTANCE_EVENT };

const Escher_xtUMLEventConstant_t UserComponent_CHECKOUTTESTevent3c = {
  UserComponent_DOMAIN_ID, UserComponent_CHECKOUTTEST_CLASS_NUMBER, USERCOMPONENT_CHECKOUTTESTEVENT3NUM,
  ESCHER_IS_INSTANCE_EVENT };

const Escher_xtUMLEventConstant_t UserComponent_CHECKOUTTESTevent4c = {
  UserComponent_DOMAIN_ID, UserComponent_CHECKOUTTEST_CLASS_NUMBER, USERCOMPONENT_CHECKOUTTESTEVENT4NUM,
  ESCHER_IS_INSTANCE_EVENT };



/*
 * State-Event Matrix (SEM)
 * Row index is object (MC enumerated) current state.
 * Row zero is the uninitialized state (e.g., for creation event transitions).
 * Column index is (MC enumerated) state machine events.
 */
static const Escher_SEMcell_t UserComponent_CHECKOUTTEST_StateEventMatrix[ 5 + 1 ][ 4 ] = {
  /* row 0:  uninitialized state (for creation events) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 1:  UserComponent_CHECKOUTTEST_STATE_1 (checkedIn) */
  { UserComponent_CHECKOUTTEST_STATE_2, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 2:  UserComponent_CHECKOUTTEST_STATE_2 (attemptCheckOut) */
  { EVENT_CANT_HAPPEN, UserComponent_CHECKOUTTEST_STATE_3, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 3:  UserComponent_CHECKOUTTEST_STATE_3 (returnedCheckOut) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, UserComponent_CHECKOUTTEST_STATE_5, UserComponent_CHECKOUTTEST_STATE_4 },
  /* row 4:  UserComponent_CHECKOUTTEST_STATE_4 (successState) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 5:  UserComponent_CHECKOUTTEST_STATE_5 (failEvent) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN }
};

  /*
   * Array of pointers to the class state action procedures.
   * Index is the (MC enumerated) number of the state action to execute.
   */
  static const StateAction_t UserComponent_CHECKOUTTEST_acts[ 6 ] = {
    (StateAction_t) 0,
    (StateAction_t) UserComponent_CHECKOUTTEST_act1,  /* checkedIn */
    (StateAction_t) UserComponent_CHECKOUTTEST_act2,  /* attemptCheckOut */
    (StateAction_t) UserComponent_CHECKOUTTEST_act3,  /* returnedCheckOut */
    (StateAction_t) UserComponent_CHECKOUTTEST_act4,  /* successState */
    (StateAction_t) UserComponent_CHECKOUTTEST_act5  /* failEvent */
  };

  /*
   * Array of string names of the state machine names.
   * Index is the (MC enumerated) number of the state.
   */
  static const c_t * const state_name_strings[ 6 ] = {
    "",
    "checkedIn",
    "attemptCheckOut",
    "returnedCheckOut",
    "successState",
    "failEvent"
  };

/*
 * instance state machine event dispatching
 */
void
UserComponent_CHECKOUTTEST_Dispatch( Escher_xtUMLEvent_t * event )
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
      next_state = UserComponent_CHECKOUTTEST_StateEventMatrix[ current_state ][ event_number ];
      if ( next_state <= 5 ) {
        STATE_TXN_START_TRACE( "CHECKOUTTEST", current_state, state_name_strings[ current_state ] );
        /* Execute the state action and update the current state.  */
        ( *UserComponent_CHECKOUTTEST_acts[ next_state ] )( instance, event );
        STATE_TXN_END_TRACE( "CHECKOUTTEST", next_state, state_name_strings[ next_state ] );
        instance->current_state = next_state;
      } else if ( next_state == EVENT_CANT_HAPPEN ) {
          /* event cant happen */
          UserEventCantHappenCallout( current_state, next_state, event_number );
          STATE_TXN_CH_TRACE( "CHECKOUTTEST", current_state );
      } else {
        /* empty else */
      }
    }
  }
}


