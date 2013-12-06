/*----------------------------------------------------------------------------
 * File:  HotelComponent_PRIVILEGE_class.h
 *
 * Class:       Privilege  (PRIVILEGE)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef HOTELCOMPONENT_PRIVILEGE_CLASS_H
#define HOTELCOMPONENT_PRIVILEGE_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   Privilege  (PRIVILEGE)
 */
struct HotelComponent_PRIVILEGE {

  /* application analysis class attributes */

  /* relationship storage */
  /* Note:  No storage needed for PRIVILEGE->STAFF[R11] */
};

/* xtUML WARNING:  STAFF<<-R11->>PRIVILEGE never related!  */
/* Note:  STAFF<<-R11->>PRIVILEGE unrelate accessor not needed */
/* Note:  PRIVILEGE->STAFF[R11] not navigated */


#define HotelComponent_PRIVILEGE_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_HotelComponent_PRIVILEGE_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* HOTELCOMPONENT_PRIVILEGE_CLASS_H */


