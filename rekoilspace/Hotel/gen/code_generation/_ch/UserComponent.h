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
void UserComponent_UserInterface_addGuest( Escher_UniqueID_t, const i_t, c_t[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t );
void UserComponent_UserInterface_addServices( Escher_UniqueID_t, Escher_UniqueID_t );
void UserComponent_UserInterface_available( c_t[ESCHER_SYS_MAX_STRING_LEN], c_t[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t, const bool, const r_t );
void UserComponent_UserInterface_bookingConfirmation( c_t[ESCHER_SYS_MAX_STRING_LEN] );
void UserComponent_UserInterface_customerDetails( c_t[ESCHER_SYS_MAX_STRING_LEN], c_t[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t );
void UserComponent_UserInterface_errorSignal( c_t[ESCHER_SYS_MAX_STRING_LEN] );
void UserComponent_UserInterface_extraServices( c_t[ESCHER_SYS_MAX_STRING_LEN], c_t[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t, const bool, const r_t );
void UserComponent_UserInterface_paymentInfo( c_t[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t );
void UserComponent_UserInterface_requestAvailableBookables( const i_t, Escher_TimeStamp_t, Escher_UniqueID_t, Escher_TimeStamp_t );
void UserComponent_UserInterface_requestSession( void );
void UserComponent_UserInterface_select( Escher_UniqueID_t, Escher_UniqueID_t );
void UserComponent_UserInterface_session( Escher_UniqueID_t );


#ifdef	__cplusplus
}
#endif
#endif  /* USERCOMPONENT_H */
