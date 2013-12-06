/*----------------------------------------------------------------------------
 * File:  HotelComponent_FACILITYTYPE_class.h
 *
 * Class:       FacilityType  (FACILITYTYPE)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef HOTELCOMPONENT_FACILITYTYPE_CLASS_H
#define HOTELCOMPONENT_FACILITYTYPE_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   FacilityType  (FACILITYTYPE)
 */
struct HotelComponent_FACILITYTYPE {

  /* application analysis class attributes */
  c_t approximateArea[ESCHER_SYS_MAX_STRING_LEN];  /* - approximateArea */
  Escher_UniqueID_t id;  /* - id */

  /* relationship storage */
  /* Note:  No storage needed for FACILITYTYPE->FACILITY[R1] */
  HotelComponent_BOOKABLE * BOOKABLE_R2;
  /* Note:  No storage needed for FACILITYTYPE->SERVICE[R4] */
  /* Note:  No storage needed for FACILITYTYPE->SERVICE[R5] */
};
Escher_ObjectSet_s * HotelComponent_FACILITYTYPE_op_getPossibleExtras( HotelComponent_FACILITYTYPE * );

void HotelComponent_FACILITYTYPE_R1_Link_is_instance_of( HotelComponent_FACILITY *, HotelComponent_FACILITYTYPE * );
/* Note:  FACILITY<-R1->>FACILITYTYPE unrelate accessor not needed */
void HotelComponent_FACILITYTYPE_R2_Link( HotelComponent_BOOKABLE *, HotelComponent_FACILITYTYPE * );
/* Note:  No BOOKABLE<-R2->FACILITYTYPE unrelate accessor needed.  */
/* Note:  FACILITYTYPE->SERVICE[R4] not navigated */
/* Note:  FACILITYTYPE->SERVICE[R5] not navigated */


#define HotelComponent_FACILITYTYPE_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_HotelComponent_FACILITYTYPE_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* HOTELCOMPONENT_FACILITYTYPE_CLASS_H */


