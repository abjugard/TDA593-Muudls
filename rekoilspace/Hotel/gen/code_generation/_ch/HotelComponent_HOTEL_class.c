/*----------------------------------------------------------------------------
 * File:  HotelComponent_HOTEL_class.c
 *
 * Class:       Hotel  (HOTEL)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "Hotel_sys_types.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "HotelComponent_classes.h"

/*
 * instance operation:  createFacilityGroup
 */
bool
HotelComponent_HOTEL_op_createFacilityGroup( HotelComponent_HOTEL * self, c_t p_name[ESCHER_SYS_MAX_STRING_LEN] )
{

}

/*
 * instance operation:  createStaff
 */
bool
HotelComponent_HOTEL_op_createStaff( HotelComponent_HOTEL * self, c_t p_name[ESCHER_SYS_MAX_STRING_LEN] )
{

}

/*
 * instance operation:  createService
 */
bool
HotelComponent_HOTEL_op_createService( HotelComponent_HOTEL * self, c_t p_description[ESCHER_SYS_MAX_STRING_LEN] )
{

}

/*
 * instance operation:  createFacility
 */
bool
HotelComponent_HOTEL_op_createFacility( HotelComponent_HOTEL * self, c_t p_facilityID[ESCHER_SYS_MAX_STRING_LEN] )
{

}

/*
 * instance operation:  availableBookables
 */
Escher_ObjectSet_s *
HotelComponent_HOTEL_op_availableBookables( HotelComponent_HOTEL * self, const i_t p_filter )
{

}

/*
 * instance operation:  addBooking
 */
bool
HotelComponent_HOTEL_op_addBooking( HotelComponent_HOTEL * self, HotelComponent_BOOKING * p_booking )
{

}

/*
 * instance operation:  searchFacility
 */
HotelComponent_FACILITY *
HotelComponent_HOTEL_op_searchFacility( HotelComponent_HOTEL * self, const i_t p_facilityType, Escher_TimeStamp_t p_fromDate, Escher_TimeStamp_t p_toDate )
{
  HotelComponent_FACILITY * fc=0;Escher_ObjectSet_s allBookings_space={0}; Escher_ObjectSet_s * allBookings = &allBookings_space;HotelComponent_FACILITY * cpalbin=0;HotelComponent_FACILITYTYPE * ft=0;Escher_ObjectSet_s facilities_space={0}; Escher_ObjectSet_s * facilities = &facilities_space;
  /* SELECT any ft FROM INSTANCES OF FACILITYTYPE WHERE ( SELECTED.id == PARAM.facilityType ) */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any ft FROM INSTANCES OF FACILITYTYPE WHERE ( SELECTED.id == PARAM.facilityType )" );
  ft = 0;
  { HotelComponent_FACILITYTYPE * selected;
    Escher_Iterator_s iterftHotelComponent_FACILITYTYPE;
    Escher_IteratorReset( &iterftHotelComponent_FACILITYTYPE, &pG_HotelComponent_FACILITYTYPE_extent.active );
    while ( (selected = (HotelComponent_FACILITYTYPE *) Escher_IteratorNext( &iterftHotelComponent_FACILITYTYPE )) != 0 ) {
      if ( ( selected->id == p_facilityType ) ) {
        ft = selected;
        break;
      }
    }
  }
  /* SELECT many allBookings FROM INSTANCES OF BOOKING */
  XTUML_OAL_STMT_TRACE( 1, "SELECT many allBookings FROM INSTANCES OF BOOKING" );
  Escher_CopySet( allBookings, &pG_HotelComponent_BOOKING_extent.active );
  /* SELECT many facilities RELATED BY ft->FACILITY[R1] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT many facilities RELATED BY ft->FACILITY[R1]" );
  Escher_ClearSet( facilities );
  if ( 0 != ft ) {
    Escher_CopySet( facilities, &ft->FACILITY_R1 );
  }
  /* FOR EACH fc IN facilities */
  XTUML_OAL_STMT_TRACE( 1, "FOR EACH fc IN facilities" );
  { Escher_Iterator_s iterfc;
  HotelComponent_FACILITY * iifc;
  Escher_IteratorReset( &iterfc, facilities );
  while ( (iifc = (HotelComponent_FACILITY *)Escher_IteratorNext( &iterfc )) != 0 ) {
    fc = iifc; {
    HotelComponent_BOOKING * booking=0;bool take;
    /* ASSIGN take = TRUE */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN take = TRUE" );
    take = TRUE;
    /* FOR EACH booking IN allBookings */
    XTUML_OAL_STMT_TRACE( 2, "FOR EACH booking IN allBookings" );
    { Escher_Iterator_s iterbooking;
    HotelComponent_BOOKING * iibooking;
    Escher_IteratorReset( &iterbooking, allBookings );
    while ( (iibooking = (HotelComponent_BOOKING *)Escher_IteratorNext( &iterbooking )) != 0 ) {
      booking = iibooking; {
    HotelComponent_FACILITY * f=0;Escher_ObjectSet_s fs_space={0}; Escher_ObjectSet_s * fs = &fs_space;
    /* IF ( ( ( ( 0 < ::compDate(booking.toDate, PARAM.toDate) ) and ( 0 > ::compDate(booking.toDate, PARAM.fromDate) ) ) or ( ( 0 > ::compDate(booking.fromDate, PARAM.toDate) ) and ( 0 < ::compDate(booking.fromDate, PARAM.fromDate) ) ) ) ) */
    XTUML_OAL_STMT_TRACE( 2, "IF ( ( ( ( 0 < ::compDate(booking.toDate, PARAM.toDate) ) and ( 0 > ::compDate(booking.toDate, PARAM.fromDate) ) ) or ( ( 0 > ::compDate(booking.fromDate, PARAM.toDate) ) and ( 0 < ::compDate(booking.fromDate, PARAM.fromDate) ) ) ) )" );
    if ( ( ( ( 0 < HotelComponent_compDate( booking->toDate, p_toDate ) ) && ( 0 > HotelComponent_compDate( booking->toDate, p_fromDate ) ) ) || ( ( 0 > HotelComponent_compDate( booking->fromDate, p_toDate ) ) && ( 0 < HotelComponent_compDate( booking->fromDate, p_fromDate ) ) ) ) ) {
    /* CONTINUE */
    XTUML_OAL_STMT_TRACE( 2, "CONTINUE" );
    Escher_ClearSet( fs ); 
    continue;
    }
    /* SELECT many fs RELATED BY booking->FACILITY[R14] */
    XTUML_OAL_STMT_TRACE( 2, "SELECT many fs RELATED BY booking->FACILITY[R14]" );
    Escher_ClearSet( fs );
    if ( 0 != booking ) {
      Escher_CopySet( fs, &booking->FACILITY_R14 );
    }
    /* FOR EACH f IN fs */
    XTUML_OAL_STMT_TRACE( 2, "FOR EACH f IN fs" );
    { Escher_Iterator_s iterf;
    HotelComponent_FACILITY * iif;
    Escher_IteratorReset( &iterf, fs );
    while ( (iif = (HotelComponent_FACILITY *)Escher_IteratorNext( &iterf )) != 0 ) {
      f = iif; {
    /* IF ( ( f == fc ) ) */
    XTUML_OAL_STMT_TRACE( 2, "IF ( ( f == fc ) )" );
    if ( ( f == fc ) ) {
    /* ASSIGN take = FALSE */
    XTUML_OAL_STMT_TRACE( 2, "ASSIGN take = FALSE" );
    take = FALSE;
    /* BREAK */
    XTUML_OAL_STMT_TRACE( 2, "BREAK" );
    break;
    }
    }}}
    /* IF ( not take ) */
    XTUML_OAL_STMT_TRACE( 2, "IF ( not take )" );
    if ( !take ) {
    /* BREAK */
    XTUML_OAL_STMT_TRACE( 2, "BREAK" );
    Escher_ClearSet( fs ); 
    break;
    }
    Escher_ClearSet( fs ); 
    }}}
    /* IF ( take ) */
    XTUML_OAL_STMT_TRACE( 2, "IF ( take )" );
    if ( take ) {
    /* LOG::LogInfo( message:( H: searchFacility: return  + fc.facilityID ) ) */
    XTUML_OAL_STMT_TRACE( 2, "LOG::LogInfo( message:( H: searchFacility: return  + fc.facilityID ) )" );
    LOG_LogInfo( Escher_stradd( "H: searchFacility: return ", fc->facilityID ) );
    /* RETURN fc */
    XTUML_OAL_STMT_TRACE( 2, "RETURN fc" );
    return fc;    }
  }}}
  /* LOG::LogInfo( message:H: searchFacility: about to return null ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:H: searchFacility: about to return null )" );
  LOG_LogInfo( "H: searchFacility: about to return null" );
  /* SELECT any cpalbin FROM INSTANCES OF FACILITY WHERE FALSE */
  XTUML_OAL_STMT_TRACE( 1, "SELECT any cpalbin FROM INSTANCES OF FACILITY WHERE FALSE" );
  cpalbin = 0;
  /* LOG::LogInfo( message:H: searchFacility: return null ) */
  XTUML_OAL_STMT_TRACE( 1, "LOG::LogInfo( message:H: searchFacility: return null )" );
  LOG_LogInfo( "H: searchFacility: return null" );
  /* RETURN cpalbin */
  XTUML_OAL_STMT_TRACE( 1, "RETURN cpalbin" );
  {HotelComponent_FACILITY * xtumlOALrv = cpalbin;
  Escher_ClearSet( allBookings );Escher_ClearSet( facilities ); 
  return xtumlOALrv;}
  Escher_ClearSet( allBookings );Escher_ClearSet( facilities ); 

}

/*
 * instance operation:  searchFacilityTypes
 */
Escher_ObjectSet_s *
HotelComponent_HOTEL_op_searchFacilityTypes( HotelComponent_HOTEL * self, Escher_Date_t p_fromDate, Escher_Date_t p_toDate )
{
  Escher_ObjectSet_s ft_space={0}; Escher_ObjectSet_s * ft = &ft_space;
  /* SELECT many ft FROM INSTANCES OF FACILITYTYPE */
  XTUML_OAL_STMT_TRACE( 1, "SELECT many ft FROM INSTANCES OF FACILITYTYPE" );
  Escher_CopySet( ft, &pG_HotelComponent_FACILITYTYPE_extent.active );
  /* RETURN ft */
  XTUML_OAL_STMT_TRACE( 1, "RETURN ft" );
  {Escher_ObjectSet_s * xtumlOALrv = ft;
  Escher_ClearSet( ft );
  return xtumlOALrv;}
  Escher_ClearSet( ft );

}

/*
 * instance operation:  getMaxBookingLength
 */
i_t
HotelComponent_HOTEL_op_getMaxBookingLength( HotelComponent_HOTEL * self)
{
  /* RETURN self.maxBookingLength */
  XTUML_OAL_STMT_TRACE( 1, "RETURN self.maxBookingLength" );
  return self->maxBookingLength;
}



/*----------------------------------------------------------------------------
 * Operation action methods implementation for the following class:
 *
 * Class:      Hotel  (HOTEL)
 * Component:  HotelComponent
 *--------------------------------------------------------------------------*/
/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s HotelComponent_HOTEL_container[ HotelComponent_HOTEL_MAX_EXTENT_SIZE ];
static HotelComponent_HOTEL HotelComponent_HOTEL_instances[ HotelComponent_HOTEL_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_HotelComponent_HOTEL_extent = {
  {0}, {0}, &HotelComponent_HOTEL_container[ 0 ],
  (Escher_iHandle_t) &HotelComponent_HOTEL_instances,
  sizeof( HotelComponent_HOTEL ), 0, HotelComponent_HOTEL_MAX_EXTENT_SIZE
  };


