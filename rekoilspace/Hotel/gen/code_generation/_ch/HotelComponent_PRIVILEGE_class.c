/*----------------------------------------------------------------------------
 * File:  HotelComponent_PRIVILEGE_class.c
 *
 * Class:       Privilege  (PRIVILEGE)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "Hotel_sys_types.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "HotelComponent_classes.h"


/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s HotelComponent_PRIVILEGE_container[ HotelComponent_PRIVILEGE_MAX_EXTENT_SIZE ];
static HotelComponent_PRIVILEGE HotelComponent_PRIVILEGE_instances[ HotelComponent_PRIVILEGE_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_HotelComponent_PRIVILEGE_extent = {
  {0}, {0}, &HotelComponent_PRIVILEGE_container[ 0 ],
  (Escher_iHandle_t) &HotelComponent_PRIVILEGE_instances,
  sizeof( HotelComponent_PRIVILEGE ), 0, HotelComponent_PRIVILEGE_MAX_EXTENT_SIZE
  };


