/*----------------------------------------------------------------------------
 * File:  HotelComponent_INVOICE_class.c
 *
 * Class:       Invoice  (INVOICE)
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
static Escher_SetElement_s HotelComponent_INVOICE_container[ HotelComponent_INVOICE_MAX_EXTENT_SIZE ];
static HotelComponent_INVOICE HotelComponent_INVOICE_instances[ HotelComponent_INVOICE_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_HotelComponent_INVOICE_extent = {
  {0}, {0}, &HotelComponent_INVOICE_container[ 0 ],
  (Escher_iHandle_t) &HotelComponent_INVOICE_instances,
  sizeof( HotelComponent_INVOICE ), 0, HotelComponent_INVOICE_MAX_EXTENT_SIZE
  };


