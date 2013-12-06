/*----------------------------------------------------------------------------
 * File:  HotelComponent_FACILITYGROUP_class.c
 *
 * Class:       FacilityGroup  (FACILITYGROUP)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "Hotel_sys_types.h"
#include "LOG_bridge.h"
#include "HotelComponent_classes.h"

/* Note:  R3.'has' never related (or not needed).  */

/* Note:  R3.'has' never unrelated (or not needed).  */
/* Note:  R3.'in group' never related (or not needed).  */

/* Note:  R3.'in group' never unrelated (or not needed).  */

/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s HotelComponent_FACILITYGROUP_container[ HotelComponent_FACILITYGROUP_MAX_EXTENT_SIZE ];
static HotelComponent_FACILITYGROUP HotelComponent_FACILITYGROUP_instances[ HotelComponent_FACILITYGROUP_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_HotelComponent_FACILITYGROUP_extent = {
  {0}, {0}, &HotelComponent_FACILITYGROUP_container[ 0 ],
  (Escher_iHandle_t) &HotelComponent_FACILITYGROUP_instances,
  sizeof( HotelComponent_FACILITYGROUP ), 0, HotelComponent_FACILITYGROUP_MAX_EXTENT_SIZE
  };


