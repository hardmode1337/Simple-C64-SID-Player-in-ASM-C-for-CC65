#include <c64.h> 
#include <string.h> 
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "vblank.h"

unsigned int SIDSIZE = (1024)*8; 			//8mb should be more than enough
unsigned int SIDLOAD = 0x4000;				//Make sure you offset your sid at $4000 using sidereloc -p 40

int main(void)
	{ 
	memcpy((void*)(SIDLOAD),(void*)&SIDFILE,SIDSIZE);	//Load music 
	SIDINIT();
	printf("\nPlaying SID...\n");
	while(1)						//Game Loop
		{
 		SIDSTEP(); 					//Step SID
								
		NOT_VBLANK(); 					//NOT VBLANK
            	VBLANK(); 					//VBLANK
		}
	}
