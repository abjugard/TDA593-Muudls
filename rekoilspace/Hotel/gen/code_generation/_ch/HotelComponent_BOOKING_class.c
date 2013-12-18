/*----------------------------------------------------------------------------
 * File:  HotelComponent_BOOKING_class.c
 *
 * Class:       Booking  (BOOKING)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "Hotel_sys_types.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "HotelComponent_classes.h"

/*
 * instance operation:  addGuest
 */
void
HotelComponent_BOOKING_op_addGuest( HotelComponent_BOOKING * self, const i_t p_age, c_t p_name[ESCHER_SYS_MAX_STRING_LEN] )
{

}

/*
 * instance operation:  getBookingInfo
 */
HotelComponent_BOOKING *
HotelComponent_BOOKING_op_getBookingInfo( HotelComponent_BOOKING * self)
{

}

/*
 * instance operation:  setCustomer
 */
bool
HotelComponent_BOOKING_op_setCustomer( HotelComponent_BOOKING * self, c_t p_customer[ESCHER_SYS_MAX_STRING_LEN] )
{

}

/*
 * instance operation:  addBookable
 */
bool
HotelComponent_BOOKING_op_addBookable( HotelComponent_BOOKING * self, HotelComponent_BOOKABLE * p_bookable )
{

}

/*
 * instance operation:  addService
 */
bool
HotelComponent_BOOKING_op_addService( HotelComponent_BOOKING * self, HotelComponent_BOOKABLE * p_bookable )
{

}

/*
 * instance operation:  getFromDate
 */
Escher_TimeStamp_t
HotelComponent_BOOKING_op_getFromDate( HotelComponent_BOOKING * self)
{
  /* RETURN self.fromDate */
  XTUML_OAL_STMT_TRACE( 1, "RETURN self.fromDate" );
  return self->fromDate;
}

/*
 * instance operation:  getToDate
 */
Escher_TimeStamp_t
HotelComponent_BOOKING_op_getToDate( HotelComponent_BOOKING * self)
{
  /* RETURN self.toDate */
  XTUML_OAL_STMT_TRACE( 1, "RETURN self.toDate" );
  return self->toDate;
}

/*
 * instance operation:  setFromDate
 */
void
HotelComponent_BOOKING_op_setFromDate( HotelComponent_BOOKING * self, Escher_TimeStamp_t p_fromDate )
{
  /* ASSIGN self.fromDate = PARAM.fromDate */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN self.fromDate = PARAM.fromDate" );
  self->fromDate = p_fromDate;

}

/*
 * instance operation:  setToDate
 */
void
HotelComponent_BOOKING_op_setToDate( HotelComponent_BOOKING * self, Escher_TimeStamp_t p_toDate )
{
  /* ASSIGN self.toDate = PARAM.toDate */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN self.toDate = PARAM.toDate" );
  self->toDate = p_toDate;

}


/*
 * RELATE BOOKABLE TO BOOKING ACROSS R12
 */
void
HotelComponent_BOOKING_R12_Link( HotelComponent_BOOKABLE * part, HotelComponent_BOOKING * form )
{
  if ( (part == 0) || (form == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "BOOKING", "HotelComponent_BOOKING_R12_Link" );
    return;
  }
  Escher_SetInsertElement( &form->BOOKABLE_R12, (Escher_ObjectSet_s *) part );
  /* Note:  BOOKABLE->BOOKING[R12] not navigated */
}

/*
 * UNRELATE BOOKABLE FROM BOOKING ACROSS R12
 */
void
HotelComponent_BOOKING_R12_Unlink( HotelComponent_BOOKABLE * part, HotelComponent_BOOKING * form )
{
  if ( (part == 0) || (form == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "BOOKING", "HotelComponent_BOOKING_R12_Unlink" );
    return;
  }
  Escher_SetRemoveElement( &form->BOOKABLE_R12, (Escher_ObjectSet_s *) part );
  /* Note:  BOOKABLE->BOOKING[R12] not navigated */
}

/*
 * RELATE HOTEL TO BOOKING ACROSS R13
 */
void
HotelComponent_BOOKING_R13_Link( HotelComponent_HOTEL * part, HotelComponent_BOOKING * form )
{
  if ( (part == 0) || (form == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "BOOKING", "HotelComponent_BOOKING_R13_Link" );
    return;
  }
  /* Note:  BOOKING->HOTEL[R13] not navigated */
  /* Note:  HOTEL->BOOKING[R13] not navigated */
}

/*
 * RELATE FACILITY TO BOOKING ACROSS R14
 */
void
HotelComponent_BOOKING_R14_Link_is_booked_in( HotelComponent_FACILITY * part, HotelComponent_BOOKING * form )
{
  if ( (part == 0) || (form == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "BOOKING", "HotelComponent_BOOKING_R14_Link_is_booked_in" );
    return;
  }
  Escher_SetInsertElement( &form->FACILITY_R14, (Escher_ObjectSet_s *) part );
  /* Note:  FACILITY->BOOKING[R14] not navigated */
}

/*
 * UNRELATE FACILITY FROM BOOKING ACROSS R14
 */
void
HotelComponent_BOOKING_R14_Unlink_is_booked_in( HotelComponent_FACILITY * part, HotelComponent_BOOKING * form )
{
  if ( (part == 0) || (form == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "BOOKING", "HotelComponent_BOOKING_R14_Unlink_is_booked_in" );
    return;
  }
  Escher_SetRemoveElement( &form->FACILITY_R14, (Escher_ObjectSet_s *) part );
  /* Note:  FACILITY->BOOKING[R14] not navigated */
}


/*----------------------------------------------------------------------------
 * Operation action methods implementation for the following class:
 *
 * Class:      Booking  (BOOKING)
 * Component:  HotelComponent
 *--------------------------------------------------------------------------*/
/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s HotelComponent_BOOKING_container[ HotelComponent_BOOKING_MAX_EXTENT_SIZE ];
static HotelComponent_BOOKING HotelComponent_BOOKING_instances[ HotelComponent_BOOKING_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_HotelComponent_BOOKING_extent = {
  {0}, {0}, &HotelComponent_BOOKING_container[ 0 ],
  (Escher_iHandle_t) &HotelComponent_BOOKING_instances,
  sizeof( HotelComponent_BOOKING ), 0, HotelComponent_BOOKING_MAX_EXTENT_SIZE
  };


