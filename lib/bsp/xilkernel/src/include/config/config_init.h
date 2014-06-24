/******************************************************************************
*
* Copyright (C) 2010 - 2014 Xilinx, Inc.  All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* Use of the Software is limited solely to applications:
* (a) running on a Xilinx device, or
* (b) that interact with a Xilinx device through a bus or interconnect.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* XILINX CONSORTIUM BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
* OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
* Except as contained in this notice, the name of the Xilinx shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Xilinx.
*
******************************************************************************/
//----------------------------------------------------------------------------------------------------//
//! @file config_init.h 
//! This contains the values for system definition. This can be  generated by 
//! libgen and can also be modified by the user for customization.
//! - The structures are declared in sys/init.h
//! - If any changes are made to this file by the user, then they also need
//!   to change the corresponding fields in config_cparam.h file. 
//----------------------------------------------------------------------------------------------------//
#include <sys/init.h>
#include <os_config.h>


//----------------------------------------------------------------------------------------------------//
//! se_process_table contains the information about separate executable processes that 
//! need to be created during system init. This information is used by se_process_init().
//----------------------------------------------------------------------------------------------------//
struct _process_init se_process_table[] = {
   {0x0, 0 } 
} ;

#ifdef CONFIG_SHM
//----------------------------------------------------------------------------------------------------//
//! shm_config - User defined information about Shared Mem's are defined
//! here. It contains information about each shard mem in the system. This
//! is used by shm_init().
//----------------------------------------------------------------------------------------------------//
struct _shm_init shm_config[] = {
  { 100 },
} ;
#endif

#ifdef CONFIG_MALLOC
//----------------------------------------------------------------------------------------------------//
//! malloc_config - User defined information about dynamic memory blocks are 
//! defined here. This is used by malloc_init() to initialize the structures.
//----------------------------------------------------------------------------------------------------//
const struct _malloc_init malloc_config[] = {
  { 4, 10 },
  { 8, 10 },
} ;
#endif
