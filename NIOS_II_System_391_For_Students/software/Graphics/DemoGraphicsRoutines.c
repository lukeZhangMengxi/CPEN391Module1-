/*
 * "Hello World" example.
 *
 * This example prints 'Hello from Nios II' to the STDOUT stream. It runs on
 * the Nios II 'standard', 'full_featured', 'fast', and 'low_cost' example
 * designs. It runs with or without the MicroC/OS-II RTOS and requires a STDOUT
 * device in your system's hardware.
 * The memory footprint of this hosted application is ~69 kbytes by default
 * using the standard reference design.
 *
 * For a reduced footprint version of this template, and an explanation of how
 * to reduce the memory footprint for a given application, see the
 * "small_hello_world" template.
 *
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// #defined constants representing values we write to the graphics 'command' register to get
// it to do something. You will add more values as you add hardware to the graphics chip
// Note DrawHLine, DrawVLine and DrawLine at the moment do nothing - you will modify these

#define DrawHLine		1
#define DrawVLine		2
#define DrawLine		3
#define PutAPixel		0xA
#define GetAPixel		0xB
#define ProgramPaletteColour   	0x10

/*******************************************************************************************
** This macro pauses until the graphics chip status register indicates that it is idle
*******************************************************************************************/

#define WAIT_FOR_GRAPHICS		while((GraphicsStatusReg & 0x0001) != 0x0001);

//Predefined Colour Values
//Use the symbolic constants below as the values to write to the Colour Register
//When you ask the graphics chip to draw something. These values are also returned
//By the read pixel command

// the header file "Colours.h" contains symbolic names for all 256 colours e.g. RED
// while the source file ColourPaletteData.c contains the 24 bit RGB data
// that is pre-programmed into each of the 256 palettes

#define	BLACK		0
#define	WHITE		1
#define	RED			2
#define	LIME		3
#define	BLUE		4
#define	YELLOW		5
#define	CYAN		6
#define	MAGENTA		7


#define GraphicsCommandReg   		(*(volatile unsigned short int *)(0x84000000))
#define GraphicsStatusReg   		(*(volatile unsigned short int *)(0x84000000))
#define GraphicsX1Reg   		(*(volatile unsigned short int *)(0x84000002))
#define GraphicsY1Reg   		(*(volatile unsigned short int *)(0x84000004))
#define GraphicsX2Reg   		(*(volatile unsigned short int *)(0x84000006))
#define GraphicsY2Reg			(*(volatile unsigned short int *)(0x84000008))
#define GraphicsColourReg		(*(volatile unsigned short int *)(0x8400000E))
#define GraphicsBackGroundColourReg   		(*(volatile unsigned short int *)(0x84000010))

// clear everything
void graph_clearAll(){
	int i;
	for (i=0;i<479;i++) {
		HLine(0,i,800,BLACK);
	}
}

int main()
{
	int i ;
	printf("Hello from Nios II!\n");

	graph_clearAll();

/*	while(1){
		for(i = 0; i < 800; i ++)
			HLine(0, i, 800, i % 8);
		//for(i = 0; i < 800; i++)
		//	VLine(i, 0, 480, i % 8);
		graph_clearAll();
	}
*/
	HLine(0, 30, 800, 0);
	HLine(0, 60, 800, 1);
	HLine(0, 90, 800, 2);
	HLine(0, 120, 800, 3);
	HLine(0, 150, 800, 4);
	HLine(0, 180, 800, 5);
	HLine(0, 210, 800, 6);
	HLine(0, 240, 800, 7);
	return 0;
}
