/*----------------------------------------------------------------------------
 * File:  HotelComponent_BILLINGITEM_class.h
 *
 * Class:       BillingItem  (BILLINGITEM)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef HOTELCOMPONENT_BILLINGITEM_CLASS_H
#define HOTELCOMPONENT_BILLINGITEM_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   BillingItem  (BILLINGITEM)
 */
struct HotelComponent_BILLINGITEM {

  /* application analysis class attributes */
  i_t cost;  /* - cost */
  c_t description[ESCHER_SYS_MAX_STRING_LEN];  /* - description */

  /* relationship storage */
  /* Note:  No storage needed for BILLINGITEM->BILLING[R20] */
};

/* xtUML WARNING:  BILLING<-R20->>BILLINGITEM never related!  */
/* Note:  BILLING<-R20->>BILLINGITEM unrelate accessor not needed */


#define HotelComponent_BILLINGITEM_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_HotelComponent_BILLINGITEM_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* HOTELCOMPONENT_BILLINGITEM_CLASS_H */


