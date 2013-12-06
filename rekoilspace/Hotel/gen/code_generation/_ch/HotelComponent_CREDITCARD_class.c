/*----------------------------------------------------------------------------
 * File:  HotelComponent_CREDITCARD_class.c
 *
 * Class:       CreditCard  (CREDITCARD)
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
static Escher_SetElement_s HotelComponent_CREDITCARD_container[ HotelComponent_CREDITCARD_MAX_EXTENT_SIZE ];
static HotelComponent_CREDITCARD HotelComponent_CREDITCARD_instances[ HotelComponent_CREDITCARD_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_HotelComponent_CREDITCARD_extent = {
  {0}, {0}, &HotelComponent_CREDITCARD_container[ 0 ],
  (Escher_iHandle_t) &HotelComponent_CREDITCARD_instances,
  sizeof( HotelComponent_CREDITCARD ), 0, HotelComponent_CREDITCARD_MAX_EXTENT_SIZE
  };


