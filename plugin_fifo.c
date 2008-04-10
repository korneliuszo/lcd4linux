/* $Id$
 * $URL$
 *
 * plugin template
 *
 * Copyright (C) 2008 Michael Vogt <michu@neophob.com>
 * Copyright (C) 2004, 2005, 2006, 2007, 2008 The LCD4Linux Team <lcd4linux-devel@users.sourceforge.net>
 *
 * This file is part of LCD4Linux.
 *
 * LCD4Linux is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * LCD4Linux is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */  
    
/* 
 * Quick fifo hack for lcd4linux
 * 
 * most code is ripped ...
 *
 */ 
    
/* define the include files you need */ 
#include "config.h"
    
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
    
/* these should always be included */ 
#include "debug.h"
#include "plugin.h"
#include "cfg.h"
    
#ifdef WITH_DMALLOC
#include <dmalloc.h>
#endif	/* 
    
#define FIFO_BUFFER_SIZE 80
    
    
    
    






{
    
    
    
	
	
    
	
    


{
    
    
	
	
    
    


{
    
    
	
	
    
    
	


{
    
	
	
    
    
    


{
    
    
	
	    
		/* Path doesn't exist */ 
		return makeFifo(fd);
	
	
	
    
    
	
	
    
    


{
    
	
    
    
	
	
	
    
    


{
    
    
    
    
    
	
	
	    
	
	    
	
	    
		
	    
	    
		
		    
	    
	
    
    
	/* store result */ 
	SetResult(&result, R_STRING, msg);



/* plugin initialization */ 
int plugin_init_fifo(void) 
{
    
    
    
    
    
	
    
    
    
    


{
    
	/* close filedescriptors */ 
	closeFifo();
