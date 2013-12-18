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
  i_t desiredType;  /* - desiredType */
  bool active;  /* - active */
  Escher_UniqueID_t bookingNumber;  /* - bookingNumber */
  Escher_Date_t fromDate;  /* - fromDate */
  Escher_Date_t toDate;  /* - toDate */

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
  i_t p_desiredType; /* desiredType */
  Escher_Date_t p_fromDate; /* fromDate */
  Escher_Date_t p_toDate; /* toDate */
} UserComponent_SIMPLETESTevent1;
extern const Escher_xtUMLEventConstant_t UserComponent_SIMPLETESTevent1c;

/*
 * instance event:  SIMPLETEST2:'sessionEvent'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  Escher_UniqueID_t p_bookingNumber; /* bookingNumber */
  Escher_UniqueID_t p_sessionID; /* sessionID */
} UserComponent_SIMPLETESTevent2;
extern const Escher_xtUMLEventConstant_t UserComponent_SIMPLETESTevent2c;

/*
 * instance event:  SIMPLETEST3:'availableEvent'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  c_t p_aproximateArea[ESCHER_SYS_MAX_STRING_LEN]; /* aproximateArea */
  c_t p_description[ESCHER_SYS_MAX_STRING_LEN]; /* description */
  i_t p_id; /* id */
  bool p_independent; /* independent */
  r_t p_price; /* price */
} UserComponent_SIMPLETESTevent3;
extern const Escher_xtUMLEventConstant_t UserComponent_SIMPLETESTevent3c;

/*
 * instance event:  SIMPLETEST4:'confirmEvent'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  c_t p_message[ESCHER_SYS_MAX_STRING_LEN]; /* message */
} UserComponent_SIMPLETESTevent4;
extern const Escher_xtUMLEventConstant_t UserComponent_SIMPLETESTevent4c;

/*
 * instance event:  SIMPLETEST5:'endOfListEvent'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} UserComponent_SIMPLETESTevent5;
extern const Escher_xtUMLEventConstant_t UserComponent_SIMPLETESTevent5c;

/*
 * instance event:  SIMPLETEST6:'foundDesiredRoomEvent'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} UserComponent_SIMPLETESTevent6;
extern const Escher_xtUMLEventConstant_t UserComponent_SIMPLETESTevent6c;

/*
 * instance event:  SIMPLETEST7:'errorEvent'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  c_t p_message[ESCHER_SYS_MAX_STRING_LEN]; /* message */
} UserComponent_SIMPLETESTevent7;
extern const Escher_xtUMLEventConstant_t UserComponent_SIMPLETESTevent7c;

/*
 * union of events targeted towards 'SIMPLETEST' state machine
 */
typedef union {
  UserComponent_SIMPLETESTevent1 simpletest11;  
  UserComponent_SIMPLETESTevent2 simpletest22;  
  UserComponent_SIMPLETESTevent3 simpletest33;  
  UserComponent_SIMPLETESTevent4 simpletest44;  
  UserComponent_SIMPLETESTevent5 simpletest55;  
  UserComponent_SIMPLETESTevent6 simpletest66;  
  UserComponent_SIMPLETESTevent7 simpletest77;  
} UserComponent_SIMPLETEST_Events_u;

/*
 * enumeration of state model states for class
 */
#define UserComponent_SIMPLETEST_STATE_1 1  /* state [1]:  (entryPoint) */
#define UserComponent_SIMPLETEST_STATE_2 2  /* state [2]:  (requestSession) */
#define UserComponent_SIMPLETEST_STATE_3 3  /* state [3]:  (requestAvailableBookables) */
#define UserComponent_SIMPLETEST_STATE_4 4  /* state [4]:  (selectRooms) */
#define UserComponent_SIMPLETEST_STATE_5 5  /* state [5]:  (addGuest) */
#define UserComponent_SIMPLETEST_STATE_6 6  /* state [6]:  (confirmBooking) */
#define UserComponent_SIMPLETEST_STATE_7 7  /* state [7]:  (sendCustomerDetails) */
#define UserComponent_SIMPLETEST_STATE_8 8  /* state [8]:  (sendPaymentInfo) */
#define UserComponent_SIMPLETEST_STATE_9 9  /* state [9]:  (endOfListState) */
#define UserComponent_SIMPLETEST_STATE_10 10  /* state [10]:  (failedTest) */
/*
 * enumeration of state model event numbers
 */
#define USERCOMPONENT_SIMPLETESTEVENT1NUM 0  /* SIMPLETEST1:'start' */
#define USERCOMPONENT_SIMPLETESTEVENT2NUM 1  /* SIMPLETEST2:'sessionEvent' */
#define USERCOMPONENT_SIMPLETESTEVENT3NUM 2  /* SIMPLETEST3:'availableEvent' */
#define USERCOMPONENT_SIMPLETESTEVENT4NUM 3  /* SIMPLETEST4:'confirmEvent' */
#define USERCOMPONENT_SIMPLETESTEVENT5NUM 4  /* SIMPLETEST5:'endOfListEvent' */
#define USERCOMPONENT_SIMPLETESTEVENT6NUM 5  /* SIMPLETEST6:'foundDesiredRoomEvent' */
#define USERCOMPONENT_SIMPLETESTEVENT7NUM 6  /* SIMPLETEST7:'errorEvent' */
extern void UserComponent_SIMPLETEST_Dispatch( Escher_xtUMLEvent_t * );

#ifdef	__cplusplus
}
#endif

#endif  /* USERCOMPONENT_SIMPLETEST_CLASS_H */


