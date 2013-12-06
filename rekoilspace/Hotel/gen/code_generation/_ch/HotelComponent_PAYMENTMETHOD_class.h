/*----------------------------------------------------------------------------
 * File:  HotelComponent_PAYMENTMETHOD_class.h
 *
 * Class:       PaymentMethod  (PAYMENTMETHOD)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef HOTELCOMPONENT_PAYMENTMETHOD_CLASS_H
#define HOTELCOMPONENT_PAYMENTMETHOD_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   PaymentMethod  (PAYMENTMETHOD)
 */
struct HotelComponent_PAYMENTMETHOD {

  /* application analysis class attributes */

  /* relationship storage */
  void * R19_subtype;
  Escher_ClassNumber_t R19_object_id;
  /* Note:  No storage needed for PAYMENTMETHOD->BILLING[R21] */
};


/* Accessors to PAYMENTMETHOD[R19] subtypes */
/* Note:  PAYMENTMETHOD->CASH[R19] not navigated */
/* Note:  PAYMENTMETHOD->CREDITCARD[R19] not navigated */
/* Note:  PAYMENTMETHOD->INVOICE[R19] not navigated */

/* Note:  PAYMENTMETHOD->BILLING[R21] not navigated */


#define HotelComponent_PAYMENTMETHOD_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_HotelComponent_PAYMENTMETHOD_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* HOTELCOMPONENT_PAYMENTMETHOD_CLASS_H */


