/*----------------------------------------------------------------------------
 * File:  HotelComponent_CUSTOMER_class.h
 *
 * Class:       Customer  (CUSTOMER)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef HOTELCOMPONENT_CUSTOMER_CLASS_H
#define HOTELCOMPONENT_CUSTOMER_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   Customer  (CUSTOMER)
 */
struct HotelComponent_CUSTOMER {

  /* application analysis class attributes */
  c_t name[ESCHER_SYS_MAX_STRING_LEN];  /* - name */
  Escher_UniqueID_t customerID;  /* - customerID */
  c_t phoneNumber[ESCHER_SYS_MAX_STRING_LEN];  /* - phoneNumber */

  /* relationship storage */
  HotelComponent_BILLING * BILLING_R22;
  /* Note:  No storage needed for CUSTOMER->CLUB[R23] */
  /* Note:  No storage needed for CUSTOMER->BOOKINGSESSION[R27] */
};

/* Note:  CUSTOMER->CLUB[R23] not navigated */


#define HotelComponent_CUSTOMER_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_HotelComponent_CUSTOMER_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* HOTELCOMPONENT_CUSTOMER_CLASS_H */


