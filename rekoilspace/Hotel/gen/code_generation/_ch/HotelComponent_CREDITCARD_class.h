/*----------------------------------------------------------------------------
 * File:  HotelComponent_CREDITCARD_class.h
 *
 * Class:       CreditCard  (CREDITCARD)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef HOTELCOMPONENT_CREDITCARD_CLASS_H
#define HOTELCOMPONENT_CREDITCARD_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   CreditCard  (CREDITCARD)
 */
struct HotelComponent_CREDITCARD {

  /* application analysis class attributes */
  i_t cardNumber;  /* - cardNumber */
  Escher_Date_t expirationDate;  /* - expirationDate */
  i_t cvcCode;  /* - cvcCode */

  /* relationship storage */
  HotelComponent_PAYMENTMETHOD * PAYMENTMETHOD_R19;
};

/* Note:  PAYMENTMETHOD<-R19->CREDITCARD never related (or note needed).  */
/* Note:  No PAYMENTMETHOD<-R19->CREDITCARD unrelate accessor needed.  */


#define HotelComponent_CREDITCARD_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_HotelComponent_CREDITCARD_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* HOTELCOMPONENT_CREDITCARD_CLASS_H */


