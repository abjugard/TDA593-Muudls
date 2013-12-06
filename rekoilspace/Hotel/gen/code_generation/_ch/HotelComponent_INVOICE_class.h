/*----------------------------------------------------------------------------
 * File:  HotelComponent_INVOICE_class.h
 *
 * Class:       Invoice  (INVOICE)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef HOTELCOMPONENT_INVOICE_CLASS_H
#define HOTELCOMPONENT_INVOICE_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   Invoice  (INVOICE)
 */
struct HotelComponent_INVOICE {

  /* application analysis class attributes */
  Escher_TimeStamp_t sentDate;  /* - sentDate */

  /* relationship storage */
  HotelComponent_PAYMENTMETHOD * PAYMENTMETHOD_R19;
};

/* Note:  PAYMENTMETHOD<-R19->INVOICE never related (or note needed).  */
/* Note:  No PAYMENTMETHOD<-R19->INVOICE unrelate accessor needed.  */


#define HotelComponent_INVOICE_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_HotelComponent_INVOICE_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* HOTELCOMPONENT_INVOICE_CLASS_H */


