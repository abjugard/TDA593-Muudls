/*----------------------------------------------------------------------------
 * File:  HotelComponent_BOOKING_class.h
 *
 * Class:       Booking  (BOOKING)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef HOTELCOMPONENT_BOOKING_CLASS_H
#define HOTELCOMPONENT_BOOKING_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   Booking  (BOOKING)
 */
struct HotelComponent_BOOKING {

  /* application analysis class attributes */
  Escher_UniqueID_t bookingNumber;  /* - bookingNumber */
  Escher_TimeStamp_t fromDate;  /* - fromDate */
  Escher_TimeStamp_t toDate;  /* - toDate */

  /* relationship storage */
  Escher_ObjectSet_s BOOKABLE_R12;
  /* Note:  No storage needed for BOOKING->HOTEL[R13] */
  Escher_ObjectSet_s FACILITY_R14;
  Escher_ObjectSet_s GUEST_R15_use;
  HotelComponent_BILLING * BILLING_R22;
  /* Note:  No storage needed for BOOKING->BOOKINGSESSION[R26] */
};
void HotelComponent_BOOKING_op_addGuest( HotelComponent_BOOKING *, const i_t, c_t[ESCHER_SYS_MAX_STRING_LEN] );
HotelComponent_BOOKING * HotelComponent_BOOKING_op_getBookingInfo( HotelComponent_BOOKING * );
bool HotelComponent_BOOKING_op_setCustomer( HotelComponent_BOOKING *, c_t[ESCHER_SYS_MAX_STRING_LEN] );
bool HotelComponent_BOOKING_op_addBookable( HotelComponent_BOOKING *, HotelComponent_BOOKABLE * );
bool HotelComponent_BOOKING_op_addService( HotelComponent_BOOKING *, HotelComponent_BOOKABLE * );
Escher_TimeStamp_t HotelComponent_BOOKING_op_getFromDate( HotelComponent_BOOKING * );
Escher_TimeStamp_t HotelComponent_BOOKING_op_getToDate( HotelComponent_BOOKING * );
void HotelComponent_BOOKING_op_setFromDate( HotelComponent_BOOKING *, Escher_TimeStamp_t );
void HotelComponent_BOOKING_op_setToDate( HotelComponent_BOOKING *, Escher_TimeStamp_t );

void HotelComponent_BOOKING_R12_Link( HotelComponent_BOOKABLE *, HotelComponent_BOOKING * );
void HotelComponent_BOOKING_R12_Unlink( HotelComponent_BOOKABLE *, HotelComponent_BOOKING * );
#define HotelComponent_BOOKABLE_R12_From_BOOKING( BOOKING ) ( &((BOOKING)->BOOKABLE_R12) )
void HotelComponent_BOOKING_R13_Link( HotelComponent_HOTEL *, HotelComponent_BOOKING * );
/* Note:  HOTEL<-R13->>BOOKING unrelate accessor not needed */
void HotelComponent_BOOKING_R14_Link_is_booked_in( HotelComponent_FACILITY *, HotelComponent_BOOKING * );
void HotelComponent_BOOKING_R14_Unlink_is_booked_in( HotelComponent_FACILITY *, HotelComponent_BOOKING * );
#define HotelComponent_FACILITY_R14_From_BOOKING( BOOKING ) ( &((BOOKING)->FACILITY_R14) )
#define HotelComponent_GUEST_R15_From_BOOKING_use( BOOKING ) ( &((BOOKING)->GUEST_R15_use) )


#define HotelComponent_BOOKING_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_HotelComponent_BOOKING_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* HOTELCOMPONENT_BOOKING_CLASS_H */


