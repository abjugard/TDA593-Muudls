/*----------------------------------------------------------------------------
 * File:  HotelComponent_BOOKINGSESSION_class.h
 *
 * Class:       BookingSession  (BOOKINGSESSION)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef HOTELCOMPONENT_BOOKINGSESSION_CLASS_H
#define HOTELCOMPONENT_BOOKINGSESSION_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   BookingSession  (BOOKINGSESSION)
 */
struct HotelComponent_BOOKINGSESSION {
  Escher_StateNumber_t current_state;
  /* application analysis class attributes */
  Escher_UniqueID_t ID;  /* - ID */
  HotelComponent_FACILITY * tmpFacility;  /* - tmpFacility */
  i_t facilityTypeSelected;  /* - facilityTypeSelected */
  bool waiting;  /* - waiting */

  /* relationship storage */
  HotelComponent_HOTEL * HOTEL_R17;
  HotelComponent_BOOKING * BOOKING_R26;
  HotelComponent_CUSTOMER * CUSTOMER_R27;
};
HotelComponent_BOOKING * HotelComponent_BOOKINGSESSION_op_addGuest( HotelComponent_BOOKINGSESSION *, const i_t, HotelComponent_FACILITY *, c_t[ESCHER_SYS_MAX_STRING_LEN] );
bool HotelComponent_BOOKINGSESSION_op_createGuest( HotelComponent_BOOKINGSESSION *, const i_t, c_t[ESCHER_SYS_MAX_STRING_LEN] );
Escher_ObjectSet_s * HotelComponent_BOOKINGSESSION_op_selectBookable( HotelComponent_BOOKINGSESSION *, HotelComponent_FACILITYTYPE * );
bool HotelComponent_BOOKINGSESSION_op_addService( HotelComponent_BOOKINGSESSION *, HotelComponent_BOOKABLE * );
bool HotelComponent_BOOKINGSESSION_op_createCustomer( HotelComponent_BOOKINGSESSION *, c_t[ESCHER_SYS_MAX_STRING_LEN] );
void HotelComponent_BOOKINGSESSION_op_destroySession( HotelComponent_BOOKINGSESSION * );
void HotelComponent_BOOKINGSESSION_op_undoBookingSession( HotelComponent_BOOKINGSESSION * );
bool HotelComponent_BOOKINGSESSION_op_isBookingTimeAcceptable( HotelComponent_BOOKINGSESSION *, Escher_TimeStamp_t, Escher_TimeStamp_t );

void HotelComponent_BOOKINGSESSION_R17_Link( HotelComponent_HOTEL *, HotelComponent_BOOKINGSESSION * );
void HotelComponent_BOOKINGSESSION_R17_Unlink( HotelComponent_HOTEL *, HotelComponent_BOOKINGSESSION * );
void HotelComponent_BOOKINGSESSION_R26_Link( HotelComponent_BOOKING *, HotelComponent_BOOKINGSESSION * );
void HotelComponent_BOOKINGSESSION_R26_Unlink( HotelComponent_BOOKING *, HotelComponent_BOOKINGSESSION * );
void HotelComponent_BOOKINGSESSION_R27_Link( HotelComponent_CUSTOMER *, HotelComponent_BOOKINGSESSION * );
void HotelComponent_BOOKINGSESSION_R27_Unlink( HotelComponent_CUSTOMER *, HotelComponent_BOOKINGSESSION * );


#define HotelComponent_BOOKINGSESSION_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_HotelComponent_BOOKINGSESSION_extent;

/*
 * class-based event:  BOOKINGSESSION_A2:'requestSelectEvent'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  Escher_UniqueID_t p_sessionID; /* sessionID */
} HotelComponent_BOOKINGSESSION_CBevent2;
extern const Escher_xtUMLEventConstant_t HotelComponent_BOOKINGSESSION_CBevent2c;

/*
 * class-based event:  BOOKINGSESSION_A3:'taskDoneEvent'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} HotelComponent_BOOKINGSESSION_CBevent3;
extern const Escher_xtUMLEventConstant_t HotelComponent_BOOKINGSESSION_CBevent3c;

/*
 * class-based event:  BOOKINGSESSION_A4:'emptyQueueEvent'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} HotelComponent_BOOKINGSESSION_CBevent4;
extern const Escher_xtUMLEventConstant_t HotelComponent_BOOKINGSESSION_CBevent4c;

/*
 * class-based event:  BOOKINGSESSION_A5:'taskFoundEvent'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  Escher_UniqueID_t p_sessionID; /* sessionID */
} HotelComponent_BOOKINGSESSION_CBevent5;
extern const Escher_xtUMLEventConstant_t HotelComponent_BOOKINGSESSION_CBevent5c;

/*
 * union of events targeted towards 'BOOKINGSESSION' state machine
 */
typedef union {
  HotelComponent_BOOKINGSESSION_CBevent2 bookingsession21;  
  HotelComponent_BOOKINGSESSION_CBevent3 bookingsession32;  
  HotelComponent_BOOKINGSESSION_CBevent4 bookingsession43;  
  HotelComponent_BOOKINGSESSION_CBevent5 bookingsession54;  
} HotelComponent_BOOKINGSESSION_CB_Events_u;

/*
 * enumeration of state model states for class
 */
#define HotelComponent_BOOKINGSESSION_CB_STATE_1 1  /* state [1]:  (Standby) */
#define HotelComponent_BOOKINGSESSION_CB_STATE_2 2  /* state [2]:  (Busy) */
#define HotelComponent_BOOKINGSESSION_CB_STATE_3 3  /* state [3]:  (ProcessQueue) */

/*
 * enumeration of state model event numbers
 */
#define HOTELCOMPONENT_BOOKINGSESSION_CBEVENT2NUM 0  /* BOOKINGSESSION_A2:'requestSelectEvent' */
#define HOTELCOMPONENT_BOOKINGSESSION_CBEVENT3NUM 1  /* BOOKINGSESSION_A3:'taskDoneEvent' */
#define HOTELCOMPONENT_BOOKINGSESSION_CBEVENT4NUM 2  /* BOOKINGSESSION_A4:'emptyQueueEvent' */
#define HOTELCOMPONENT_BOOKINGSESSION_CBEVENT5NUM 3  /* BOOKINGSESSION_A5:'taskFoundEvent' */

extern void HotelComponent_BOOKINGSESSION_CBDispatch( Escher_xtUMLEvent_t * );


/*
 * instance event:  BOOKINGSESSION1:'selectEvent'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  i_t p_id; /* id */
} HotelComponent_BOOKINGSESSIONevent1;
extern const Escher_xtUMLEventConstant_t HotelComponent_BOOKINGSESSIONevent1c;

/*
 * instance event:  BOOKINGSESSION2:'addGuestEvent'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  i_t p_age; /* age */
  c_t p_name[ESCHER_SYS_MAX_STRING_LEN]; /* name */
} HotelComponent_BOOKINGSESSIONevent2;
extern const Escher_xtUMLEventConstant_t HotelComponent_BOOKINGSESSIONevent2c;

/*
 * instance event:  BOOKINGSESSION3:'addServiceEvent'
 * warning:  Event is not used in application - no code generated.
 */

/*
 * instance event:  BOOKINGSESSION4:'confirmEvent'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} HotelComponent_BOOKINGSESSIONevent4;
extern const Escher_xtUMLEventConstant_t HotelComponent_BOOKINGSESSIONevent4c;

/*
 * instance event:  BOOKINGSESSION5:'customerDetailsEvent'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  c_t p_name[ESCHER_SYS_MAX_STRING_LEN]; /* name */
  c_t p_phoneNumber[ESCHER_SYS_MAX_STRING_LEN]; /* phoneNumber */
} HotelComponent_BOOKINGSESSIONevent5;
extern const Escher_xtUMLEventConstant_t HotelComponent_BOOKINGSESSIONevent5c;

/*
 * instance event:  BOOKINGSESSION6:'paymentInfoEvent'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  c_t p_info[ESCHER_SYS_MAX_STRING_LEN]; /* info */
} HotelComponent_BOOKINGSESSIONevent6;
extern const Escher_xtUMLEventConstant_t HotelComponent_BOOKINGSESSIONevent6c;

/*
 * instance event:  BOOKINGSESSION7:'paymentConfirmedEvent'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  bool p_valid; /* valid */
} HotelComponent_BOOKINGSESSIONevent7;
extern const Escher_xtUMLEventConstant_t HotelComponent_BOOKINGSESSIONevent7c;

/*
 * instance event:  BOOKINGSESSION8:'cancelEvent'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  /* Note:  no supplemental data for this event */
} HotelComponent_BOOKINGSESSIONevent8;
extern const Escher_xtUMLEventConstant_t HotelComponent_BOOKINGSESSIONevent8c;

/*
 * instance event:  BOOKINGSESSION9:'searchEvent'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  Escher_TimeStamp_t p_fromDate; /* fromDate */
  Escher_TimeStamp_t p_toDate; /* toDate */
} HotelComponent_BOOKINGSESSIONevent9;
extern const Escher_xtUMLEventConstant_t HotelComponent_BOOKINGSESSIONevent9c;

/*
 * instance event:  BOOKINGSESSION10:'seachMoreRoomEvent'
 * warning:  Event is not used in application - no code generated.
 */

/*
 * instance event:  BOOKINGSESSION11:'errorEvent'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  c_t p_message[ESCHER_SYS_MAX_STRING_LEN]; /* message */
} HotelComponent_BOOKINGSESSIONevent11;
extern const Escher_xtUMLEventConstant_t HotelComponent_BOOKINGSESSIONevent11c;

/*
 * union of events targeted towards 'BOOKINGSESSION' state machine
 */
typedef union {
  HotelComponent_BOOKINGSESSIONevent1 bookingsession11;  
  HotelComponent_BOOKINGSESSIONevent2 bookingsession22;  
  HotelComponent_BOOKINGSESSIONevent4 bookingsession43;  
  HotelComponent_BOOKINGSESSIONevent5 bookingsession54;  
  HotelComponent_BOOKINGSESSIONevent6 bookingsession65;  
  HotelComponent_BOOKINGSESSIONevent7 bookingsession76;  
  HotelComponent_BOOKINGSESSIONevent8 bookingsession87;  
  HotelComponent_BOOKINGSESSIONevent9 bookingsession98;  
  HotelComponent_BOOKINGSESSIONevent11 bookingsession119;  
} HotelComponent_BOOKINGSESSION_Events_u;

/*
 * enumeration of state model states for class
 */
#define HotelComponent_BOOKINGSESSION_STATE_1 1  /* state [1]:  (ready) */
#define HotelComponent_BOOKINGSESSION_STATE_2 2  /* state [2]:  (selected) */
#define HotelComponent_BOOKINGSESSION_STATE_3 3  /* state [3]:  (guestAdded) */
#define HotelComponent_BOOKINGSESSION_STATE_4 4  /* state [4]:  (addService) */
#define HotelComponent_BOOKINGSESSION_STATE_5 5  /* state [5]:  (finallyReady) */
#define HotelComponent_BOOKINGSESSION_STATE_6 6  /* state [6]:  (customerProvided) */
#define HotelComponent_BOOKINGSESSION_STATE_7 7  /* state [7]:  (paymentSuggested) */
#define HotelComponent_BOOKINGSESSION_STATE_8 8  /* state [8]:  (confirmation) */
#define HotelComponent_BOOKINGSESSION_STATE_9 9  /* state [9]:  (accepted) */
#define HotelComponent_BOOKINGSESSION_STATE_10 10  /* state [10]:  (aborted) */
#define HotelComponent_BOOKINGSESSION_STATE_11 11  /* state [11]:  (searched) */
/*
 * enumeration of state model event numbers
 */
#define HOTELCOMPONENT_BOOKINGSESSIONEVENT1NUM 0  /* BOOKINGSESSION1:'selectEvent' */
#define HOTELCOMPONENT_BOOKINGSESSIONEVENT2NUM 1  /* BOOKINGSESSION2:'addGuestEvent' */
#define HOTELCOMPONENT_BOOKINGSESSIONEVENT4NUM 2  /* BOOKINGSESSION4:'confirmEvent' */
#define HOTELCOMPONENT_BOOKINGSESSIONEVENT5NUM 3  /* BOOKINGSESSION5:'customerDetailsEvent' */
#define HOTELCOMPONENT_BOOKINGSESSIONEVENT6NUM 4  /* BOOKINGSESSION6:'paymentInfoEvent' */
#define HOTELCOMPONENT_BOOKINGSESSIONEVENT7NUM 5  /* BOOKINGSESSION7:'paymentConfirmedEvent' */
#define HOTELCOMPONENT_BOOKINGSESSIONEVENT8NUM 6  /* BOOKINGSESSION8:'cancelEvent' */
#define HOTELCOMPONENT_BOOKINGSESSIONEVENT9NUM 7  /* BOOKINGSESSION9:'searchEvent' */
#define HOTELCOMPONENT_BOOKINGSESSIONEVENT11NUM 8  /* BOOKINGSESSION11:'errorEvent' */
extern void HotelComponent_BOOKINGSESSION_Dispatch( Escher_xtUMLEvent_t * );

#ifdef	__cplusplus
}
#endif

#endif  /* HOTELCOMPONENT_BOOKINGSESSION_CLASS_H */


