/*----------------------------------------------------------------------------
 * File:  HotelComponent_FACILITY_class.h
 *
 * Class:       Facility  (FACILITY)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef HOTELCOMPONENT_FACILITY_CLASS_H
#define HOTELCOMPONENT_FACILITY_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   Facility  (FACILITY)
 */
struct HotelComponent_FACILITY {

  /* application analysis class attributes */
  c_t facilityID[ESCHER_SYS_MAX_STRING_LEN];  /* - facilityID */
  Escher_TimeStamp_t checkedIn;  /* - checkedIn */
  Escher_TimeStamp_t checkedOut;  /* - checkedOut */

  /* relationship storage */
  HotelComponent_FACILITYTYPE * FACILITYTYPE_R1_is_instance_of;
  /* Note:  No storage needed for FACILITY->FACILITYGROUP[R6] */
  /* Note:  No storage needed for FACILITY->BOOKING[R14] */
  /* Note:  No storage needed for FACILITY->GUEST[R16] */
};

void HotelComponent_FACILITY_R1_Link( HotelComponent_FACILITYTYPE *, HotelComponent_FACILITY * );
/* Note:  FACILITYTYPE<-R1->>FACILITY unrelate accessor not needed */
/* xtUML WARNING:  FACILITYGROUP<-R6->>FACILITY never related!  */
/* Note:  FACILITYGROUP<-R6->>FACILITY unrelate accessor not needed */
#define HotelComponent_BOOKING_R14_From_FACILITY_is_booked_in( FACILITY ) ( &((FACILITY)->BOOKING_R14_is_booked_in) )
#define HotelComponent_GUEST_R16_From_FACILITY_stays_in( FACILITY ) ( &((FACILITY)->GUEST_R16_stays_in) )


#define HotelComponent_FACILITY_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_HotelComponent_FACILITY_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* HOTELCOMPONENT_FACILITY_CLASS_H */


