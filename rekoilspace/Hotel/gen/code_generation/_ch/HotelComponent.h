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
void HotelComponent_UserInterface_addGuest( const i_t, c_t[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t );
void HotelComponent_UserInterface_addServices( Escher_UniqueID_t, Escher_UniqueID_t );
void HotelComponent_UserInterface_available( c_t[ESCHER_SYS_MAX_STRING_LEN], c_t[ESCHER_SYS_MAX_STRING_LEN], const i_t, const bool, const r_t, Escher_UniqueID_t );
void HotelComponent_UserInterface_confirmSignal( c_t[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t );
void HotelComponent_UserInterface_customerDetails( c_t[ESCHER_SYS_MAX_STRING_LEN], c_t[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t );
void HotelComponent_UserInterface_errorSignal( c_t[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t );
void HotelComponent_UserInterface_extraServices( c_t[ESCHER_SYS_MAX_STRING_LEN], c_t[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t, const bool, const r_t );
void HotelComponent_UserInterface_paymentInfo( c_t[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t );
void HotelComponent_UserInterface_requestAvailableBookables( Escher_Date_t, Escher_UniqueID_t, Escher_Date_t );
void HotelComponent_UserInterface_requestSession( void );
void HotelComponent_UserInterface_selectBookable( const i_t, Escher_UniqueID_t );
void HotelComponent_UserInterface_session( Escher_UniqueID_t, Escher_UniqueID_t );
void HotelComponent_StaffPort_addFacility( c_t[ESCHER_SYS_MAX_STRING_LEN], const i_t );
void HotelComponent_StaffPort_addFacilityType( c_t[ESCHER_SYS_MAX_STRING_LEN], c_t[ESCHER_SYS_MAX_STRING_LEN], const i_t, c_t[ESCHER_SYS_MAX_STRING_LEN], const r_t );
void HotelComponent_StaffPort_sendFacilityType( const i_t, c_t[ESCHER_SYS_MAX_STRING_LEN] );
void HotelComponent_CustomerPort_checkInGuest( const i_t, Escher_UniqueID_t, c_t[ESCHER_SYS_MAX_STRING_LEN] );
void HotelComponent_CustomerPort_checkInReturn( Escher_UniqueID_t, c_t[ESCHER_SYS_MAX_STRING_LEN], const bool );
void HotelComponent_CustomerPort_checkOutGuest( const i_t, Escher_UniqueID_t, c_t[ESCHER_SYS_MAX_STRING_LEN] );
void HotelComponent_CustomerPort_checkOutReturn( Escher_UniqueID_t, c_t[ESCHER_SYS_MAX_STRING_LEN], const bool );
void HotelComponent_CustomerPort_confirmSignal( c_t[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t );
void HotelComponent_CustomerPort_endOfList( Escher_UniqueID_t );
void HotelComponent_CustomerPort_o1( void );
void HotelComponent_CustomerPort_o1( void );
void HotelComponent_CustomerPort_o1( void );
void HotelComponent_CustomerPort_o1( void );
void HotelComponent_CustomerPort_o1( void );
void HotelComponent_CustomerPort_o2( void );
void HotelComponent_CustomerPort_o2( void );
void HotelComponent_CustomerPort_o2( void );
void HotelComponent_CustomerPort_o2( void );
void HotelComponent_CustomerPort_o2( void );
void HotelComponent_CustomerPort_s1( void );
void HotelComponent_CustomerPort_s1( void );
void HotelComponent_CustomerPort_s1( void );
void HotelComponent_CustomerPort_s1( void );
void HotelComponent_CustomerPort_s1( void );
void HotelComponent_CustomerPort_s2( void );
void HotelComponent_CustomerPort_s2( void );
void HotelComponent_CustomerPort_s2( void );
void HotelComponent_CustomerPort_s2( void );
void HotelComponent_CustomerPort_s2( void );
void HotelComponent_PaymentProviderPort_o1( void );
void HotelComponent_PaymentProviderPort_o1( void );
void HotelComponent_PaymentProviderPort_o2( void );
void HotelComponent_PaymentProviderPort_o2( void );
void HotelComponent_PaymentProviderPort_o3( void );
void HotelComponent_PaymentProviderPort_o3( void );
void HotelComponent_PaymentProviderPort_o4( void );
void HotelComponent_PaymentProviderPort_o4( void );
void HotelComponent_PaymentProviderPort_paymentInfo( c_t[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t );
void HotelComponent_PaymentProviderPort_paymentValid( Escher_UniqueID_t, const bool );
void HotelComponent_PaymentProviderPort_s1( void );
void HotelComponent_PaymentProviderPort_s1( void );
void HotelComponent_PaymentProviderPort_s1( void );
void HotelComponent_PaymentProviderPort_s1( void );
void HotelComponent_PaymentProviderPort_s1( void );
void HotelComponent_PaymentProviderPort_s1( void );
void HotelComponent_PaymentProviderPort_s1( void );


#ifdef	__cplusplus
}
#endif
#endif  /* HOTELCOMPONENT_H */
