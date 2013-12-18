/*----------------------------------------------------------------------------
 * File:  HotelComponent_STAFF_class.h
 *
 * Class:       Staff  (STAFF)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef HOTELCOMPONENT_STAFF_CLASS_H
#define HOTELCOMPONENT_STAFF_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   Staff  (STAFF)
 */
struct HotelComponent_STAFF {

  /* application analysis class attributes */
  c_t name[ESCHER_SYS_MAX_STRING_LEN];  /* - name */

  /* relationship storage */
  /* Note:  No storage needed for STAFF->HOTEL[R10] */
  /* Note:  No storage needed for STAFF->PRIVILEGE[R11] */
};

/* xtUML WARNING:  HOTEL<-R10->>STAFF never related!  */
/* Note:  HOTEL<-R10->>STAFF unrelate accessor not needed */
/* Note:  STAFF->PRIVILEGE[R11] not navigated */


#define HotelComponent_STAFF_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_HotelComponent_STAFF_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* HOTELCOMPONENT_STAFF_CLASS_H */


