/*----------------------------------------------------------------------------
 * File:  HotelComponent_BILLING_class.c
 *
 * Class:       Billing  (BILLING)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "Hotel_sys_types.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "HotelComponent_classes.h"

/*
 * instance operation:  isPayed
 */
bool
HotelComponent_BILLING_op_isPayed( HotelComponent_BILLING * self)
{

}

/*
 * instance operation:  getCost
 */
i_t
HotelComponent_BILLING_op_getCost( HotelComponent_BILLING * self)
{

}


/*
 * RELATE CUSTOMER TO BOOKING ACROSS R22 USING BILLING
 */
void
HotelComponent_BILLING_R22_Link( HotelComponent_CUSTOMER * aone, HotelComponent_BOOKING * aoth, HotelComponent_BILLING * assr )
{
  if ( (aone == 0) || (aoth == 0) || (assr == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "BILLING", "HotelComponent_BILLING_R22_Link" );
    return;
  }
  /* Initialize optimized relationship storage extended attributes */
  assr->CUSTOMER_R22_makes_a = aone;
  assr->BOOKING_R22 = aoth;
  aone->BILLING_R22 = assr;
  aoth->BILLING_R22 = assr;
}

/* Note:  Unlink CUSTOMER from BOOKING across R22 using BILLING not needed.  */


/*----------------------------------------------------------------------------
 * Operation action methods implementation for the following class:
 *
 * Class:      Billing  (BILLING)
 * Component:  HotelComponent
 *--------------------------------------------------------------------------*/
/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s HotelComponent_BILLING_container[ HotelComponent_BILLING_MAX_EXTENT_SIZE ];
static HotelComponent_BILLING HotelComponent_BILLING_instances[ HotelComponent_BILLING_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_HotelComponent_BILLING_extent = {
  {0}, {0}, &HotelComponent_BILLING_container[ 0 ],
  (Escher_iHandle_t) &HotelComponent_BILLING_instances,
  sizeof( HotelComponent_BILLING ), 0, HotelComponent_BILLING_MAX_EXTENT_SIZE
  };


