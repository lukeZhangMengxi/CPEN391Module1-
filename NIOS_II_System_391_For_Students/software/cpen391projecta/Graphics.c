#include "project.h"
#include "Colours.h"


#define	BLACK		0
#define	WHITE		1
#define	RED			2
#define	LIME		3
#define	BLUE		4
#define	YELLOW		5
#define	CYAN		6
#define	MAGENTA		7
#define GREEN		100


// clear everything
void graph_clearAll(){
	int i;
	for (i=0;i<479;i++) {
		HLine(0,i,800,BLACK);
	}
}


// main menu
void graph_goto_menu() {
	graph_clearAll();

	int i;
	// top two square button
	for (i=49;i<214;i++) {
		HLine(174,i,200,GREEN);
		HLine(424,i,200,GREEN);
	}
	// bottom two square button
	for (i=264;i<429;i++) {
		HLine(174,i,200,GREEN);
		HLine(424,i,200,GREEN);
	}

	// CH4
	OutGraphicsCharFont2a(254, 125, BLUE, WHITE, 67, 0);
	OutGraphicsCharFont2a(265, 125, BLUE, WHITE, 72, 0);
	OutGraphicsCharFont2a(276, 125, BLUE, WHITE, 52, 0);

	// Natural Gas
	OutGraphicsCharFont2a(491, 120, BLUE, WHITE, 78, 0);
	OutGraphicsCharFont2a(502, 120, BLUE, WHITE, 97, 0);
	OutGraphicsCharFont2a(513, 120, BLUE, WHITE, 116, 0);
	OutGraphicsCharFont2a(524, 120, BLUE, WHITE, 117, 0);
	OutGraphicsCharFont2a(535, 120, BLUE, WHITE, 114, 0);
	OutGraphicsCharFont2a(546, 120, BLUE, WHITE, 97, 0);
	OutGraphicsCharFont2a(557, 120, BLUE, WHITE, 108, 0);
	// Gas
	OutGraphicsCharFont2a(513, 135, BLUE, WHITE, 71, 0);
	OutGraphicsCharFont2a(524, 135, BLUE, WHITE, 97, 0);
	OutGraphicsCharFont2a(535, 135, BLUE, WHITE, 115, 0);

	// Smoke
	OutGraphicsCharFont2a(243, 340, BLUE, WHITE, 83, 0);
	OutGraphicsCharFont2a(254, 340, BLUE, WHITE, 109, 0);
	OutGraphicsCharFont2a(265, 340, BLUE, WHITE, 111, 0);
	OutGraphicsCharFont2a(276, 340, BLUE, WHITE, 107, 0);
	OutGraphicsCharFont2a(287, 340, BLUE, WHITE, 101, 0);

	// Air
	OutGraphicsCharFont2a(513, 335, BLUE, WHITE, 65, 0);
	OutGraphicsCharFont2a(524, 335, BLUE, WHITE, 105, 0);
	OutGraphicsCharFont2a(535, 335, BLUE, WHITE, 114, 0);
	// Quality
	OutGraphicsCharFont2a(491, 350, BLUE, WHITE, 81, 0);
	OutGraphicsCharFont2a(502, 350, BLUE, WHITE, 117, 0);
	OutGraphicsCharFont2a(513, 350, BLUE, WHITE, 97, 0);
	OutGraphicsCharFont2a(524, 350, BLUE, WHITE, 108, 0);
	OutGraphicsCharFont2a(535, 350, BLUE, WHITE, 105, 0);
	OutGraphicsCharFont2a(546, 350, BLUE, WHITE, 116, 0);
	OutGraphicsCharFont2a(557, 350, BLUE, WHITE, 121, 0);
}

void graph_showGasFrame(int gas) {
	// clear the screen
	graph_clearAll();

	// print gas name
	switch(gas){
		// CH4
		case CH4:	OutGraphicsCharFont2a(100, 50, BLUE, WHITE, 67, 0);
				OutGraphicsCharFont2a(111, 50, BLUE, WHITE, 72, 0);
				OutGraphicsCharFont2a(122, 50, BLUE, WHITE, 52, 0);
				break;
		// Smoke
		case SMOKE: OutGraphicsCharFont2a(100, 50, BLUE, WHITE, 83, 0);
				OutGraphicsCharFont2a(111, 50, BLUE, WHITE, 109, 0);
				OutGraphicsCharFont2a(122, 50, BLUE, WHITE, 111, 0);
				OutGraphicsCharFont2a(133, 50, BLUE, WHITE, 107, 0);
				OutGraphicsCharFont2a(144, 50, BLUE, WHITE, 101, 0);
				break;
		// Natural Gas
		case NGAS: OutGraphicsCharFont2a(100, 50, BLUE, WHITE, 78, 0);
				OutGraphicsCharFont2a(111, 50, BLUE, WHITE, 97, 0);
				OutGraphicsCharFont2a(122, 50, BLUE, WHITE, 116, 0);
				OutGraphicsCharFont2a(133, 50, BLUE, WHITE, 117, 0);
				OutGraphicsCharFont2a(144, 50, BLUE, WHITE, 114, 0);
				OutGraphicsCharFont2a(155, 50, BLUE, WHITE, 97, 0);
				OutGraphicsCharFont2a(166, 50, BLUE, WHITE, 108, 0);
				OutGraphicsCharFont2a(187, 50, BLUE, WHITE, 71, 0);
				OutGraphicsCharFont2a(198, 50, BLUE, WHITE, 97, 0);
				OutGraphicsCharFont2a(209, 50, BLUE, WHITE, 115, 0);								break;
				break;
		// Air Quality
		case AIRQ: OutGraphicsCharFont2a(100, 50, BLUE, WHITE, 65, 0);
				OutGraphicsCharFont2a(111, 50, BLUE, WHITE, 105, 0);
				OutGraphicsCharFont2a(122, 50, BLUE, WHITE, 114, 0);
				OutGraphicsCharFont2a(143, 50, BLUE, WHITE, 81, 0);
				OutGraphicsCharFont2a(154, 50, BLUE, WHITE, 117, 0);
				OutGraphicsCharFont2a(165, 50, BLUE, WHITE, 97, 0);
				OutGraphicsCharFont2a(176, 50, BLUE, WHITE, 108, 0);
				OutGraphicsCharFont2a(187, 50, BLUE, WHITE, 105, 0);
				OutGraphicsCharFont2a(198, 50, BLUE, WHITE, 116, 0);
				OutGraphicsCharFont2a(209, 50, BLUE, WHITE, 121, 0);								break;
				break;
		default: printf("Unexpected gas name ...");

	}

	// print coordinate
	// print label
	// 100%
	OutGraphicsCharFont2a(47, 80, GREEN, WHITE, 49, 0);
	OutGraphicsCharFont2a(58, 80, GREEN, WHITE, 48, 0);
	OutGraphicsCharFont2a(69, 80, GREEN, WHITE, 48, 0);
	OutGraphicsCharFont2a(80, 80, YELLOW, WHITE, 37, 0);
	// 0%
	OutGraphicsCharFont2a(69, 430, GREEN, WHITE, 48, 0);
	OutGraphicsCharFont2a(80, 430, YELLOW, WHITE, 37, 0);

	// print axices
	VLine(100, 80, 350, GREEN);		// y-axis
	HLine(100, 430, 500, GREEN);	// x-axis
}


// global variable to remember the last height value of the bar
last_height = 0;		// initialize it to zero
void graph_updateGasValue(int val) {
	// check if input is valid
	if (val > 1024 || val < 0) return;
	// get the height of the bar
	int height = 350 * val / 1024;

	// change the bar image according to the difference between the current hight and the last height
	int i;
	if (height > last_height) {
		for (i=429-last_height; i>429-height; i--) {
			HLine(300, i, 100, YELLOW);
		}
	} else if (height < last_height) {
		for (i=429-last_height; i<429-height; i++) {
			HLine(300, i, 100, BLACK);
		}
	}

	// update last height
	last_height = height;

}
