/*----------------------------------------------------------------------------
 * File:  UserComponent_SETUP_class.h
 *
 * Class:       Setup  (SETUP)
 * Component:   UserComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef USERCOMPONENT_SETUP_CLASS_H
#define USERCOMPONENT_SETUP_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   Setup  (SETUP)
 */
struct UserComponent_SETUP {
  Escher_StateNumber_t current_state;
  /* application analysis class attributes */

};



#define UserComponent_SETUP_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_UserComponent_SETUP_extent;

/*
 * instance event:  SETUP1:'facilityTypeAdded'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  Escher_UniqueID_t p_facilityType; /* facilityType */
} UserComponent_SETUPevent1;
extern const Escher_xtUMLEventConstant_t UserComponent_SETUPevent1c;

/*
 * union of events targeted towards 'SETUP' state machine
 */
typedef union {
  UserComponent_SETUPevent1 setup11;  
} UserComponent_SETUP_Events_u;

/*
 * enumeration of state model states for class
 */
#define UserComponent_SETUP_STATE_1 1  /* state [1]:  (Setup) */
#define UserComponent_SETUP_STATE_2 2  /* state [2]:  (CreateFacilities) */
/*
 * enumeration of state model event numbers
 */
#define USERCOMPONENT_SETUPEVENT1NUM 0  /* SETUP1:'facilityTypeAdded' */
extern void UserComponent_SETUP_Dispatch( Escher_xtUMLEvent_t * );

#ifdef	__cplusplus
}
#endif

#endif  /* USERCOMPONENT_SETUP_CLASS_H */


