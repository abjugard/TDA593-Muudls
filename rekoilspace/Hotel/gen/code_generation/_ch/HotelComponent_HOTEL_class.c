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


