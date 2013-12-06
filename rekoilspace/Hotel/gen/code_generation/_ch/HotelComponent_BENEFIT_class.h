/*----------------------------------------------------------------------------
 * File:  HotelComponent_BENEFIT_class.h
 *
 * Class:       Benefit  (BENEFIT)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef HOTELCOMPONENT_BENEFIT_CLASS_H
#define HOTELCOMPONENT_BENEFIT_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   Benefit  (BENEFIT)
 */
struct HotelComponent_BENEFIT {

  /* application analysis class attributes */
  i_t discountPercentage;  /* - discountPercentage */

  /* relationship storage */
  /* Note:  No storage needed for BENEFIT->CLUB[R24] */
  /* Note:  No storage needed for BENEFIT->BOOKABLE[R25] */
};

/* xtUML WARNING:  CLUB<-R24->>BENEFIT never related!  */
/* Note:  CLUB<-R24->>BENEFIT unrelate accessor not needed */
/* xtUML WARNING:  BOOKABLE<<-R25->>BENEFIT never related!  */
/* Note:  BOOKABLE<<-R25->>BENEFIT unrelate accessor not needed */
/* Note:  BENEFIT->BOOKABLE[R25] not navigated */


#define HotelComponent_BENEFIT_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_HotelComponent_BENEFIT_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* HOTELCOMPONENT_BENEFIT_CLASS_H */


