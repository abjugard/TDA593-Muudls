/*----------------------------------------------------------------------------
 * File:  UserComponent_SETUP_class.c
 *
 * Class:       Setup  (SETUP)
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
static Escher_SetElement_s UserComponent_SETUP_container[ UserComponent_SETUP_MAX_EXTENT_SIZE ];
static UserComponent_SETUP UserComponent_SETUP_instances[ UserComponent_SETUP_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_UserComponent_SETUP_extent = {
  {0}, {0}, &UserComponent_SETUP_container[ 0 ],
  (Escher_iHandle_t) &UserComponent_SETUP_instances,
  sizeof( UserComponent_SETUP ), UserComponent_SETUP_STATE_1, UserComponent_SETUP_MAX_EXTENT_SIZE
  };
/*----------------------------------------------------------------------------
 * State and transition action implementations for the following class:
 *
 * Class:      Setup  (SETUP)
 * Component:  UserComponent
 *--------------------------------------------------------------------------*/

/*
 * State 1:  [Setup]
 * Note: Self creation state (asynchronous creation)
 */
static void UserComponent_SETUP_act1( UserComponent_SETUP *, const Escher_xtUMLEvent_t * const );
static void
UserComponent_SETUP_act1( UserComponent_SETUP * self, const Escher_xtUMLEvent_t * const event )
{
  /* SEND Port1::addFacilityType(approximateArea:10-12 m^2, description:ASBRA, name:Single Room, price:1500) */
  XTUML_OAL_STMT_TRACE( 1, "SEND Port1::addFacilityType(approximateArea:10-12 m^2, description:ASBRA, name:Single Room, price:1500)" );
  UserComponent_Port1_addFacilityType( "10-12 m^2", "ASBRA", "Single Room", 1500 );
  /* SEND Port1::addFacilityType(approximateArea:12-14 m^2, description:DÅLIGT, name:Double Room, price:2500) */
  XTUML_OAL_STMT_TRACE( 1, "SEND Port1::addFacilityType(approximateArea:12-14 m^2, description:DÅLIGT, name:Double Room, price:2500)" );
  UserComponent_Port1_addFacilityType( "12-14 m^2", "DÅLIGT", "Double Room", 2500 );
}

/*
 * State 2:  [CreateFacilities]
 */
static void UserComponent_SETUP_act2( UserComponent_SETUP *, const Escher_xtUMLEvent_t * const );
static void
UserComponent_SETUP_act2( UserComponent_SETUP * self, const Escher_xtUMLEvent_t * const event )
{
  UserComponent_SETUPevent1 * rcvd_evt = (UserComponent_SETUPevent1 *) event;
  /* LOG::LogInfo( message:creating facilities ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:creating facilities )" );
  LOG_LogInfo( "creating facilities" );
  /* SEND Port1::addFacility(facilityID:1215D, facilityType:PARAM.facilityType) */
  XTUML_OAL_STMT_TRACE( 1, "SEND Port1::addFacility(facilityID:1215D, facilityType:PARAM.facilityType)" );
  UserComponent_Port1_addFacility( "1215D", rcvd_evt->p_facilityType );
  /* SEND Port1::addFacility(facilityID:1215A, facilityType:PARAM.facilityType) */
  XTUML_OAL_STMT_TRACE( 1, "SEND Port1::addFacility(facilityID:1215A, facilityType:PARAM.facilityType)" );
  UserComponent_Port1_addFacility( "1215A", rcvd_evt->p_facilityType );
  /* SEND Port1::addFacility(facilityID:1215C, facilityType:PARAM.facilityType) */
  XTUML_OAL_STMT_TRACE( 1, "SEND Port1::addFacility(facilityID:1215C, facilityType:PARAM.facilityType)" );
  UserComponent_Port1_addFacility( "1215C", rcvd_evt->p_facilityType );
}

const Escher_xtUMLEventConstant_t UserComponent_SETUPevent1c = {
  UserComponent_DOMAIN_ID, UserComponent_SETUP_CLASS_NUMBER, USERCOMPONENT_SETUPEVENT1NUM,
  ESCHER_IS_INSTANCE_EVENT };



/*
 * State-Event Matrix (SEM)
 * Row index is object (MC enumerated) current state.
 * Row zero is the uninitialized state (e.g., for creation event transitions).
 * Column index is (MC enumerated) state machine events.
 */
static const Escher_SEMcell_t UserComponent_SETUP_StateEventMatrix[ 2 + 1 ][ 1 ] = {
  /* row 0:  uninitialized state (for creation events) */
  { EVENT_CANT_HAPPEN },
  /* row 1:  UserComponent_SETUP_STATE_1 (Setup) */
  { UserComponent_SETUP_STATE_2 },
  /* row 2:  UserComponent_SETUP_STATE_2 (CreateFacilities) */
  { UserComponent_SETUP_STATE_2 }
};

  /*
   * Array of pointers to the class state action procedures.
   * Index is the (MC enumerated) number of the state action to execute.
   */
  static const StateAction_t UserComponent_SETUP_acts[ 3 ] = {
    (StateAction_t) 0,
    (StateAction_t) UserComponent_SETUP_act1,  /* Setup */
    (StateAction_t) UserComponent_SETUP_act2  /* CreateFacilities */
  };

  /*
   * Array of string names of the state machine names.
   * Index is the (MC enumerated) number of the state.
   */
  static const c_t * const state_name_strings[ 3 ] = {
    "",
    "Setup",
    "CreateFacilities"
  };

/*
 * instance state machine event dispatching
 */
void
UserComponent_SETUP_Dispatch( Escher_xtUMLEvent_t * event )
{
  Escher_iHandle_t instance = GetEventTargetInstance( event );
  Escher_EventNumber_t event_number = GetOoaEventNumber( event );
  Escher_StateNumber_t current_state;
  Escher_StateNumber_t next_state;
  
  if ( 0 != instance ) {
    current_state = instance->current_state;
    if ( current_state > 2 ) {
      /* instance validation failure (object deleted while event in flight) */
      UserEventNoInstanceCallout( event_number );
    } else {
      next_state = UserComponent_SETUP_StateEventMatrix[ current_state ][ event_number ];
      if ( next_state <= 2 ) {
        STATE_TXN_START_TRACE( "SETUP", current_state, state_name_strings[ current_state ] );
        /* Execute the state action and update the current state.  */
        ( *UserComponent_SETUP_acts[ next_state ] )( instance, event );
        STATE_TXN_END_TRACE( "SETUP", next_state, state_name_strings[ next_state ] );
        instance->current_state = next_state;
      } else {
        /* empty else */
      }
    }
  }
}


