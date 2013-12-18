/*----------------------------------------------------------------------------
 * File:  HotelComponent_classes.h
 *
 * This file defines the object type identification numbers for all classes
 * in the component:  HotelComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef HOTELCOMPONENT_CLASSES_H
#define HOTELCOMPONENT_CLASSES_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Initialization services for component:  HotelComponent
 */
extern Escher_Extent_t * const HotelComponent_class_info[];
extern const EventTaker_t HotelComponent_EventDispatcher[];
void HotelComponent_execute_initialization( void );

#define HotelComponent_STATE_MODELS 2
/* Define constants to map to class numbers.  */
#define HotelComponent_BOOKINGSESSION_CLASS_NUMBER 0
#define HotelComponent_BOOKINGSESSION_CLASS_NUMBER_CB 1
#define HotelComponent_BOOKING_CLASS_NUMBER 2
#define HotelComponent_GUEST_CLASS_NUMBER 3
#define HotelComponent_BILLING_CLASS_NUMBER 4
#define HotelComponent_BILLINGITEM_CLASS_NUMBER 5
#define HotelComponent_PAYMENTMETHOD_CLASS_NUMBER 6
#define HotelComponent_CASH_CLASS_NUMBER 7
#define HotelComponent_INVOICE_CLASS_NUMBER 8
#define HotelComponent_CREDITCARD_CLASS_NUMBER 9
#define HotelComponent_BENEFIT_CLASS_NUMBER 10
#define HotelComponent_SERVICE_CLASS_NUMBER 11
#define HotelComponent_CUSTOMER_CLASS_NUMBER 12
#define HotelComponent_CLUB_CLASS_NUMBER 13
#define HotelComponent_FACILITYTYPE_CLASS_NUMBER 14
#define HotelComponent_FACILITY_CLASS_NUMBER 15
#define HotelComponent_FACILITYGROUP_CLASS_NUMBER 16
#define HotelComponent_BOOKABLE_CLASS_NUMBER 17
#define HotelComponent_PACKAGE_CLASS_NUMBER 18
#define HotelComponent_HOTEL_CLASS_NUMBER 19
#define HotelComponent_STAFF_CLASS_NUMBER 20
#define HotelComponent_PRIVILEGE_CLASS_NUMBER 21
#define HotelComponent_MAX_CLASS_NUMBERS 22

/* Provide a map of classes to task numbers.  */
#define HotelComponent_TASK_NUMBERS  0, 0

#define HotelComponent_class_dispatchers\
  HotelComponent_BOOKINGSESSION_Dispatch,\
  HotelComponent_BOOKINGSESSION_CBDispatch

/* Provide definitions of the shapes of the class structures.  */

typedef struct HotelComponent_BOOKINGSESSION HotelComponent_BOOKINGSESSION;
typedef struct HotelComponent_BOOKINGSESSION_CB HotelComponent_BOOKINGSESSION_CB;
typedef struct HotelComponent_BOOKING HotelComponent_BOOKING;
typedef struct HotelComponent_GUEST HotelComponent_GUEST;
typedef struct HotelComponent_BILLING HotelComponent_BILLING;
typedef struct HotelComponent_BILLINGITEM HotelComponent_BILLINGITEM;
typedef struct HotelComponent_PAYMENTMETHOD HotelComponent_PAYMENTMETHOD;
typedef struct HotelComponent_CASH HotelComponent_CASH;
typedef struct HotelComponent_INVOICE HotelComponent_INVOICE;
typedef struct HotelComponent_CREDITCARD HotelComponent_CREDITCARD;
typedef struct HotelComponent_BENEFIT HotelComponent_BENEFIT;
typedef struct HotelComponent_SERVICE HotelComponent_SERVICE;
typedef struct HotelComponent_CUSTOMER HotelComponent_CUSTOMER;
typedef struct HotelComponent_CLUB HotelComponent_CLUB;
typedef struct HotelComponent_FACILITYTYPE HotelComponent_FACILITYTYPE;
typedef struct HotelComponent_FACILITY HotelComponent_FACILITY;
typedef struct HotelComponent_FACILITYGROUP HotelComponent_FACILITYGROUP;
typedef struct HotelComponent_BOOKABLE HotelComponent_BOOKABLE;
typedef struct HotelComponent_PACKAGE HotelComponent_PACKAGE;
typedef struct HotelComponent_HOTEL HotelComponent_HOTEL;
typedef struct HotelComponent_STAFF HotelComponent_STAFF;
typedef struct HotelComponent_PRIVILEGE HotelComponent_PRIVILEGE;

/* union of class declarations so we may derive largest class size */
#define HotelComponent_CLASS_U \
  char HotelComponent_dummy;\

/*
 * UML Domain Functions (Synchronous Services)
 */
void HotelComponent_PopulateFacilityTypes( void );
void HotelComponent_TestDateCompare( void );
void HotelComponent_TestIsAcceptableBooking( void );
i_t HotelComponent_compDate( Escher_Date_t, Escher_Date_t );
i_t HotelComponent_dateToInt( Escher_Date_t );


#include "TIM_bridge.h"
#include "LOG_bridge.h"
#include "HotelComponent.h"
#include "HotelComponent_BOOKING_class.h"
#include "HotelComponent_GUEST_class.h"
#include "HotelComponent_BOOKINGSESSION_class.h"
#include "HotelComponent_BILLING_class.h"
#include "HotelComponent_BILLINGITEM_class.h"
#include "HotelComponent_PAYMENTMETHOD_class.h"
#include "HotelComponent_CASH_class.h"
#include "HotelComponent_INVOICE_class.h"
#include "HotelComponent_CREDITCARD_class.h"
#include "HotelComponent_BENEFIT_class.h"
#include "HotelComponent_SERVICE_class.h"
#include "HotelComponent_CUSTOMER_class.h"
#include "HotelComponent_CLUB_class.h"
#include "HotelComponent_FACILITYTYPE_class.h"
#include "HotelComponent_FACILITY_class.h"
#include "HotelComponent_FACILITYGROUP_class.h"
#include "HotelComponent_BOOKABLE_class.h"
#include "HotelComponent_PACKAGE_class.h"
#include "HotelComponent_HOTEL_class.h"
#include "HotelComponent_STAFF_class.h"
#include "HotelComponent_PRIVILEGE_class.h"
/*
 * roll-up of all events (with their parameters) for component HotelComponent
 */
typedef union {
  HotelComponent_BOOKINGSESSION_Events_u HotelComponent_BOOKINGSESSION_Events_u_namespace;
  HotelComponent_BOOKINGSESSION_CB_Events_u HotelComponent_BOOKINGSESSION_CB_Events_u_namespace;
} HotelComponent_DomainEvents_u;

#ifdef	__cplusplus
}
#endif
#endif  /* HOTELCOMPONENT_CLASSES_H */

