/*----------------------------------------------------------------------------
 * File:  HotelComponent_GUEST_class.c
 *
 * Class:       Guest  (GUEST)
 * Component:   HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "Hotel_sys_types.h"
#include "LOG_bridge.h"
#include "TIM_bridge.h"
#include "HotelComponent_classes.h"

/*
 * instance operation:  setFacility
 */
bool
HotelComponent_GUEST_op_setFacility( HotelComponent_GUEST * self, HotelComponent_FACILITY * p_facility )
{

}

/*
 * instance operation:  destroyGuest
 */
void
HotelComponent_GUEST_op_destroyGuest( HotelComponent_GUEST * self)
{
  HotelComponent_FACILITY * f=0;Escher_ObjectSet_s facilities_space={0}; Escher_ObjectSet_s * facilities = &facilities_space;
  /* SELECT many facilities RELATED BY self->FACILITY[R16] */
  XTUML_OAL_STMT_TRACE( 1, "SELECT many facilities RELATED BY self->FACILITY[R16]" );
  Escher_ClearSet( facilities );
  if ( 0 != self ) {
    Escher_CopySet( facilities, &self->FACILITY_R16 );
  }
  /* FOR EACH f IN facilities */
  XTUML_OAL_STMT_TRACE( 1, "FOR EACH f IN facilities" );
  { Escher_Iterator_s iterf;
  HotelComponent_FACILITY * iif;
  Escher_IteratorReset( &iterf, facilities );
  while ( (iif = (HotelComponent_FACILITY *)Escher_IteratorNext( &iterf )) != 0 ) {
    f = iif; {
    /* UNRELATE f FROM self ACROSS R16 */
    XTUML_OAL_STMT_TRACE( 2, "UNRELATE f FROM self ACROSS R16" );
    HotelComponent_GUEST_R16_Unlink_stays_in( f, self );
  }}}
  /* DELETE OBJECT INSTANCE self */
  XTUML_OAL_STMT_TRACE( 1, "DELETE OBJECT INSTANCE self" );
  if ( 0 == self ) {
    XTUML_EMPTY_HANDLE_TRACE( "GUEST", "Escher_DeleteInstance" );
  }
  Escher_DeleteInstance( (Escher_iHandle_t) self, HotelComponent_DOMAIN_ID, HotelComponent_GUEST_CLASS_NUMBER );
  Escher_ClearSet( facilities ); 

}


/*
 * RELATE BOOKING TO GUEST ACROSS R15
 */
void
HotelComponent_GUEST_R15_Link_use( HotelComponent_BOOKING * part, HotelComponent_GUEST * form )
{
  if ( (part == 0) || (form == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "GUEST", "HotelComponent_GUEST_R15_Link_use" );
    return;
  }
  /* Note:  GUEST->BOOKING[R15] not navigated */
  Escher_SetInsertElement( &part->GUEST_R15_use, (Escher_ObjectSet_s *) form );
}

/*
 * UNRELATE BOOKING FROM GUEST ACROSS R15
 */
void
HotelComponent_GUEST_R15_Unlink_use( HotelComponent_BOOKING * part, HotelComponent_GUEST * form )
{
  if ( (part == 0) || (form == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "GUEST", "HotelComponent_GUEST_R15_Unlink_use" );
    return;
  }
  /* Note:  GUEST->BOOKING[R15] not navigated */
  Escher_SetRemoveElement( &part->GUEST_R15_use, (Escher_ObjectSet_s *) form );
}

/*
 * RELATE FACILITY TO GUEST ACROSS R16
 */
void
HotelComponent_GUEST_R16_Link_stays_in( HotelComponent_FACILITY * part, HotelComponent_GUEST * form )
{
  if ( (part == 0) || (form == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "GUEST", "HotelComponent_GUEST_R16_Link_stays_in" );
    return;
  }
  Escher_SetInsertElement( &form->FACILITY_R16, (Escher_ObjectSet_s *) part );
  /* Note:  FACILITY->GUEST[R16] not navigated */
}

/*
 * UNRELATE FACILITY FROM GUEST ACROSS R16
 */
void
HotelComponent_GUEST_R16_Unlink_stays_in( HotelComponent_FACILITY * part, HotelComponent_GUEST * form )
{
  if ( (part == 0) || (form == 0) ) {
    XTUML_EMPTY_HANDLE_TRACE( "GUEST", "HotelComponent_GUEST_R16_Unlink_stays_in" );
    return;
  }
  Escher_SetRemoveElement( &form->FACILITY_R16, (Escher_ObjectSet_s *) part );
  /* Note:  FACILITY->GUEST[R16] not navigated */
}


/*----------------------------------------------------------------------------
 * Operation action methods implementation for the following class:
 *
 * Class:      Guest  (GUEST)
 * Component:  HotelComponent
 *--------------------------------------------------------------------------*/
/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s HotelComponent_GUEST_container[ HotelComponent_GUEST_MAX_EXTENT_SIZE ];
static HotelComponent_GUEST HotelComponent_GUEST_instances[ HotelComponent_GUEST_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_HotelComponent_GUEST_extent = {
  {0}, {0}, &HotelComponent_GUEST_container[ 0 ],
  (Escher_iHandle_t) &HotelComponent_GUEST_instances,
  sizeof( HotelComponent_GUEST ), 0, HotelComponent_GUEST_MAX_EXTENT_SIZE
  };


