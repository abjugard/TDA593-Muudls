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

  /* relationship storage */
  /* Note:  No storage needed for BOOKINGSESSION->HOTEL[R17] */
  /* Note:  No storage needed for BOOKINGSESSION->BOOKING[R26] */
  /* Note:  No storage needed for BOOKINGSESSION->CUSTOMER[R27] */
};
HotelComponent_BOOKING * HotelComponent_BOOKINGSESSION_op_addGuest( HotelComponent_BOOKINGSESSION *, const i_t, HotelComponent_FACILITY *, c_t[ESCHER_SYS_MAX_STRING_LEN] );
bool HotelComponent_BOOKINGSESSION_op_createGuest( HotelComponent_BOOKINGSESSION *, const i_t, c_t[ESCHER_SYS_MAX_STRING_LEN] );
Escher_ObjectSet_s * HotelComponent_BOOKINGSESSION_op_selectBookable( HotelComponent_BOOKINGSESSION *, HotelComponent_FACILITYTYPE * );
bool HotelComponent_BOOKINGSESSION_op_addService( HotelComponent_BOOKINGSESSION *, HotelComponent_BOOKABLE * );
bool HotelComponent_BOOKINGSESSION_op_createCustomer( HotelComponent_BOOKINGSESSION *, c_t[ESCHER_SYS_MAX_STRING_LEN] );
Escher_ObjectSet_s * HotelComponent_BOOKINGSESSION_op_search( HotelComponent_BOOKINGSESSION *, const i_t, Escher_TimeStamp_t, Escher_TimeStamp_t );

/* xtUML WARNING:  HOTEL<-R17->>BOOKINGSESSION never related!  */
/* Note:  HOTEL<-R17->>BOOKINGSESSION unrelate accessor not needed */
void HotelComponent_BOOKINGSESSION_R26_Link( HotelComponent_BOOKING *, HotelComponent_BOOKINGSESSION * );
/* Note:  BOOKING<-R26->BOOKINGSESSION unrelate accessor not needed */
/* xtUML WARNING:  CUSTOMER<-R27->BOOKINGSESSION never related!  */
/* Note:  CUSTOMER<-R27->BOOKINGSESSION unrelate accessor not needed */


#define HotelComponent_BOOKINGSESSION_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_HotelComponent_BOOKINGSESSION_extent;

/*
 * class-based event:  BOOKINGSESSION_A1:'requestSessionEvent'
 * warning:  Event is not used in application - no code generated.
 */


/*
 * enumeration of state model states for class
 */
#define HotelComponent_BOOKINGSESSION_CB_STATE_1 1  /* state [1]:  (Standby) */

/*
 * enumeration of state model event numbers
 */

extern void HotelComponent_BOOKINGSESSION_CBDispatch( Escher_xtUMLEvent_t * );


/*
 * instance event:  BOOKINGSESSION1:'selectEvent'
 * warning:  Event is not used in application - no code generated.
 */

/*
 * instance event:  BOOKINGSESSION2:'addGuestEvent'
 * warning:  Event is not used in application - no code generated.
 */

/*
 * instance event:  BOOKINGSESSION3:'addServiceEvent'
 * warning:  Event is not used in application - no code generated.
 */

/*
 * instance event:  BOOKINGSESSION4:'confirmEvent'
 * warning:  Event is not used in application - no code generated.
 */

/*
 * instance event:  BOOKINGSESSION5:'customerDetailsEvent'
 * warning:  Event is not used in application - no code generated.
 */

/*
 * instance event:  BOOKINGSESSION6:'paymentInfoEvent'
 * warning:  Event is not used in application - no code generated.
 */

/*
 * instance event:  BOOKINGSESSION7:'paymentConfirmedEvent'
 * warning:  Event is not used in application - no code generated.
 */

/*
 * instance event:  BOOKINGSESSION8:'cancelEvent'
 * warning:  Event is not used in application - no code generated.
 */

/*
 * instance event:  BOOKINGSESSION9:'searchEvent'
 * warning:  Event is not used in application - no code generated.
 */


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
extern void HotelComponent_BOOKINGSESSION_Dispatch( Escher_xtUMLEvent_t * );

#ifdef	__cplusplus
}
#endif

#endif  /* HOTELCOMPONENT_BOOKINGSESSION_CLASS_H */


