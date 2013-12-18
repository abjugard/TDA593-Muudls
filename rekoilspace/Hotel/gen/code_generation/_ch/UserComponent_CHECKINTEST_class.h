/*----------------------------------------------------------------------------
 * File:  UserComponent_CHECKINTEST_class.h
 *
 * Class:       CheckInTest  (CHECKINTEST)
 * Component:   UserComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef USERCOMPONENT_CHECKINTEST_CLASS_H
#define USERCOMPONENT_CHECKINTEST_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   CheckInTest  (CHECKINTEST)
 */
struct UserComponent_CHECKINTEST {
  Escher_StateNumber_t current_state;
  /* application analysis class attributes */
  Escher_UniqueID_t bookingNumber;  /* - bookingNumber */

};



#define UserComponent_CHECKINTEST_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_UserComponent_CHECKINTEST_extent;

/*
 * instance event:  CHECKINTEST1:'failEvent'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} UserComponent_CHECKINTESTevent1;
extern const Escher_xtUMLEventConstant_t UserComponent_CHECKINTESTevent1c;

/*
 * instance event:  CHECKINTEST2:'successEvent'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} UserComponent_CHECKINTESTevent2;
extern const Escher_xtUMLEventConstant_t UserComponent_CHECKINTESTevent2c;

/*
 * instance event:  CHECKINTEST3:'checkInReturnEvent'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  bool p_success; /* success */
} UserComponent_CHECKINTESTevent3;
extern const Escher_xtUMLEventConstant_t UserComponent_CHECKINTESTevent3c;

/*
 * instance event:  CHECKINTEST4:'start'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  Escher_UniqueID_t p_bookingNumber; /* bookingNumber */
} UserComponent_CHECKINTESTevent4;
extern const Escher_xtUMLEventConstant_t UserComponent_CHECKINTESTevent4c;

/*
 * union of events targeted towards 'CHECKINTEST' state machine
 */
typedef union {
  UserComponent_CHECKINTESTevent1 checkintest11;  
  UserComponent_CHECKINTESTevent2 checkintest22;  
  UserComponent_CHECKINTESTevent3 checkintest33;  
  UserComponent_CHECKINTESTevent4 checkintest44;  
} UserComponent_CHECKINTEST_Events_u;

/*
 * enumeration of state model states for class
 */
#define UserComponent_CHECKINTEST_STATE_1 1  /* state [1]:  (booked) */
#define UserComponent_CHECKINTEST_STATE_2 2  /* state [2]:  (attemptCheckIn) */
#define UserComponent_CHECKINTEST_STATE_3 3  /* state [3]:  (returnedCheckIn) */
#define UserComponent_CHECKINTEST_STATE_4 4  /* state [4]:  (testSuccess) */
#define UserComponent_CHECKINTEST_STATE_5 5  /* state [5]:  (testFailed) */
/*
 * enumeration of state model event numbers
 */
#define USERCOMPONENT_CHECKINTESTEVENT1NUM 0  /* CHECKINTEST1:'failEvent' */
#define USERCOMPONENT_CHECKINTESTEVENT2NUM 1  /* CHECKINTEST2:'successEvent' */
#define USERCOMPONENT_CHECKINTESTEVENT3NUM 2  /* CHECKINTEST3:'checkInReturnEvent' */
#define USERCOMPONENT_CHECKINTESTEVENT4NUM 3  /* CHECKINTEST4:'start' */
extern void UserComponent_CHECKINTEST_Dispatch( Escher_xtUMLEvent_t * );

#ifdef	__cplusplus
}
#endif

#endif  /* USERCOMPONENT_CHECKINTEST_CLASS_H */


