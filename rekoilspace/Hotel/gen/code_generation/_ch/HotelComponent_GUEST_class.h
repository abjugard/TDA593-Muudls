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
  Escher_ObjectSet_s FACILITY_R16;
};
bool HotelComponent_GUEST_op_setFacility( HotelComponent_GUEST *, HotelComponent_FACILITY * );
void HotelComponent_GUEST_op_destroyGuest( HotelComponent_GUEST * );

void HotelComponent_GUEST_R15_Link_use( HotelComponent_BOOKING *, HotelComponent_GUEST * );
void HotelComponent_GUEST_R15_Unlink_use( HotelComponent_BOOKING *, HotelComponent_GUEST * );
#define HotelComponent_BOOKING_R15_From_GUEST( GUEST ) ( &((GUEST)->BOOKING_R15) )
void HotelComponent_GUEST_R16_Link_stays_in( HotelComponent_FACILITY *, HotelComponent_GUEST * );
void HotelComponent_GUEST_R16_Unlink_stays_in( HotelComponent_FACILITY *, HotelComponent_GUEST * );
#define HotelComponent_FACILITY_R16_From_GUEST( GUEST ) ( &((GUEST)->FACILITY_R16) )


#define HotelComponent_GUEST_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_HotelComponent_GUEST_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* HOTELCOMPONENT_GUEST_CLASS_H */


