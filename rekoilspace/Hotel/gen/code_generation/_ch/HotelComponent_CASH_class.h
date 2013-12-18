/*----------------------------------------------------------------------------
 * File:  HotelComponent_CASH_class.h
 *
 * Class:       Cash  (CASH)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef HOTELCOMPONENT_CASH_CLASS_H
#define HOTELCOMPONENT_CASH_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   Cash  (CASH)
 */
struct HotelComponent_CASH {

  /* application analysis class attributes */

  /* relationship storage */
  HotelComponent_PAYMENTMETHOD * PAYMENTMETHOD_R19;
};

/* Note:  PAYMENTMETHOD<-R19->CASH never related (or note needed).  */
/* Note:  No PAYMENTMETHOD<-R19->CASH unrelate accessor needed.  */


#define HotelComponent_CASH_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_HotelComponent_CASH_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* HOTELCOMPONENT_CASH_CLASS_H */


