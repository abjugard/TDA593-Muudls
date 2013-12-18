/*----------------------------------------------------------------------------
 * File:  HotelComponent_CLUB_class.h
 *
 * Class:       Club  (CLUB)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef HOTELCOMPONENT_CLUB_CLASS_H
#define HOTELCOMPONENT_CLUB_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   Club  (CLUB)
 */
struct HotelComponent_CLUB {

  /* application analysis class attributes */
  c_t clubName[ESCHER_SYS_MAX_STRING_LEN];  /* - clubName */

  /* relationship storage */
  /* Note:  No storage needed for CLUB->CUSTOMER[R23] */
  /* Note:  No storage needed for CLUB->BENEFIT[R24] */
};

/* xtUML WARNING:  CUSTOMER<<-R23->>CLUB never related!  */
/* Note:  CUSTOMER<<-R23->>CLUB unrelate accessor not needed */
/* Note:  CLUB->CUSTOMER[R23] not navigated */
/* Note:  CLUB->BENEFIT[R24] not navigated */


#define HotelComponent_CLUB_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_HotelComponent_CLUB_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* HOTELCOMPONENT_CLUB_CLASS_H */


