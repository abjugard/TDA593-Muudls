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


