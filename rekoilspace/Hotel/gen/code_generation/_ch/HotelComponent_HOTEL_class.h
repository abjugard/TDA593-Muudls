/*----------------------------------------------------------------------------
 * File:  HotelComponent_HOTEL_class.h
 *
 * Class:       Hotel  (HOTEL)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef HOTELCOMPONENT_HOTEL_CLASS_H
#define HOTELCOMPONENT_HOTEL_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   Hotel  (HOTEL)
 */
struct HotelComponent_HOTEL {

  /* application analysis class attributes */
  c_t adress[ESCHER_SYS_MAX_STRING_LEN];  /* - adress */
  c_t description[ESCHER_SYS_MAX_STRING_LEN];  /* - description */
  i_t maxBookingLength;  /* - maxBookingLength */

  /* relationship storage */
  /* Note:  No storage needed for HOTEL->BOOKABLE[R9] */
  /* Note:  No storage needed for HOTEL->STAFF[R10] */
  /* Note:  No storage needed for HOTEL->BOOKING[R13] */
  /* Note:  No storage needed for HOTEL->BOOKINGSESSION[R17] */
  /* Note:  No storage needed for HOTEL->FACILITYGROUP[R18] */
};
bool HotelComponent_HOTEL_op_createFacilityGroup( HotelComponent_HOTEL *, c_t[ESCHER_SYS_MAX_STRING_LEN] );
bool HotelComponent_HOTEL_op_createStaff( HotelComponent_HOTEL *, c_t[ESCHER_SYS_MAX_STRING_LEN] );
bool HotelComponent_HOTEL_op_createService( HotelComponent_HOTEL *, c_t[ESCHER_SYS_MAX_STRING_LEN] );
bool HotelComponent_HOTEL_op_createFacility( HotelComponent_HOTEL *, c_t[ESCHER_SYS_MAX_STRING_LEN] );
Escher_ObjectSet_s * HotelComponent_HOTEL_op_availableBookables( HotelComponent_HOTEL *, const i_t );
bool HotelComponent_HOTEL_op_addBooking( HotelComponent_HOTEL *, HotelComponent_BOOKING * );
HotelComponent_FACILITY * HotelComponent_HOTEL_op_searchFacility( HotelComponent_HOTEL *, const i_t, Escher_TimeStamp_t, Escher_TimeStamp_t );
Escher_ObjectSet_s * HotelComponent_HOTEL_op_searchFacilityTypes( HotelComponent_HOTEL *, Escher_Date_t, Escher_Date_t );
i_t HotelComponent_HOTEL_op_getMaxBookingLength( HotelComponent_HOTEL * );

/* Note:  HOTEL->BOOKABLE[R9] not navigated */
/* Note:  HOTEL->STAFF[R10] not navigated */
/* Note:  HOTEL->BOOKING[R13] not navigated */
#define HotelComponent_BOOKINGSESSION_R17_From_HOTEL( HOTEL ) ( &((HOTEL)->BOOKINGSESSION_R17) )
/* Note:  HOTEL->FACILITYGROUP[R18] not navigated */


#define HotelComponent_HOTEL_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_HotelComponent_HOTEL_extent;

#ifdef	__cplusplus
}
#endif

#endif  /* HOTELCOMPONENT_HOTEL_CLASS_H */


