#ifndef IMMO_H
#define IMMO_H
/* ============================================================================ *\
 * immo.h
 * ============================================================================
 * Copyright 1999,2003 Delphi Technologies, Inc., All Rights Reserved
 * Delphi Confidential
 * ----------------------------------------------------------------------------
 * File Name:       immo.h-2:incl:mt20a#1
 * Revision:        2
 * Creation date:   Tuesday, June 18, 2002 2:48:23 PM
 * Last changed:    %date_modified%
 * ----------------------------------------------------------------------------
 *
 * Description:
 *   This file contains the application layer of immobilizer.
 *
 * Tracability info
 *   SW REF 264.15X - Coding standards
 *
 * Deviations from standards
 *   None.
 *
\* ============================================================================ */

/* ============================================================================ *\
 * Standard header files.
\* ============================================================================ */
#include "reuse.h"
#include "v_immo.h"
#include "immo_cal.h"

/* ============================================================================ *\
 * Other header files.
\* ============================================================================ */
/*  none  */


/* ============================================================================ *\
 * Exported preprocessor #define commands.
\* ============================================================================ */
/*  none  */


/* ============================================================================ *\
 * Exported preprocessor #define macros.
\* ============================================================================ */
#define GenericImmoKey_Length        (0x02)
#define ImmoStopEngine()            (ImmoInhibitEngine)
/* ============================================================================ *\
 * Exported type declarations.
\* ============================================================================ */
/*  none  */



/* ============================================================================ *\
 * Local preprocessor #define commands.
\* ============================================================================ */
/*  none  */


/* ============================================================================ *\
 * Exported variables.
\* ============================================================================ */
extern bool                    ImmoInhibitEngine;
/*for Siemens Immo*/
extern bool                    ImmoSiemensEnabled;

/* ============================================================================ *\
 * Local INLINE functions and #define function-like macros.
\* ============================================================================ */
#define ClearImmoResponseFlag()       (ImmoNoResponseDetected = false)

/* added Siemens immo */
#define Chk_SiemensImmo_Enabled()     (ImmoSiemensEnabled == true)
#define Chk_SiemensImmo_Disabled()    (ImmoSiemensEnabled == false)
/* ============================================================================ *\
 * Exported Function prototypes
 * ============================================================================ */
//extern void FCALL ImmoDeactivateProcess(void);

extern void DtrmImmoStatus( void );


/* ============================================================================ *\
 * FUNCTION: ImmobilizerIgnitionOn
 * ============================================================================
 * RETURN VALUE:
 *   none
 *
 * PARAMETERS:
 *   none
 *
 * EXTERNAL REFERENCES:
 *   none
 *
 * ----------------------------------------------------------------------------
 * ABSTRACT:
 * ----------------------------------------------------------------------------
 * This function is called during ignition on after generation CPU
 * initialization to check for immobilizer code
 *
\* ============================================================================ */
void ImmobilizerIgnitionOn(void);


/**************************************************************************
* Function:          Immo_Executive
* Description:       This procedure is the main routine of Immobilization.   
* Execution Rate:    7.81 ms                                                                    
* Parameters:        none                                      
* Return:            none   
**************************************************************************/
extern void Immo_Executive(void);

/* ============================================================================ *\
 * File revision history (top to bottom, first revision to last revision
 * ============================================================================
 *
 * Date         user id     SCR       (description on following lines)
 * ----------   -------     ---
\* ============================================================================ */
#endif /* IMMO_H */
