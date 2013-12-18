/*----------------------------------------------------------------------------
 * File:  PaymentServiceProviderComponent_classes.h
 *
 * This file defines the object type identification numbers for all classes
 * in the component:  PaymentServiceProviderComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef PAYMENTSERVICEPROVIDERCOMPONENT_CLASSES_H
#define PAYMENTSERVICEPROVIDERCOMPONENT_CLASSES_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Initialization services for component:  PaymentServiceProviderComponent
 */
extern Escher_Extent_t * const PaymentServiceProviderComponent_class_info[];
extern const EventTaker_t PaymentServiceProviderComponent_EventDispatcher[];
void PaymentServiceProviderComponent_execute_initialization( void );

#define PaymentServiceProviderComponent_STATE_MODELS 2
/* Define constants to map to class numbers.  */
#define PaymentServiceProviderComponent_BANK_CLASS_NUMBER 0
#define PaymentServiceProviderComponent_BANK_CLASS_NUMBER_CB 1
#define PaymentServiceProviderComponent_MAX_CLASS_NUMBERS 2

/* Provide a map of classes to task numbers.  */
#define PaymentServiceProviderComponent_TASK_NUMBERS  0, 0

#define PaymentServiceProviderComponent_class_dispatchers\
  0,\
  PaymentServiceProviderComponent_BANK_CBDispatch

/* Provide definitions of the shapes of the class structures.  */

typedef struct PaymentServiceProviderComponent_BANK PaymentServiceProviderComponent_BANK;
typedef struct PaymentServiceProviderComponent_BANK_CB PaymentServiceProviderComponent_BANK_CB;

/* union of class declarations so we may derive largest class size */
#define PaymentServiceProviderComponent_CLASS_U \
  char PaymentServiceProviderComponent_dummy;\


#include "TIM_bridge.h"
#include "LOG_bridge.h"
#include "PaymentServiceProviderComponent.h"
#include "PaymentServiceProviderComponent_BANK_class.h"
/*
 * roll-up of all events (with their parameters) for component PaymentServiceProviderComponent
 */
typedef union {
  PaymentServiceProviderComponent_BANK_CB_Events_u PaymentServiceProviderComponent_BANK_CB_Events_u_namespace;
} PaymentServiceProviderComponent_DomainEvents_u;

#ifdef	__cplusplus
}
#endif
#endif  /* PAYMENTSERVICEPROVIDERCOMPONENT_CLASSES_H */

