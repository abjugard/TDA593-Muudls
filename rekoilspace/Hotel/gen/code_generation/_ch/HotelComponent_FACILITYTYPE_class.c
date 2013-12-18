/*----------------------------------------------------------------------------
 * File:  HotelComponent_FACILITYTYPE_class.c
 *
 * Class:       FacilityType  (FACILITYTYPE)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "Hotel_sys_types.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "HotelComponent_classes.h"

/*
 * instance operation:  getPossibleExtras
 */
Escher_ObjectSet_s *
HotelComponent_FACILITYTYPE_op_getPossibleExtras( HotelComponent_FACILITYTYPE * self)
{

}


/*
 * RELATE BOOKABLE TO FACILITYTYPE ACROSS R2
 */
void
HotelComponent_FACILITYTYPE_R2_Link( HotelComponent_BOOKABLE * supertype, HotelComponent_FACILITYTYPE * subtype )
{
  if ( (supertype == 0) || (subtype == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "FACILITYTYPE", "HotelComponent_FACILITYTYPE_R2_Link" );
    return;
  }
  /* Optimized linkage for FACILITYTYPE->BOOKABLE[R2] */
  subtype->BOOKABLE_R2 = supertype;
  /* Optimized linkage for BOOKABLE->FACILITYTYPE[R2] */
  supertype->R2_subtype = subtype;
  supertype->R2_object_id = HotelComponent_FACILITYTYPE_CLASS_NUMBER;
}



/*----------------------------------------------------------------------------
 * Operation action methods implementation for the following class:
 *
 * Class:      FacilityType  (FACILITYTYPE)
 * Component:  HotelComponent
 *--------------------------------------------------------------------------*/
/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s HotelComponent_FACILITYTYPE_container[ HotelComponent_FACILITYTYPE_MAX_EXTENT_SIZE ];
static HotelComponent_FACILITYTYPE HotelComponent_FACILITYTYPE_instances[ HotelComponent_FACILITYTYPE_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_HotelComponent_FACILITYTYPE_extent = {
  {0}, {0}, &HotelComponent_FACILITYTYPE_container[ 0 ],
  (Escher_iHandle_t) &HotelComponent_FACILITYTYPE_instances,
  sizeof( HotelComponent_FACILITYTYPE ), 0, HotelComponent_FACILITYTYPE_MAX_EXTENT_SIZE
  };


