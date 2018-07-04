#include <string.h> 
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

unsigned int SIDSIZE = (1024)*8; 			//8kb should be more than enough
unsigned int SIDLOAD = 0x4000;				//Make sure you offset your sid at $4000 using sidereloc -p 40

int main(void)
	{
	memcpy((void*)(SIDLOAD),(void*)&SIDFILE,SIDSIZE);	//Load music into memory 
	SIDINIT(); 						//Init SID
	SIDPLAY();						//Play 
	printf("Playing SID\n");	
	}

