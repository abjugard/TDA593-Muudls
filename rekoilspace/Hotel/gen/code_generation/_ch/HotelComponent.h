/*----------------------------------------------------------------------------
 * File:  HotelComponent.h
 *
 * UML Component (Module) Declaration (Operations and Signals)
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef HOTELCOMPONENT_H
#define HOTELCOMPONENT_H
#ifdef	__cplusplus
extern	"C"	{
#endif

#include "Hotel_sys_types.h"
void HotelComponent_UserInterface_addGuest( Escher_UniqueID_t, const i_t, c_t[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t );
void HotelComponent_UserInterface_addServices( Escher_UniqueID_t, Escher_UniqueID_t );
void HotelComponent_UserInterface_available( c_t[ESCHER_SYS_MAX_STRING_LEN], c_t[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t, const bool, const r_t );
void HotelComponent_UserInterface_bookingConfirmation( c_t[ESCHER_SYS_MAX_STRING_LEN] );
void HotelComponent_UserInterface_customerDetails( c_t[ESCHER_SYS_MAX_STRING_LEN], c_t[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t );
void HotelComponent_UserInterface_errorSignal( c_t[ESCHER_SYS_MAX_STRING_LEN] );
void HotelComponent_UserInterface_extraServices( c_t[ESCHER_SYS_MAX_STRING_LEN], c_t[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t, const bool, const r_t );
void HotelComponent_UserInterface_paymentInfo( c_t[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t );
void HotelComponent_UserInterface_requestAvailableBookables( const i_t, Escher_Date_t, Escher_UniqueID_t, Escher_Date_t );
void HotelComponent_UserInterface_requestSession( void );
void HotelComponent_UserInterface_select( Escher_UniqueID_t, Escher_UniqueID_t );
void HotelComponent_UserInterface_session( Escher_UniqueID_t );
void HotelComponent_Port1_addFacility( c_t[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t );
void HotelComponent_Port1_addFacilityType( c_t[ESCHER_SYS_MAX_STRING_LEN], c_t[ESCHER_SYS_MAX_STRING_LEN], c_t[ESCHER_SYS_MAX_STRING_LEN], const r_t );
void HotelComponent_Port1_sendFacilityType( Escher_UniqueID_t, c_t[ESCHER_SYS_MAX_STRING_LEN] );


#ifdef	__cplusplus
}
#endif
#endif  /* HOTELCOMPONENT_H */
