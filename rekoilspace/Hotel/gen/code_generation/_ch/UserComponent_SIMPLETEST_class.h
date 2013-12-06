/*----------------------------------------------------------------------------
 * File:  UserComponent_SIMPLETEST_class.h
 *
 * Class:       SimpleTest  (SIMPLETEST)
 * Component:   UserComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef USERCOMPONENT_SIMPLETEST_CLASS_H
#define USERCOMPONENT_SIMPLETEST_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   SimpleTest  (SIMPLETEST)
 */
struct UserComponent_SIMPLETEST {
  Escher_StateNumber_t current_state;
  /* application analysis class attributes */
  Escher_UniqueID_t sessionID;  /* - sessionID */

};



#define UserComponent_SIMPLETEST_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_UserComponent_SIMPLETEST_extent;


/* WARNING! No states defined for state model */

/* note:  no events defined in state model */

extern void UserComponent_SIMPLETEST_CBDispatch( Escher_xtUMLEvent_t * );


/*
 * instance event:  SIMPLETEST1:'start'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} UserComponent_SIMPLETESTevent1;
extern const Escher_xtUMLEventConstant_t UserComponent_SIMPLETESTevent1c;

/*
 * instance event:  SIMPLETEST2:'sessionEvent'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  Escher_UniqueID_t p_sessionID; /* sessionID */
} UserComponent_SIMPLETESTevent2;
extern const Escher_xtUMLEventConstant_t UserComponent_SIMPLETESTevent2c;

/*
 * union of events targeted towards 'SIMPLETEST' state machine
 */
typedef union {
  UserComponent_SIMPLETESTevent1 simpletest11;  
  UserComponent_SIMPLETESTevent2 simpletest22;  
} UserComponent_SIMPLETEST_Events_u;

/*
 * enumeration of state model states for class
 */
#define UserComponent_SIMPLETEST_STATE_1 1  /* state [1]:  (entryPoint) */
#define UserComponent_SIMPLETEST_STATE_2 2  /* state [2]:  (requestSession) */
#define UserComponent_SIMPLETEST_STATE_3 3  /* state [3]:  (requestAvailableBookables) */
/*
 * enumeration of state model event numbers
 */
#define USERCOMPONENT_SIMPLETESTEVENT1NUM 0  /* SIMPLETEST1:'start' */
#define USERCOMPONENT_SIMPLETESTEVENT2NUM 1  /* SIMPLETEST2:'sessionEvent' */
extern void UserComponent_SIMPLETEST_Dispatch( Escher_xtUMLEvent_t * );

#ifdef	__cplusplus
}
#endif

#endif  /* USERCOMPONENT_SIMPLETEST_CLASS_H */


