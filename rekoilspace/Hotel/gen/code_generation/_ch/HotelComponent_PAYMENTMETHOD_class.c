/*----------------------------------------------------------------------------
 * File:  HotelComponent_PAYMENTMETHOD_class.c
 *
 * Class:       PaymentMethod  (PAYMENTMETHOD)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "Hotel_sys_types.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "HotelComponent_classes.h"


/* Accessors to PAYMENTMETHOD[R19] subtypes */


/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s HotelComponent_PAYMENTMETHOD_container[ HotelComponent_PAYMENTMETHOD_MAX_EXTENT_SIZE ];
static HotelComponent_PAYMENTMETHOD HotelComponent_PAYMENTMETHOD_instances[ HotelComponent_PAYMENTMETHOD_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_HotelComponent_PAYMENTMETHOD_extent = {
  {0}, {0}, &HotelComponent_PAYMENTMETHOD_container[ 0 ],
  (Escher_iHandle_t) &HotelComponent_PAYMENTMETHOD_instances,
  sizeof( HotelComponent_PAYMENTMETHOD ), 0, HotelComponent_PAYMENTMETHOD_MAX_EXTENT_SIZE
  };


