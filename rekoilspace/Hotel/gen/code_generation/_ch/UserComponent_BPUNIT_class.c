/*----------------------------------------------------------------------------
 * File:  UserComponent_BPUNIT_class.c
 *
 * Class:       BPUnit  (BPUNIT)
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
static Escher_SetElement_s UserComponent_BPUNIT_container[ UserComponent_BPUNIT_MAX_EXTENT_SIZE ];
static UserComponent_BPUNIT UserComponent_BPUNIT_instances[ UserComponent_BPUNIT_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_UserComponent_BPUNIT_extent = {
  {0}, {0}, &UserComponent_BPUNIT_container[ 0 ],
  (Escher_iHandle_t) &UserComponent_BPUNIT_instances,
  sizeof( UserComponent_BPUNIT ), 0, UserComponent_BPUNIT_MAX_EXTENT_SIZE
  };
/*----------------------------------------------------------------------------
 * State and transition action implementations for the following class:
 *
 * Class:      BPUnit  (BPUNIT)
 * Component:  UserComponent
 *--------------------------------------------------------------------------*/

/*
 * State 1:  [Standby]
 */
static void UserComponent_BPUNIT_CB_act1( UserComponent_BPUNIT *, const Escher_xtUMLEvent_t * const );
static void
UserComponent_BPUNIT_CB_act1( UserComponent_BPUNIT * self, const Escher_xtUMLEvent_t * const event )
{
}



  /*
   * Array of pointers to the class state action procedures.
   * Index is the (MC enumerated) number of the state action to execute.
   */
  static const StateAction_t UserComponent_BPUNIT_CB_acts[ 2 ] = {
    (StateAction_t) 0,
    (StateAction_t) UserComponent_BPUNIT_CB_act1  /* Standby */
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
UserComponent_BPUNIT_CBDispatch( Escher_xtUMLEvent_t * event )
{}


