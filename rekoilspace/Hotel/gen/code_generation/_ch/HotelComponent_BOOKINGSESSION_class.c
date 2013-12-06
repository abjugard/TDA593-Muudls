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
 * instance operation:  search
 */
Escher_ObjectSet_s *
HotelComponent_BOOKINGSESSION_op_search( HotelComponent_BOOKINGSESSION * self, const i_t p_facilityType, Escher_TimeStamp_t p_fromDate, Escher_TimeStamp_t p_toDate )
{
  Escher_ObjectSet_s b_space={0}; Escher_ObjectSet_s * b = &b_space;
  /* SELECT many b FROM INSTANCES OF FACILITYTYPE */
  XTUML_OAL_STMT_TRACE( 1, "SELECT many b FROM INSTANCES OF FACILITYTYPE" );
  Escher_CopySet( b, &pG_HotelComponent_FACILITYTYPE_extent.active );
  /* RETURN b */
  XTUML_OAL_STMT_TRACE( 1, "RETURN b" );
  {Escher_ObjectSet_s * xtumlOALrv = b;
  Escher_ClearSet( b );
  return xtumlOALrv;}
  Escher_ClearSet( b );

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
  /* Note:  BOOKINGSESSION->BOOKING[R26] not navigated */
  /* Note:  BOOKING->BOOKINGSESSION[R26] not navigated */
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
}

/*
 * State 5:  [finallyReady]
 */
static void HotelComponent_BOOKINGSESSION_act5( HotelComponent_BOOKINGSESSION *, const Escher_xtUMLEvent_t * const );
static void
HotelComponent_BOOKINGSESSION_act5( HotelComponent_BOOKINGSESSION * self, const Escher_xtUMLEvent_t * const event )
{
}

/*
 * State 2:  [selected]
 */
static void HotelComponent_BOOKINGSESSION_act2( HotelComponent_BOOKINGSESSION *, const Escher_xtUMLEvent_t * const );
static void
HotelComponent_BOOKINGSESSION_act2( HotelComponent_BOOKINGSESSION * self, const Escher_xtUMLEvent_t * const event )
{
}

/*
 * State 3:  [guestAdded]
 */
static void HotelComponent_BOOKINGSESSION_act3( HotelComponent_BOOKINGSESSION *, const Escher_xtUMLEvent_t * const );
static void
HotelComponent_BOOKINGSESSION_act3( HotelComponent_BOOKINGSESSION * self, const Escher_xtUMLEvent_t * const event )
{
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
}

/*
 * State 8:  [confirmation]
 */
static void HotelComponent_BOOKINGSESSION_act8( HotelComponent_BOOKINGSESSION *, const Escher_xtUMLEvent_t * const );
static void
HotelComponent_BOOKINGSESSION_act8( HotelComponent_BOOKINGSESSION * self, const Escher_xtUMLEvent_t * const event )
{
}

/*
 * State 9:  [accepted]
 */
static void HotelComponent_BOOKINGSESSION_act9( HotelComponent_BOOKINGSESSION *, const Escher_xtUMLEvent_t * const );
static void
HotelComponent_BOOKINGSESSION_act9( HotelComponent_BOOKINGSESSION * self, const Escher_xtUMLEvent_t * const event )
{
}

/*
 * State 10:  [aborted]
 */
static void HotelComponent_BOOKINGSESSION_act10( HotelComponent_BOOKINGSESSION *, const Escher_xtUMLEvent_t * const );
static void
HotelComponent_BOOKINGSESSION_act10( HotelComponent_BOOKINGSESSION * self, const Escher_xtUMLEvent_t * const event )
{
}

/*
 * State 11:  [searched]
 */
static void HotelComponent_BOOKINGSESSION_act11( HotelComponent_BOOKINGSESSION *, const Escher_xtUMLEvent_t * const );
static void
HotelComponent_BOOKINGSESSION_act11( HotelComponent_BOOKINGSESSION * self, const Escher_xtUMLEvent_t * const event )
{
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
 * State-Event Matrix (SEM)
 * Row index is object (MC enumerated) current state.
 * Row zero is the uninitialized state (e.g., for creation event transitions).
 * Column index is (MC enumerated) state machine events.
 */
static const Escher_SEMcell_t HotelComponent_BOOKINGSESSION_CB_StateEventMatrix[ 1 + 1 ][ 0 ] = {
  /* row 0:  uninitialized state (for creation events) */
  {  },
  /* row 1:  HotelComponent_BOOKINGSESSION_CB_STATE_1 (Standby) */
  {  }
};

  /*
   * Array of pointers to the class state action procedures.
   * Index is the (MC enumerated) number of the state action to execute.
   */
  static const StateAction_t HotelComponent_BOOKINGSESSION_CB_acts[ 2 ] = {
    (StateAction_t) 0,
    (StateAction_t) HotelComponent_BOOKINGSESSION_CB_act1  /* Standby */
  };

  /*
   * Array of string names of the state machine names.
   * Index is the (MC enumerated) number of the state.
   */
  static const c_t * const state_name_strings_CB[ 2 ] = {
    "",
    "Standby"
  };

/*
 * There are either no events defined for this state machine,
 * no transitions, or no states.  So we will ignore _all_ events.
 */
void
HotelComponent_BOOKINGSESSION_CBDispatch( Escher_xtUMLEvent_t * event )
{}












/*
 * State-Event Matrix (SEM)
 * Row index is object (MC enumerated) current state.
 * Row zero is the uninitialized state (e.g., for creation event transitions).
 * Column index is (MC enumerated) state machine events.
 */
static const Escher_SEMcell_t HotelComponent_BOOKINGSESSION_StateEventMatrix[ 11 + 1 ][ 0 ] = {
  /* row 0:  uninitialized state (for creation events) */
  {  },
  /* row 1:  HotelComponent_BOOKINGSESSION_STATE_1 (ready) */
  {  },
  /* row 2:  HotelComponent_BOOKINGSESSION_STATE_2 (selected) */
  {  },
  /* row 3:  HotelComponent_BOOKINGSESSION_STATE_3 (guestAdded) */
  {  },
  /* row 4:  HotelComponent_BOOKINGSESSION_STATE_4 (addService) */
  {  },
  /* row 5:  HotelComponent_BOOKINGSESSION_STATE_5 (finallyReady) */
  {  },
  /* row 6:  HotelComponent_BOOKINGSESSION_STATE_6 (customerProvided) */
  {  },
  /* row 7:  HotelComponent_BOOKINGSESSION_STATE_7 (paymentSuggested) */
  {  },
  /* row 8:  HotelComponent_BOOKINGSESSION_STATE_8 (confirmation) */
  {  },
  /* row 9:  HotelComponent_BOOKINGSESSION_STATE_9 (accepted) */
  {  },
  /* row 10:  HotelComponent_BOOKINGSESSION_STATE_10 (aborted) */
  {  },
  /* row 11:  HotelComponent_BOOKINGSESSION_STATE_11 (searched) */
  {  }
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


