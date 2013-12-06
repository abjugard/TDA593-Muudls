/*----------------------------------------------------------------------------
 * File:  HotelComponent_CASH_class.c
 *
 * Class:       Cash  (CASH)
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
static Escher_SetElement_s HotelComponent_CASH_container[ HotelComponent_CASH_MAX_EXTENT_SIZE ];
static HotelComponent_CASH HotelComponent_CASH_instances[ HotelComponent_CASH_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_HotelComponent_CASH_extent = {
  {0}, {0}, &HotelComponent_CASH_container[ 0 ],
  (Escher_iHandle_t) &HotelComponent_CASH_instances,
  sizeof( HotelComponent_CASH ), 0, HotelComponent_CASH_MAX_EXTENT_SIZE
  };


