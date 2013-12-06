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

/* Note:  Link CUSTOMER to BOOKING across R22 using BILLING not needed.  */

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


