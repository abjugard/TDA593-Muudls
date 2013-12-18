/*----------------------------------------------------------------------------
 * File:  UserComponent_BPUNIT_class.h
 *
 * Class:       BPUnit  (BPUNIT)
 * Component:   UserComponent
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#ifndef USERCOMPONENT_BPUNIT_CLASS_H
#define USERCOMPONENT_BPUNIT_CLASS_H

#ifdef	__cplusplus
extern	"C"	{
#endif

/*
 * Structural representation of application analysis class:
 *   BPUnit  (BPUNIT)
 */
struct UserComponent_BPUNIT {

  /* application analysis class attributes */

};



#define UserComponent_BPUNIT_MAX_EXTENT_SIZE 10
extern Escher_Extent_t pG_UserComponent_BPUNIT_extent;


/*
 * enumeration of state model states for class
 */
#define UserComponent_BPUNIT_CB_STATE_1 1  /* state [1]:  (Standby) */

/* note:  no events defined in state model */

extern void UserComponent_BPUNIT_CBDispatch( Escher_xtUMLEvent_t * );


#ifdef	__cplusplus
}
#endif

#endif  /* USERCOMPONENT_BPUNIT_CLASS_H */


