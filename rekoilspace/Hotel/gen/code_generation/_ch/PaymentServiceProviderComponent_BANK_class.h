/*----------------------------------------------------------------------------
 * File:  PaymentServiceProviderComponent_BANK_class.h
 *
 * Class:       Bank  (BANK)
 * Component:   PaymentServiceProviderComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef PAYMENTSERVICEPROVIDERCOMPONENT_BANK_CLASS_H
#define PAYMENTSERVICEPROVIDERCOMPONENT_BANK_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   Bank  (BANK)
 */
struct PaymentServiceProviderComponent_BANK {

  /* application analysis class attributes */

};



#define PaymentServiceProviderComponent_BANK_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_PaymentServiceProviderComponent_BANK_extent;

/*
 * class-based event:  Port1::paymentInfo:'paymentInfo'
 */
typedef struct {
  EVENT_BASE_ATTRIBUTE_LIST         /* base attributes of all event classes */
  c_t p_paymentMethod[ESCHER_SYS_MAX_STRING_LEN]; /* paymentMethod */
  Escher_UniqueID_t p_sessionID; /* sessionID */
} PaymentServiceProviderComponent_BANK_CBevent1;
extern const Escher_xtUMLEventConstant_t PaymentServiceProviderComponent_BANK_CBevent1c;

/*
 * union of events targeted towards 'BANK' state machine
 */
typedef union {
  PaymentServiceProviderComponent_BANK_CBevent1 bank11;  
} PaymentServiceProviderComponent_BANK_CB_Events_u;

/*
 * enumeration of state model states for class
 */
#define PaymentServiceProviderComponent_BANK_CB_STATE_1 1  /* state [1]:  (ready) */

/*
 * enumeration of state model event numbers
 */
#define PAYMENTSERVICEPROVIDERCOMPONENT_BANK_CBEVENT1NUM 0  /* Port1::paymentInfo:'paymentInfo' */

extern void PaymentServiceProviderComponent_BANK_CBDispatch( Escher_xtUMLEvent_t * );


#ifdef	__cplusplus
}
#endif

#endif  /* PAYMENTSERVICEPROVIDERCOMPONENT_BANK_CLASS_H */


