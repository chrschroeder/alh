/*************************************************************************\
* Copyright (c) 2002 The University of Chicago, as Operator of Argonne
* National Laboratory.
* Copyright (c) 2002 Deutches Elektronen-Synchrotron in der Helmholtz-
* Gemelnschaft (DESY).
* Copyright (c) 2002 Berliner Speicherring-Gesellschaft fuer Synchrotron-
* Strahlung mbH (BESSY).
* Copyright (c) 2002 Southeastern Universities Research Association, as
* Operator of Thomas Jefferson National Accelerator Facility.
* Copyright (c) 2002 The Regents of the University of California, as
* Operator of Los Alamos National Laboratory.
* This file is distributed subject to a Software License Agreement found
* in the file LICENSE that is included with this distribution. 
\*************************************************************************/
/* alAudio.c 
 *
 * alAudio.c,v 1.4 2009/10/15 14:50:20 jba Exp
 *
 */

#include <stdlib.h>
#include "alh.h"

/* Audio device not implemented */

/******************************************************
  alBeep
******************************************************/
int alBeep(Display *displayBB)
{
	/* system("play /path/to/beep.wav"); */
	XBell(displayBB,0);
	return 0;
}

