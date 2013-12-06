/*----------------------------------------------------------------------------
 * File:  HotelComponent_CLUB_class.c
 *
 * Class:       Club  (CLUB)
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
static Escher_SetElement_s HotelComponent_CLUB_container[ HotelComponent_CLUB_MAX_EXTENT_SIZE ];
static HotelComponent_CLUB HotelComponent_CLUB_instances[ HotelComponent_CLUB_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_HotelComponent_CLUB_extent = {
  {0}, {0}, &HotelComponent_CLUB_container[ 0 ],
  (Escher_iHandle_t) &HotelComponent_CLUB_instances,
  sizeof( HotelComponent_CLUB ), 0, HotelComponent_CLUB_MAX_EXTENT_SIZE
  };


