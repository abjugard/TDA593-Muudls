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

  /* relationship storage */
  /* Note:  No storage needed for BOOKING->BOOKABLE[R12] */
  /* Note:  No storage needed for BOOKING->HOTEL[R13] */
  /* Note:  No storage needed for BOOKING->FACILITY[R14] */
  /* Note:  No storage needed for BOOKING->GUEST[R15] */
  HotelComponent_BILLING * BILLING_R22;
  /* Note:  No storage needed for BOOKING->BOOKINGSESSION[R26] */
};
void HotelComponent_BOOKING_op_addGuest( HotelComponent_BOOKING *, const i_t, c_t[ESCHER_SYS_MAX_STRING_LEN] );
HotelComponent_BOOKING * HotelComponent_BOOKING_op_getBookingInfo( HotelComponent_BOOKING * );
bool HotelComponent_BOOKING_op_setCustomer( HotelComponent_BOOKING *, c_t[ESCHER_SYS_MAX_STRING_LEN] );
bool HotelComponent_BOOKING_op_addBookable( HotelComponent_BOOKING *, HotelComponent_BOOKABLE * );
bool HotelComponent_BOOKING_op_addService( HotelComponent_BOOKING *, HotelComponent_BOOKABLE * );

/* xtUML WARNING:  BOOKABLE<<-R12->>BOOKING never related!  */
/* Note:  BOOKABLE<<-R12->>BOOKING unrelate accessor not needed */
/* Note:  BOOKING->BOOKABLE[R12] not navigated */
/* xtUML WARNING:  HOTEL<-R13->>BOOKING never related!  */
/* Note:  HOTEL<-R13->>BOOKING unrelate accessor not needed */
/* xtUML WARNING:  FACILITY<<-R14->>BOOKING never related!  */
/* Note:  FACILITY<<-R14->>BOOKING unrelate accessor not needed */
/* Note:  BOOKING->FACILITY[R14] not navigated */
/* Note:  BOOKING->GUEST[R15] not navigated */


#define HotelComponent_BOOKING_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_HotelComponent_BOOKING_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* HOTELCOMPONENT_BOOKING_CLASS_H */


