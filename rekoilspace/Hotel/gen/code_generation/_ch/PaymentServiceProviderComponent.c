/*----------------------------------------------------------------------------
 * File:  PaymentServiceProviderComponent.c
 *
 * UML Component Port Messages
 * Component/Module Name:  PaymentServiceProviderComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "Hotel_sys_types.h"
#include "PaymentServiceProviderComponent.h"
#include "TIM_bridge.h"
#include "LOG_bridge.h"
#include "HotelComponent.h"
#include "PaymentServiceProviderComponent_classes.h"

/*
 * Interface:  PaymentProviderInterface
 * Provided Port:  Port1
 * To Provider Message:  o1
 */
void
PaymentServiceProviderComponent_Port1_o1()
{
}

/*
 * Interface:  PaymentProviderInterface
 * Provided Port:  Port1
 * To Provider Message:  o1
 */
void
PaymentServiceProviderComponent_Port1_o1()
{
}

/*
 * Interface:  PaymentProviderInterface
 * Provided Port:  Port1
 * To Provider Message:  o2
 */
void
PaymentServiceProviderComponent_Port1_o2()
{
}

/*
 * Interface:  PaymentProviderInterface
 * Provided Port:  Port1
 * To Provider Message:  o2
 */
void
PaymentServiceProviderComponent_Port1_o2()
{
}

/*
 * Interface:  PaymentProviderInterface
 * Provided Port:  Port1
 * To Provider Message:  o3
 */
void
PaymentServiceProviderComponent_Port1_o3()
{
}

/*
 * Interface:  PaymentProviderInterface
 * Provided Port:  Port1
 * To Provider Message:  o3
 */
void
PaymentServiceProviderComponent_Port1_o3()
{
}

/*
 * Interface:  PaymentProviderInterface
 * Provided Port:  Port1
 * To Provider Message:  o4
 */
void
PaymentServiceProviderComponent_Port1_o4()
{
}

/*
 * Interface:  PaymentProviderInterface
 * Provided Port:  Port1
 * To Provider Message:  o4
 */
void
PaymentServiceProviderComponent_Port1_o4()
{
}

/*
 * Interface:  PaymentProviderInterface
 * Provided Port:  Port1
 * To Provider Message:  paymentInfo
 */
void
PaymentServiceProviderComponent_Port1_paymentInfo( c_t p_paymentMethod[ESCHER_SYS_MAX_STRING_LEN], Escher_UniqueID_t p_sessionID )
{
  { PaymentServiceProviderComponent_BANK_CBevent1 * e = (PaymentServiceProviderComponent_BANK_CBevent1 *) Escher_NewxtUMLEvent( (void *) 0, &PaymentServiceProviderComponent_BANK_CBevent1c );
    Escher_strcpy( e->p_paymentMethod, p_paymentMethod );    e->p_sessionID = p_sessionID;
    Escher_SendEvent( (Escher_xtUMLEvent_t *) e );
  }

}

/*
 * Interface:  PaymentProviderInterface
 * Provided Port:  Port1
 * From Provider Message:  paymentValid
 */
void
PaymentServiceProviderComponent_Port1_paymentValid( Escher_UniqueID_t p_sessionID, const bool p_valid )
{
  HotelComponent_PaymentProviderPort_paymentValid(  p_sessionID, p_valid );
}

/*
 * Interface:  PaymentProviderInterface
 * Provided Port:  Port1
 * To Provider Message:  s1
 */
void
PaymentServiceProviderComponent_Port1_s1()
{
}

/*
 * Interface:  PaymentProviderInterface
 * Provided Port:  Port1
 * To Provider Message:  s1
 */
void
PaymentServiceProviderComponent_Port1_s1()
{
}

/*
 * Interface:  PaymentProviderInterface
 * Provided Port:  Port1
 * To Provider Message:  s1
 */
void
PaymentServiceProviderComponent_Port1_s1()
{
}

/*
 * Interface:  PaymentProviderInterface
 * Provided Port:  Port1
 * To Provider Message:  s1
 */
void
PaymentServiceProviderComponent_Port1_s1()
{
}

/*
 * Interface:  PaymentProviderInterface
 * Provided Port:  Port1
 * To Provider Message:  s1
 */
void
PaymentServiceProviderComponent_Port1_s1()
{
}

/*
 * Interface:  PaymentProviderInterface
 * Provided Port:  Port1
 * To Provider Message:  s1
 */
void
PaymentServiceProviderComponent_Port1_s1()
{
}

/*
 * Interface:  PaymentProviderInterface
 * Provided Port:  Port1
 * To Provider Message:  s1
 */
void
PaymentServiceProviderComponent_Port1_s1()
{
}

/*
 * UML Domain Functions (Synchronous Services)
 */

/* xtUML class info (collections, sizes, etc.) */
Escher_Extent_t * const PaymentServiceProviderComponent_class_info[ PaymentServiceProviderComponent_MAX_CLASS_NUMBERS ] = {
  &pG_PaymentServiceProviderComponent_BANK_extent,
  0
};

/*
 * Array of pointers to the class event dispatcher method.
 * Index is the (model compiler enumerated) number of the state model.
 */
const EventTaker_t PaymentServiceProviderComponent_EventDispatcher[ PaymentServiceProviderComponent_STATE_MODELS ] = {
  PaymentServiceProviderComponent_class_dispatchers
};

void PaymentServiceProviderComponent_execute_initialization()
{
}
