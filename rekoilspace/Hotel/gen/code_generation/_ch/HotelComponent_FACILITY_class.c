/*----------------------------------------------------------------------------
 * File:  HotelComponent_FACILITY_class.c
 *
 * Class:       Facility  (FACILITY)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "Hotel_sys_types.h"
#include "LOG_bridge.h"
#include "HotelComponent_classes.h"


/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s HotelComponent_FACILITY_container[ HotelComponent_FACILITY_MAX_EXTENT_SIZE ];
static HotelComponent_FACILITY HotelComponent_FACILITY_instances[ HotelComponent_FACILITY_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_HotelComponent_FACILITY_extent = {
  {0}, {0}, &HotelComponent_FACILITY_container[ 0 ],
  (Escher_iHandle_t) &HotelComponent_FACILITY_instances,
  sizeof( HotelComponent_FACILITY ), 0, HotelComponent_FACILITY_MAX_EXTENT_SIZE
  };


