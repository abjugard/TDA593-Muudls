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
  /* LOG::LogInfo( message:Starting simple test... requesting session ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:Starting simple test... requesting session )" );
  LOG_LogInfo( "Starting simple test... requesting session" );
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
  /* LOG::LogInfo( message:Session recieved ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:Session recieved )" );
  LOG_LogInfo( "Session recieved" );
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



/*
 * State-Event Matrix (SEM)
 * Row index is object (MC enumerated) current state.
 * Row zero is the uninitialized state (e.g., for creation event transitions).
 * Column index is (MC enumerated) state machine events.
 */
static const Escher_SEMcell_t UserComponent_SIMPLETEST_StateEventMatrix[ 3 + 1 ][ 2 ] = {
  /* row 0:  uninitialized state (for creation events) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 1:  UserComponent_SIMPLETEST_STATE_1 (entryPoint) */
  { UserComponent_SIMPLETEST_STATE_2, EVENT_CANT_HAPPEN },
  /* row 2:  UserComponent_SIMPLETEST_STATE_2 (requestSession) */
  { EVENT_CANT_HAPPEN, UserComponent_SIMPLETEST_STATE_3 },
  /* row 3:  UserComponent_SIMPLETEST_STATE_3 (requestAvailableBookables) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN }
};

  /*
   * Array of pointers to the class state action procedures.
   * Index is the (MC enumerated) number of the state action to execute.
   */
  static const StateAction_t UserComponent_SIMPLETEST_acts[ 4 ] = {
    (StateAction_t) 0,
    (StateAction_t) UserComponent_SIMPLETEST_act1,  /* entryPoint */
    (StateAction_t) UserComponent_SIMPLETEST_act2,  /* requestSession */
    (StateAction_t) UserComponent_SIMPLETEST_act3  /* requestAvailableBookables */
  };

  /*
   * Array of string names of the state machine names.
   * Index is the (MC enumerated) number of the state.
   */
  static const c_t * const state_name_strings[ 4 ] = {
    "",
    "entryPoint",
    "requestSession",
    "requestAvailableBookables"
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
    if ( current_state > 3 ) {
      /* instance validation failure (object deleted while event in flight) */
      UserEventNoInstanceCallout( event_number );
    } else {
      next_state = UserComponent_SIMPLETEST_StateEventMatrix[ current_state ][ event_number ];
      if ( next_state <= 3 ) {
        STATE_TXN_START_TRACE( "SIMPLETEST", current_state, state_name_strings[ current_state ] );
        /* Execute the state action and update the current state.  */
        ( *UserComponent_SIMPLETEST_acts[ next_state ] )( instance, event );
        STATE_TXN_END_TRACE( "SIMPLETEST", next_state, state_name_strings[ next_state ] );
        instance->current_state = next_state;
      } else if ( next_state == EVENT_CANT_HAPPEN ) {
          /* event cant happen */
          UserEventCantHappenCallout( current_state, next_state, event_number );
          STATE_TXN_CH_TRACE( "SIMPLETEST", current_state );
      } else {
        /* empty else */
      }
    }
  }
}


