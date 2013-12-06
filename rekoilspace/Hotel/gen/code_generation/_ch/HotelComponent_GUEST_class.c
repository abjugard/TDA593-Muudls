/*----------------------------------------------------------------------------
 * File:  HotelComponent_GUEST_class.c
 *
 * Class:       Guest  (GUEST)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "Hotel_sys_types.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "HotelComponent_classes.h"

/*
 * instance operation:  setFacility
 */
bool
HotelComponent_GUEST_op_setFacility( HotelComponent_GUEST * self, HotelComponent_FACILITY * p_facility )
{

}



/*----------------------------------------------------------------------------
 * Operation action methods implementation for the following class:
 *
 * Class:      Guest  (GUEST)
 * Component:  HotelComponent
 *--------------------------------------------------------------------------*/
/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s HotelComponent_GUEST_container[ HotelComponent_GUEST_MAX_EXTENT_SIZE ];
static HotelComponent_GUEST HotelComponent_GUEST_instances[ HotelComponent_GUEST_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_HotelComponent_GUEST_extent = {
  {0}, {0}, &HotelComponent_GUEST_container[ 0 ],
  (Escher_iHandle_t) &HotelComponent_GUEST_instances,
  sizeof( HotelComponent_GUEST ), 0, HotelComponent_GUEST_MAX_EXTENT_SIZE
  };


