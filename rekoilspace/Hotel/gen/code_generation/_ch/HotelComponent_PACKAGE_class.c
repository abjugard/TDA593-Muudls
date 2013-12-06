/*----------------------------------------------------------------------------
 * File:  HotelComponent_PACKAGE_class.c
 *
 * Class:       Package  (PACKAGE)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "Hotel_sys_types.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "HotelComponent_classes.h"


/*
 * RELATE BOOKABLE TO PACKAGE ACROSS R2
 */
void
HotelComponent_PACKAGE_R2_Link( HotelComponent_BOOKABLE * supertype, HotelComponent_PACKAGE * subtype )
{
  if ( (supertype == 0) || (subtype == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "PACKAGE", "HotelComponent_PACKAGE_R2_Link" );
    return;
  }
  /* Optimized linkage for PACKAGE->BOOKABLE[R2] */
  subtype->BOOKABLE_R2 = supertype;
  /* Optimized linkage for BOOKABLE->PACKAGE[R2] */
  supertype->R2_subtype = subtype;
  supertype->R2_object_id = HotelComponent_PACKAGE_CLASS_NUMBER;
}


/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s HotelComponent_PACKAGE_container[ HotelComponent_PACKAGE_MAX_EXTENT_SIZE ];
static HotelComponent_PACKAGE HotelComponent_PACKAGE_instances[ HotelComponent_PACKAGE_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_HotelComponent_PACKAGE_extent = {
  {0}, {0}, &HotelComponent_PACKAGE_container[ 0 ],
  (Escher_iHandle_t) &HotelComponent_PACKAGE_instances,
  sizeof( HotelComponent_PACKAGE ), 0, HotelComponent_PACKAGE_MAX_EXTENT_SIZE
  };


