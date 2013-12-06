/*----------------------------------------------------------------------------
 * File:  HotelComponent_GUEST_class.h
 *
 * Class:       Guest  (GUEST)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef HOTELCOMPONENT_GUEST_CLASS_H
#define HOTELCOMPONENT_GUEST_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   Guest  (GUEST)
 */
struct HotelComponent_GUEST {

  /* application analysis class attributes */
  c_t name[ESCHER_SYS_MAX_STRING_LEN];  /* - name */
  i_t age;  /* - age */
  Escher_TimeStamp_t checkedIn;  /* - checkedIn */
  Escher_TimeStamp_t checkedOut;  /* - checkedOut */

  /* relationship storage */
  /* Note:  No storage needed for GUEST->BOOKING[R15] */
  /* Note:  No storage needed for GUEST->FACILITY[R16] */
};
bool HotelComponent_GUEST_op_setFacility( HotelComponent_GUEST *, HotelComponent_FACILITY * );

/* xtUML WARNING:  BOOKING<<-R15->>GUEST never related!  */
/* Note:  BOOKING<<-R15->>GUEST unrelate accessor not needed */
/* Note:  GUEST->BOOKING[R15] not navigated */
/* xtUML WARNING:  FACILITY<<-R16->>GUEST never related!  */
/* Note:  FACILITY<<-R16->>GUEST unrelate accessor not needed */
/* Note:  GUEST->FACILITY[R16] not navigated */


#define HotelComponent_GUEST_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_HotelComponent_GUEST_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* HOTELCOMPONENT_GUEST_CLASS_H */


