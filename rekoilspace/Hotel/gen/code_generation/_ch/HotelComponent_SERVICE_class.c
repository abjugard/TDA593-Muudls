/*----------------------------------------------------------------------------
 * File:  HotelComponent_SERVICE_class.c
 *
 * Class:       Service  (SERVICE)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "Hotel_sys_types.h"
#include "LOG_bridge.h"
#include "HotelComponent_classes.h"


/*
 * RELATE BOOKABLE TO SERVICE ACROSS R2
 */
void
HotelComponent_SERVICE_R2_Link( HotelComponent_BOOKABLE * supertype, HotelComponent_SERVICE * subtype )
{
  if ( (supertype == 0) || (subtype == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "SERVICE", "HotelComponent_SERVICE_R2_Link" );
    return;
  }
  /* Optimized linkage for SERVICE->BOOKABLE[R2] */
  subtype->BOOKABLE_R2 = supertype;
  /* Optimized linkage for BOOKABLE->SERVICE[R2] */
  supertype->R2_subtype = subtype;
  supertype->R2_object_id = HotelComponent_SERVICE_CLASS_NUMBER;
}


/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s HotelComponent_SERVICE_container[ HotelComponent_SERVICE_MAX_EXTENT_SIZE ];
static HotelComponent_SERVICE HotelComponent_SERVICE_instances[ HotelComponent_SERVICE_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_HotelComponent_SERVICE_extent = {
  {0}, {0}, &HotelComponent_SERVICE_container[ 0 ],
  (Escher_iHandle_t) &HotelComponent_SERVICE_instances,
  sizeof( HotelComponent_SERVICE ), 0, HotelComponent_SERVICE_MAX_EXTENT_SIZE
  };


