/*----------------------------------------------------------------------------
 * File:  UserComponent.h
 *
 * UML Component (Module) Declaration (Operations and Signals)
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef USERCOMPONENT_H
#define USERCOMPONENT_H
#ifdef	__cplusplus
extern	"C"	{
#endif

#include "Hotel_sys_types.h"
void UserComponent_UserInterface_addGuest( const i_t, c_t[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t );
void UserComponent_UserInterface_addServices( Escher_UniqueID_t, Escher_UniqueID_t );
void UserComponent_UserInterface_available( c_t[ESCHER_SYS_MAX_STRING_LEN], c_t[ESCHER_SYS_MAX_STRING_LEN], const i_t, const bool, const r_t, Escher_UniqueID_t );
void UserComponent_UserInterface_confirmSignal( c_t[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t );
void UserComponent_UserInterface_customerDetails( c_t[ESCHER_SYS_MAX_STRING_LEN], c_t[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t );
void UserComponent_UserInterface_errorSignal( c_t[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t );
void UserComponent_UserInterface_extraServices( c_t[ESCHER_SYS_MAX_STRING_LEN], c_t[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t, const bool, const r_t );
void UserComponent_UserInterface_paymentInfo( c_t[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t );
void UserComponent_UserInterface_requestAvailableBookables( Escher_Date_t, Escher_UniqueID_t, Escher_Date_t );
void UserComponent_UserInterface_requestSession( void );
void UserComponent_UserInterface_selectBookable( const i_t, Escher_UniqueID_t );
void UserComponent_UserInterface_session( Escher_UniqueID_t, Escher_UniqueID_t );
void UserComponent_Port1_addFacility( c_t[ESCHER_SYS_MAX_STRING_LEN], const i_t );
void UserComponent_Port1_addFacilityType( c_t[ESCHER_SYS_MAX_STRING_LEN], c_t[ESCHER_SYS_MAX_STRING_LEN], const i_t, c_t[ESCHER_SYS_MAX_STRING_LEN], const r_t );
void UserComponent_Port1_sendFacilityType( const i_t, c_t[ESCHER_SYS_MAX_STRING_LEN] );
void UserComponent_Port2_checkInGuest( const i_t, Escher_UniqueID_t, c_t[ESCHER_SYS_MAX_STRING_LEN] );
void UserComponent_Port2_checkInReturn( Escher_UniqueID_t, c_t[ESCHER_SYS_MAX_STRING_LEN], const bool );
void UserComponent_Port2_checkOutGuest( const i_t, Escher_UniqueID_t, c_t[ESCHER_SYS_MAX_STRING_LEN] );
void UserComponent_Port2_checkOutReturn( Escher_UniqueID_t, c_t[ESCHER_SYS_MAX_STRING_LEN], const bool );
void UserComponent_Port2_confirmSignal( c_t[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t );
void UserComponent_Port2_endOfList( Escher_UniqueID_t );
void UserComponent_Port2_o1( void );
void UserComponent_Port2_o1( void );
void UserComponent_Port2_o1( void );
void UserComponent_Port2_o1( void );
void UserComponent_Port2_o1( void );
void UserComponent_Port2_o2( void );
void UserComponent_Port2_o2( void );
void UserComponent_Port2_o2( void );
void UserComponent_Port2_o2( void );
void UserComponent_Port2_o2( void );
void UserComponent_Port2_s1( void );
void UserComponent_Port2_s1( void );
void UserComponent_Port2_s1( void );
void UserComponent_Port2_s1( void );
void UserComponent_Port2_s1( void );
void UserComponent_Port2_s2( void );
void UserComponent_Port2_s2( void );
void UserComponent_Port2_s2( void );
void UserComponent_Port2_s2( void );
void UserComponent_Port2_s2( void );


#ifdef	__cplusplus
}
#endif
#endif  /* USERCOMPONENT_H */
