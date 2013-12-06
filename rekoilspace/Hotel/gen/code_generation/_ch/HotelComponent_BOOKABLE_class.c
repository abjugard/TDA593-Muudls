/*----------------------------------------------------------------------------
 * File:  HotelComponent_BOOKABLE_class.c
 *
 * Class:       Bookable  (BOOKABLE)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "Hotel_sys_types.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "HotelComponent_classes.h"

/*
 * instance operation:  isAvailable
 */
bool
HotelComponent_BOOKABLE_op_isAvailable( HotelComponent_BOOKABLE * self, const i_t p_filter )
{

}

/*
 * instance operation:  getBookableRepresentation
 */
void
HotelComponent_BOOKABLE_op_getBookableRepresentation( HotelComponent_BOOKABLE * self)
{
  i_t i;
  /* ASSIGN i = 5 */
  XTUML_OAL_STMT_TRACE( 1, "ASSIGN i = 5" );
  i = 5;

}


/* Accessors to BOOKABLE[R2] subtypes */


/*
 * RELATE HOTEL TO BOOKABLE ACROSS R9
 */
void
HotelComponent_BOOKABLE_R9_Link( HotelComponent_HOTEL * part, HotelComponent_BOOKABLE * form )
{
  if ( (part == 0) || (form == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "BOOKABLE", "HotelComponent_BOOKABLE_R9_Link" );
    return;
  }
  /* Note:  BOOKABLE->HOTEL[R9] not navigated */
  /* Note:  HOTEL->BOOKABLE[R9] not navigated */
}


/*----------------------------------------------------------------------------
 * Operation action methods implementation for the following class:
 *
 * Class:      Bookable  (BOOKABLE)
 * Component:  HotelComponent
 *--------------------------------------------------------------------------*/
/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s HotelComponent_BOOKABLE_container[ HotelComponent_BOOKABLE_MAX_EXTENT_SIZE ];
static HotelComponent_BOOKABLE HotelComponent_BOOKABLE_instances[ HotelComponent_BOOKABLE_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_HotelComponent_BOOKABLE_extent = {
  {0}, {0}, &HotelComponent_BOOKABLE_container[ 0 ],
  (Escher_iHandle_t) &HotelComponent_BOOKABLE_instances,
  sizeof( HotelComponent_BOOKABLE ), 0, HotelComponent_BOOKABLE_MAX_EXTENT_SIZE
  };


