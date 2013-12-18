/*----------------------------------------------------------------------------
 * File:  HotelComponent_BILLINGITEM_class.c
 *
 * Class:       BillingItem  (BILLINGITEM)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "Hotel_sys_types.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "HotelComponent_classes.h"


/*
 * RELATE BILLING TO BILLINGITEM ACROSS R20
 */
void
HotelComponent_BILLINGITEM_R20_Link( HotelComponent_BILLING * part, HotelComponent_BILLINGITEM * form )
{
  if ( (part == 0) || (form == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "BILLINGITEM", "HotelComponent_BILLINGITEM_R20_Link" );
    return;
  }
  /* Note:  BILLINGITEM->BILLING[R20] not navigated */
  /* Note:  BILLING->BILLINGITEM[R20] not navigated */
}

/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s HotelComponent_BILLINGITEM_container[ HotelComponent_BILLINGITEM_MAX_EXTENT_SIZE ];
static HotelComponent_BILLINGITEM HotelComponent_BILLINGITEM_instances[ HotelComponent_BILLINGITEM_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_HotelComponent_BILLINGITEM_extent = {
  {0}, {0}, &HotelComponent_BILLINGITEM_container[ 0 ],
  (Escher_iHandle_t) &HotelComponent_BILLINGITEM_instances,
  sizeof( HotelComponent_BILLINGITEM ), 0, HotelComponent_BILLINGITEM_MAX_EXTENT_SIZE
  };


