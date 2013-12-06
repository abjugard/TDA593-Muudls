/*----------------------------------------------------------------------------
 * File:  HotelComponent_CUSTOMER_class.c
 *
 * Class:       Customer  (CUSTOMER)
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
static Escher_SetElement_s HotelComponent_CUSTOMER_container[ HotelComponent_CUSTOMER_MAX_EXTENT_SIZE ];
static HotelComponent_CUSTOMER HotelComponent_CUSTOMER_instances[ HotelComponent_CUSTOMER_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_HotelComponent_CUSTOMER_extent = {
  {0}, {0}, &HotelComponent_CUSTOMER_container[ 0 ],
  (Escher_iHandle_t) &HotelComponent_CUSTOMER_instances,
  sizeof( HotelComponent_CUSTOMER ), 0, HotelComponent_CUSTOMER_MAX_EXTENT_SIZE
  };


