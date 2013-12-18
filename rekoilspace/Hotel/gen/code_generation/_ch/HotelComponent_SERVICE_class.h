/*----------------------------------------------------------------------------
 * File:  HotelComponent_SERVICE_class.h
 *
 * Class:       Service  (SERVICE)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef HOTELCOMPONENT_SERVICE_CLASS_H
#define HOTELCOMPONENT_SERVICE_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   Service  (SERVICE)
 */
struct HotelComponent_SERVICE {

  /* application analysis class attributes */
  bool independent;  /* - independent */
  c_t description[ESCHER_SYS_MAX_STRING_LEN];  /* - description */

  /* relationship storage */
  HotelComponent_BOOKABLE * BOOKABLE_R2;
  /* Note:  No storage needed for SERVICE->FACILITYTYPE[R4] */
  /* Note:  No storage needed for SERVICE->FACILITYTYPE[R5] */
};

void HotelComponent_SERVICE_R2_Link( HotelComponent_BOOKABLE *, HotelComponent_SERVICE * );
/* Note:  No BOOKABLE<-R2->SERVICE unrelate accessor needed.  */
/* xtUML WARNING:  FACILITYTYPE<-R4->>SERVICE never related!  */
/* Note:  FACILITYTYPE<-R4->>SERVICE unrelate accessor not needed */
/* xtUML WARNING:  FACILITYTYPE<-R5->>SERVICE never related!  */
/* Note:  FACILITYTYPE<-R5->>SERVICE unrelate accessor not needed */


#define HotelComponent_SERVICE_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_HotelComponent_SERVICE_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* HOTELCOMPONENT_SERVICE_CLASS_H */


