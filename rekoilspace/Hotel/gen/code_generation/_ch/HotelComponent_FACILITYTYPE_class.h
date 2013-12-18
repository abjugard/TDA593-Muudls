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
  i_t id;  /* - id */

  /* relationship storage */
  Escher_ObjectSet_s FACILITY_R1;
  HotelComponent_BOOKABLE * BOOKABLE_R2;
  /* Note:  No storage needed for FACILITYTYPE->SERVICE[R4] */
  /* Note:  No storage needed for FACILITYTYPE->SERVICE[R5] */
};
Escher_ObjectSet_s * HotelComponent_FACILITYTYPE_op_getPossibleExtras( HotelComponent_FACILITYTYPE * );

#define HotelComponent_FACILITY_R1_From_FACILITYTYPE( FACILITYTYPE ) ( &((FACILITYTYPE)->FACILITY_R1) )
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


