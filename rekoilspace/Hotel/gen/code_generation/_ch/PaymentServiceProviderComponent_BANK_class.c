/*----------------------------------------------------------------------------
 * File:  PaymentServiceProviderComponent_BANK_class.c
 *
 * Class:       Bank  (BANK)
 * Component:   PaymentServiceProviderComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "Hotel_sys_types.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "PaymentServiceProviderComponent_classes.h"


/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s PaymentServiceProviderComponent_BANK_container[ PaymentServiceProviderComponent_BANK_MAX_EXTENT_SIZE ];
static PaymentServiceProviderComponent_BANK PaymentServiceProviderComponent_BANK_instances[ PaymentServiceProviderComponent_BANK_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_PaymentServiceProviderComponent_BANK_extent = {
  {0}, {0}, &PaymentServiceProviderComponent_BANK_container[ 0 ],
  (Escher_iHandle_t) &PaymentServiceProviderComponent_BANK_instances,
  sizeof( PaymentServiceProviderComponent_BANK ), 0, PaymentServiceProviderComponent_BANK_MAX_EXTENT_SIZE
  };
/*----------------------------------------------------------------------------
 * State and transition action implementations for the following class:
 *
 * Class:      Bank  (BANK)
 * Component:  PaymentServiceProviderComponent
 *--------------------------------------------------------------------------*/

/*
 * State 1:  [ready]
 */
static void PaymentServiceProviderComponent_BANK_CB_act1( PaymentServiceProviderComponent_BANK *, const Escher_xtUMLEvent_t * const );
static void
PaymentServiceProviderComponent_BANK_CB_act1( PaymentServiceProviderComponent_BANK * self, const Escher_xtUMLEvent_t * const event )
{
  PaymentServiceProviderComponent_BANK_CBevent1 * rcvd_evt = (PaymentServiceProviderComponent_BANK_CBevent1 *) event;
}

/*
 */
static void PaymentServiceProviderComponent_BANK_CB_xact1( PaymentServiceProviderComponent_BANK *, const Escher_xtUMLEvent_t * const );
static void
PaymentServiceProviderComponent_BANK_CB_xact1( PaymentServiceProviderComponent_BANK * self, const Escher_xtUMLEvent_t * const event )
{
  PaymentServiceProviderComponent_BANK_CBevent1 * rcvd_evt = (PaymentServiceProviderComponent_BANK_CBevent1 *) event;
  /* LOG::LogInfo( message:Bank paymentInfo: confirming valid payment ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:Bank paymentInfo: confirming valid payment )" );
  LOG_LogInfo( "Bank paymentInfo: confirming valid payment" );
  /* SEND Port1::paymentValid(sessionID:PARAM.sessionID, valid:TRUE) */
  XTUML_OAL_STMT_TRACE( 1, "SEND Port1::paymentValid(sessionID:PARAM.sessionID, valid:TRUE)" );
  PaymentServiceProviderComponent_Port1_paymentValid( rcvd_evt->p_sessionID, TRUE );
}

const Escher_xtUMLEventConstant_t PaymentServiceProviderComponent_BANK_CBevent1c = {
  PaymentServiceProviderComponent_DOMAIN_ID, PaymentServiceProviderComponent_BANK_CLASS_NUMBER_CB, PAYMENTSERVICEPROVIDERCOMPONENT_BANK_CBEVENT1NUM,
  ESCHER_IS_ASSIGNER_EVENT };



/*
 * State-Event Matrix (SEM)
 * Row index is object (MC enumerated) current state.
 * Row zero is the uninitialized state (e.g., for creation event transitions).
 * Column index is (MC enumerated) state machine events.
 */
static const Escher_SEMcell_t PaymentServiceProviderComponent_BANK_CB_StateEventMatrix[ 1 + 1 ][ 1 ] = {
  /* row 0:  uninitialized state (for creation events) */
  { EVENT_CANT_HAPPEN },
  /* row 1:  PaymentServiceProviderComponent_BANK_CB_STATE_1 (ready) */
  { (1<<8) + PaymentServiceProviderComponent_BANK_CB_STATE_1 }
};

  /*
   * Array of pointers to the class state action procedures.
   * Index is the (MC enumerated) number of the state action to execute.
   */
  static const StateAction_t PaymentServiceProviderComponent_BANK_CB_acts[ 2 ] = {
    (StateAction_t) 0,
    (StateAction_t) PaymentServiceProviderComponent_BANK_CB_act1  /* ready */
  };

  /*
   * Array of string names of the state machine names.
   * Index is the (MC enumerated) number of the state.
   */
  static const c_t * const state_name_strings_CB[ 2 ] = {
    "",
    "ready"
  };

  /*
   * Array of pointers to the class transition action procedures.
   * Index is the (MC enumerated) number of the transition action to execute.
   */
  static const StateAction_t PaymentServiceProviderComponent_BANK_CB_xacts[ 1 ] = {
    (StateAction_t) PaymentServiceProviderComponent_BANK_CB_xact1
  };

/*
 * class-based state machine event dispatching
 */
void
PaymentServiceProviderComponent_BANK_CBDispatch( Escher_xtUMLEvent_t * event )
{
  static Escher_InstanceBase_t class_based_singleton = { PaymentServiceProviderComponent_BANK_CB_STATE_1 };
  Escher_EventNumber_t event_number = GetOoaEventNumber( event );
  Escher_StateNumber_t current_state = class_based_singleton.current_state;
  Escher_SEMcell_t next_state = PaymentServiceProviderComponent_BANK_CB_StateEventMatrix[ current_state ][ event_number ];

  if ( next_state <= 1 ) {
    STATE_TXN_START_TRACE( "BANK", current_state, state_name_strings_CB[ current_state ] );
    /* Execute the state action and update the current state.  */
    ( *PaymentServiceProviderComponent_BANK_CB_acts[ next_state ] )( &class_based_singleton, event );
    class_based_singleton.current_state = next_state;
    STATE_TXN_END_TRACE( "BANK", next_state, state_name_strings_CB[ next_state ] );
  } else {
    if ( EVENT_CANT_HAPPEN == next_state ) {
      /* Event cannot happen.  */
      UserEventCantHappenCallout( current_state, next_state, event_number );
      STATE_TXN_CH_TRACE( "BANK", current_state );
    } else if ( EVENT_IS_IGNORED == next_state ) {
      /* Event ignored */
      STATE_TXN_IG_TRACE( "BANK", current_state );
    } else {
      STATE_TXN_START_TRACE( "BANK", current_state, state_name_strings_CB[ current_state ] );
      ( *PaymentServiceProviderComponent_BANK_CB_xacts[ (next_state>>8)-1 ] )( &class_based_singleton, event );
      next_state = next_state & 0x00ff;
      class_based_singleton.current_state = next_state;
      ( *PaymentServiceProviderComponent_BANK_CB_acts[ next_state ] )( &class_based_singleton, event );
      STATE_TXN_END_TRACE( "BANK", next_state, state_name_strings_CB[ next_state ] );
    }
  }
}


