/*----------------------------------------------------------------------------
 * File:  HotelComponent_FACILITYGROUP_class.h
 *
 * Class:       FacilityGroup  (FACILITYGROUP)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef HOTELCOMPONENT_FACILITYGROUP_CLASS_H
#define HOTELCOMPONENT_FACILITYGROUP_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   FacilityGroup  (FACILITYGROUP)
 */
struct HotelComponent_FACILITYGROUP {

  /* application analysis class attributes */
  c_t name[ESCHER_SYS_MAX_STRING_LEN];  /* - name */

  /* relationship storage */
  HotelComponent_FACILITYGROUP * FACILITYGROUP_R3_has;
  Escher_ObjectSet_s FACILITYGROUP_R3_in_group;
  /* Note:  No storage needed for FACILITYGROUP->FACILITY[R6] */
  /* Note:  No storage needed for FACILITYGROUP->HOTEL[R18] */
};

      
/*
 * R3 is Simple Reflexive:  1:*
 * Note:  Reflexive association is asymmetric.
 *  Formalizing FACILITYGROUP has participant
 *  Participant FACILITYGROUP in group formalizer
 */
/* Navigation phrase:  R3.'has' */
/* Note:  R3.'has' never related (or not needed).  */
/* Note:  R3.'has' never unrelated (or not needed).  */
/* Navigation phrase:  R3.'in group' */
/* Note:  R3.'in group' never related (or not needed).  */
/* Note:  R3.'in group' never unrelated (or not needed).  */
/* Note:  FACILITYGROUP->FACILITYGROUP[R3] not navigated */
/* Note:  FACILITYGROUP->FACILITY[R6] not navigated */
/* xtUML WARNING:  HOTEL<-R18->>FACILITYGROUP never related!  */
/* Note:  HOTEL<-R18->>FACILITYGROUP unrelate accessor not needed */


#define HotelComponent_FACILITYGROUP_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_HotelComponent_FACILITYGROUP_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* HOTELCOMPONENT_FACILITYGROUP_CLASS_H */


