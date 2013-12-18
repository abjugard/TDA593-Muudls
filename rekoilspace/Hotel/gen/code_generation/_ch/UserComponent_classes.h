/*----------------------------------------------------------------------------
 * File:  UserComponent_classes.h
 *
 * This file defines the object type identification numbers for all classes
 * in the component:  UserComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef USERCOMPONENT_CLASSES_H
#define USERCOMPONENT_CLASSES_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Initialization services for component:  UserComponent
 */
extern Escher_Extent_t * const UserComponent_class_info[];
extern const EventTaker_t UserComponent_EventDispatcher[];
void UserComponent_execute_initialization( void );

#define UserComponent_STATE_MODELS 7
/* Define constants to map to class numbers.  */
#define UserComponent_SIMPLETEST_CLASS_NUMBER 0
#define UserComponent_SETUP_CLASS_NUMBER 1
#define UserComponent_CHECKINTEST_CLASS_NUMBER 2
#define UserComponent_CHECKOUTTEST_CLASS_NUMBER 3
#define UserComponent_BPUNIT_CLASS_NUMBER 4
#define UserComponent_SIMPLETEST_CLASS_NUMBER_CB 5
#define UserComponent_BPUNIT_CLASS_NUMBER_CB 6
#define UserComponent_MAX_CLASS_NUMBERS 7

/* Provide a map of classes to task numbers.  */
#define UserComponent_TASK_NUMBERS  0, 0, 0, 0, 0, 0, 0

#define UserComponent_class_dispatchers\
  UserComponent_SIMPLETEST_Dispatch,\
  UserComponent_SETUP_Dispatch,\
  UserComponent_CHECKINTEST_Dispatch,\
  UserComponent_CHECKOUTTEST_Dispatch,\
  0,\
  UserComponent_SIMPLETEST_CBDispatch,\
  UserComponent_BPUNIT_CBDispatch

/* Provide definitions of the shapes of the class structures.  */

typedef struct UserComponent_SIMPLETEST UserComponent_SIMPLETEST;
typedef struct UserComponent_SETUP UserComponent_SETUP;
typedef struct UserComponent_CHECKINTEST UserComponent_CHECKINTEST;
typedef struct UserComponent_CHECKOUTTEST UserComponent_CHECKOUTTEST;
typedef struct UserComponent_BPUNIT UserComponent_BPUNIT;
typedef struct UserComponent_SIMPLETEST_CB UserComponent_SIMPLETEST_CB;
typedef struct UserComponent_BPUNIT_CB UserComponent_BPUNIT_CB;

/* union of class declarations so we may derive largest class size */
#define UserComponent_CLASS_U \
  char UserComponent_dummy;\

/*
 * UML Domain Functions (Synchronous Services)
 */
void UserComponent_checkInGuestTest( void );
void UserComponent_checkOutGuestTest( void );
void UserComponent_init( void );
void UserComponent_initBookingConcurrencyTest( void );
void UserComponent_startSimpleTest( const i_t, Escher_Date_t, Escher_Date_t );
void UserComponent_startSingleSimpleTest( void );


#include "TIM_bridge.h"
#include "LOG_bridge.h"
#include "UserComponent.h"
#include "UserComponent_SIMPLETEST_class.h"
#include "UserComponent_SETUP_class.h"
#include "UserComponent_CHECKINTEST_class.h"
#include "UserComponent_CHECKOUTTEST_class.h"
#include "UserComponent_BPUNIT_class.h"
/*
 * roll-up of all events (with their parameters) for component UserComponent
 */
typedef union {
  UserComponent_SIMPLETEST_Events_u UserComponent_SIMPLETEST_Events_u_namespace;
  UserComponent_SETUP_Events_u UserComponent_SETUP_Events_u_namespace;
  UserComponent_CHECKINTEST_Events_u UserComponent_CHECKINTEST_Events_u_namespace;
  UserComponent_CHECKOUTTEST_Events_u UserComponent_CHECKOUTTEST_Events_u_namespace;
} UserComponent_DomainEvents_u;

#ifdef	__cplusplus
}
#endif
#endif  /* USERCOMPONENT_CLASSES_H */

