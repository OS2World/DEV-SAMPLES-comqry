/*(c) Copyright IBM Corp. 1997  All rights reserved.                 
                                                                   
This sample program is owned by International Business Machines    
Corporation or one of its subsidiaries ("IBM") and is copyrighted  
and licensed, not sold.                                            
                                                                   
You may copy, modify, and distribute this sample program in any    
form without payment to IBM,  for any purpose including developing,
using, marketing or distributing programs that include or are      
derivative works of the sample program.                            
                                                                   
The sample program is provided to you on an "AS IS" basis, without 
warranty of any kind.  IBM HEREBY  EXPRESSLY DISCLAIMS ALL         
WARRANTIES, EITHER EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED  
TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A    
PARTICULAR PURPOSE.                                                
                                                                   
Some jurisdictions do not allow for the exclusion or limitation of 
implied warranties, so the above limitations or exclusions may not 
apply to you.  IBM shall not be liable for any damages you suffer  
as a result of using, modifying or distributing the sample program 
or its derivatives.                                                
                                                                   
Each copy of any portion of this sample program or any derivative  
work,  must include a the above copyright notice and disclaimer of 
warranty.                                                          */
                                                                   

/* This code segment queries the system for the number
   of COM ports available to the the system.  It implements
   the DosDevConfig OS/2 API which can be used to query
   many system configuration hardware components */


#define INCL_DOSDEVICES   /* Device values */
#define INCL_DOSERRORS    /* Error values */
#include <os2.h>
#include <stdio.h>

int main(VOID) {

BYTE    RS232      = 0;  /* Number of com ports*/

APIRET  rc         = NO_ERROR; /* Return code */

     rc = DosDevConfig(&RS232, DEVINFO_RS232);
     if (rc != NO_ERROR) {
        printf("DosDevConfig error:  return code = %u\n", rc);
        return 1;
     }


     rc = DosDevConfig(&RS232, DEVINFO_RS232);
     printf("Number of COM Ports:  %d\n", RS232);

     return NO_ERROR;
 }
