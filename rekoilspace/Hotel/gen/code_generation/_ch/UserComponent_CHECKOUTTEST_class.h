/*----------------------------------------------------------------------------
 * File:  UserComponent_CHECKOUTTEST_class.h
 *
 * Class:       CheckOutTest  (CHECKOUTTEST)
 * Component:   UserComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef USERCOMPONENT_CHECKOUTTEST_CLASS_H
#define USERCOMPONENT_CHECKOUTTEST_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   CheckOutTest  (CHECKOUTTEST)
 */
struct UserComponent_CHECKOUTTEST {
  Escher_StateNumber_t current_state;
  /* application analysis class attributes */
  Escher_UniqueID_t bookingNumber;  /* - bookingNumber */

};



#define UserComponent_CHECKOUTTEST_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_UserComponent_CHECKOUTTEST_extent;

/*
 * instance event:  CHECKOUTTEST1:'start'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  i_t p_age; /* age */
  Escher_UniqueID_t p_bookingNumber; /* bookingNumber */
  c_t p_name[ESCHER_SYS_MAX_STRING_LEN]; /* name */
} UserComponent_CHECKOUTTESTevent1;
extern const Escher_xtUMLEventConstant_t UserComponent_CHECKOUTTESTevent1c;

/*
 * instance event:  CHECKOUTTEST2:'checkOutReturnEvent'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  bool p_success; /* success */
} UserComponent_CHECKOUTTESTevent2;
extern const Escher_xtUMLEventConstant_t UserComponent_CHECKOUTTESTevent2c;

/*
 * instance event:  CHECKOUTTEST3:'failEvent'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} UserComponent_CHECKOUTTESTevent3;
extern const Escher_xtUMLEventConstant_t UserComponent_CHECKOUTTESTevent3c;

/*
 * instance event:  CHECKOUTTEST4:'successEvent'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} UserComponent_CHECKOUTTESTevent4;
extern const Escher_xtUMLEventConstant_t UserComponent_CHECKOUTTESTevent4c;

/*
 * union of events targeted towards 'CHECKOUTTEST' state machine
 */
typedef union {
  UserComponent_CHECKOUTTESTevent1 checkouttest11;  
  UserComponent_CHECKOUTTESTevent2 checkouttest22;  
  UserComponent_CHECKOUTTESTevent3 checkouttest33;  
  UserComponent_CHECKOUTTESTevent4 checkouttest44;  
} UserComponent_CHECKOUTTEST_Events_u;

/*
 * enumeration of state model states for class
 */
#define UserComponent_CHECKOUTTEST_STATE_1 1  /* state [1]:  (checkedIn) */
#define UserComponent_CHECKOUTTEST_STATE_2 2  /* state [2]:  (attemptCheckOut) */
#define UserComponent_CHECKOUTTEST_STATE_3 3  /* state [3]:  (returnedCheckOut) */
#define UserComponent_CHECKOUTTEST_STATE_4 4  /* state [4]:  (successState) */
#define UserComponent_CHECKOUTTEST_STATE_5 5  /* state [5]:  (failEvent) */
/*
 * enumeration of state model event numbers
 */
#define USERCOMPONENT_CHECKOUTTESTEVENT1NUM 0  /* CHECKOUTTEST1:'start' */
#define USERCOMPONENT_CHECKOUTTESTEVENT2NUM 1  /* CHECKOUTTEST2:'checkOutReturnEvent' */
#define USERCOMPONENT_CHECKOUTTESTEVENT3NUM 2  /* CHECKOUTTEST3:'failEvent' */
#define USERCOMPONENT_CHECKOUTTESTEVENT4NUM 3  /* CHECKOUTTEST4:'successEvent' */
extern void UserComponent_CHECKOUTTEST_Dispatch( Escher_xtUMLEvent_t * );

#ifdef	__cplusplus
}
#endif

#endif  /* USERCOMPONENT_CHECKOUTTEST_CLASS_H */


