/*----------------------------------------------------------------------------
 * File:  HotelComponent_BILLING_class.h
 *
 * Class:       Billing  (BILLING)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef HOTELCOMPONENT_BILLING_CLASS_H
#define HOTELCOMPONENT_BILLING_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   Billing  (BILLING)
 */
struct HotelComponent_BILLING {

  /* application analysis class attributes */
  Escher_TimeStamp_t paymentDate;  /* - paymentDate */
  bool isPayed;  /* - isPayed */

  /* relationship storage */
  /* Note:  No storage needed for BILLING->BILLINGITEM[R20] */
  /* Note:  No storage needed for BILLING->PAYMENTMETHOD[R21] */
  HotelComponent_CUSTOMER * CUSTOMER_R22_makes_a;
  HotelComponent_BOOKING * BOOKING_R22;
};
bool HotelComponent_BILLING_op_isPayed( HotelComponent_BILLING * );
i_t HotelComponent_BILLING_op_getCost( HotelComponent_BILLING * );

/* Note:  BILLING->BILLINGITEM[R20] not navigated */
/* xtUML WARNING:  PAYMENTMETHOD<-R21->>BILLING never related!  */
/* Note:  PAYMENTMETHOD<-R21->>BILLING unrelate accessor not needed */
void HotelComponent_BILLING_R22_Link( HotelComponent_CUSTOMER *, HotelComponent_BOOKING *, HotelComponent_BILLING * );
/* Note:  Unlink CUSTOMER from BOOKING across R22 using BILLING not needed.  */


#define HotelComponent_BILLING_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_HotelComponent_BILLING_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* HOTELCOMPONENT_BILLING_CLASS_H */


