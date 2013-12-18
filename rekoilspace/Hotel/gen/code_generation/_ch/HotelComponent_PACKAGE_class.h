/*----------------------------------------------------------------------------
 * File:  HotelComponent_PACKAGE_class.h
 *
 * Class:       Package  (PACKAGE)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef HOTELCOMPONENT_PACKAGE_CLASS_H
#define HOTELCOMPONENT_PACKAGE_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   Package  (PACKAGE)
 */
struct HotelComponent_PACKAGE {

  /* application analysis class attributes */

  /* relationship storage */
  HotelComponent_BOOKABLE * BOOKABLE_R2;
  /* Note:  No storage needed for PACKAGE->BOOKABLE[R8] */
};

void HotelComponent_PACKAGE_R2_Link( HotelComponent_BOOKABLE *, HotelComponent_PACKAGE * );
/* Note:  No BOOKABLE<-R2->PACKAGE unrelate accessor needed.  */
/* Note:  PACKAGE->BOOKABLE[R8] not navigated */


#define HotelComponent_PACKAGE_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_HotelComponent_PACKAGE_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* HOTELCOMPONENT_PACKAGE_CLASS_H */


