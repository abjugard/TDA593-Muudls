/*----------------------------------------------------------------------------
 * File:  HotelComponent_BOOKABLE_class.h
 *
 * Class:       Bookable  (BOOKABLE)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef HOTELCOMPONENT_BOOKABLE_CLASS_H
#define HOTELCOMPONENT_BOOKABLE_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   Bookable  (BOOKABLE)
 */
struct HotelComponent_BOOKABLE {

  /* application analysis class attributes */
  i_t price;  /* - price */
  c_t description[ESCHER_SYS_MAX_STRING_LEN];  /* - description */
  Escher_UniqueID_t id;  /* - id */
  c_t name[ESCHER_SYS_MAX_STRING_LEN];  /* - name */

  /* relationship storage */
  void * R2_subtype;
  Escher_ClassNumber_t R2_object_id;
  /* Note:  No storage needed for BOOKABLE->PACKAGE[R8] */
  /* Note:  No storage needed for BOOKABLE->HOTEL[R9] */
  /* Note:  No storage needed for BOOKABLE->BOOKING[R12] */
  /* Note:  No storage needed for BOOKABLE->BENEFIT[R25] */
};
bool HotelComponent_BOOKABLE_op_isAvailable( HotelComponent_BOOKABLE *, const i_t );
void HotelComponent_BOOKABLE_op_getBookableRepresentation( HotelComponent_BOOKABLE * );


/* Accessors to BOOKABLE[R2] subtypes */
#define HotelComponent_PACKAGE_R2_From_BOOKABLE( BOOKABLE ) \
   ( (((BOOKABLE)->R2_object_id) == HotelComponent_PACKAGE_CLASS_NUMBER) ? \
     ((HotelComponent_PACKAGE *)((BOOKABLE)->R2_subtype)) : (0) )
#define HotelComponent_SERVICE_R2_From_BOOKABLE( BOOKABLE ) \
   ( (((BOOKABLE)->R2_object_id) == HotelComponent_SERVICE_CLASS_NUMBER) ? \
     ((HotelComponent_SERVICE *)((BOOKABLE)->R2_subtype)) : (0) )
#define HotelComponent_FACILITYTYPE_R2_From_BOOKABLE( BOOKABLE ) \
   ( (((BOOKABLE)->R2_object_id) == HotelComponent_FACILITYTYPE_CLASS_NUMBER) ? \
     ((HotelComponent_FACILITYTYPE *)((BOOKABLE)->R2_subtype)) : (0) )

/* xtUML WARNING:  PACKAGE<-R8->>BOOKABLE never related!  */
/* Note:  PACKAGE<-R8->>BOOKABLE unrelate accessor not needed */
void HotelComponent_BOOKABLE_R9_Link( HotelComponent_HOTEL *, HotelComponent_BOOKABLE * );
/* Note:  HOTEL<-R9->>BOOKABLE unrelate accessor not needed */
/* Note:  BOOKABLE->BOOKING[R12] not navigated */
/* Note:  BOOKABLE->BENEFIT[R25] not navigated */


#define HotelComponent_BOOKABLE_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_HotelComponent_BOOKABLE_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* HOTELCOMPONENT_BOOKABLE_CLASS_H */


