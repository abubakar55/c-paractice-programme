//============================================================================
// Name        : brickSlayerITC.cpp
// Author      : Sibt ul Hussain
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game of Brick Slayer...
//============================================================================
#ifndef BSLAYER_CPP_
#define BSLAYER_CPP_
#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>
#include<string>
#include<cmath> // for basic math functions such as cos, sin, sqrt
using namespace std;
int tx=200;  // m and n is used in making slate they are slate global variable
int ty=1;
int b=40;
int c=1;
int d=25;
int midx=10;
int midy=10;
int width=800;
int height=600;
bool leftB = true;
bool rightB = false;
bool upB = true;
bool downB = false;
bool check = true;
bool  arr[16][16];



//defining some MACROS

#define MAX(A,B) ((A) > (B) ? (A):(B)) // finds max of two numbers
#define MIN(A,B) ((A) < (B) ? (A):(B)) // find min of two numbers
#define ABS(A) ((A) < (0) ? -(A):(A))  // find ABS of a given number

// define some constants
// constant FPS (Frame per second) is  used to specify
// number of frames per second in your game.. if FPS is small
// your objects will move slowly and if large your objects
// will move faster, see the Timer function below for further help

#define FPS 80 // frame per seconds

// define another constant to hold ASCII for Escape key.
#define KEY_ESC 27 // A

// define some colors as 2D arrays, we have five pre-defined colors here..
// you can add many more if you wish..

float colors[5][3] = { { 1 / 255.0, 164 / 255.0, 164 / 255.0 }, { 215 / 255.0, 0
		/ 255.0, 96 / 255.0 }, { 208 / 255.0, 209 / 255.0, 2 / 255.0 }, { 0
		/ 255.0, 161 / 255.0, 203 / 255.0 }, { 50 / 255.0, 116 / 255.0, 44
		/ 255.0 } };

// defining some utility functions...
/*
 * This function converts an input angle from degree to radians */
float Deg2rad(float degree) {
	return (degree / 180.0) * M_PI;
}
// seed the random numbers generator by current time (see the documentation of srand for further help)...
void InitRandomizer() {
	srand((unsigned int) time(0)); // time(0) returns number of seconds elapsed since January 1, 1970.
}
//This function returns a random value within the specified range of [rmin, rmax] ...
long GetRandInRange(const long &rmin, const long &rmax) {
	long range = rmax - rmin; // find the range
	long value = (rand() % (long) range) + rmin; // translate the generated number ...
//	cout << value << endl << flush;
	return value;
}

/*To draw a triangle we need three vertices with each vertex having 2-coordinates [x, y] and a color for the triangle.
 * This function takes 4 arguments first three arguments (3 vertices + 1 color) to
 * draw the triangle with the given color.
 * */
void DrawTriangle(int x1, int y1, int x2, int y2, int x3, int y3,
		float color[]) {
	glColor3fv(color); // Set the triangle colour
	// ask library to draw triangle at given position...

	glBegin(GL_TRIANGLES);
	/*Draw triangle using given three vertices...*/
	glVertex4i(x1, y1, 0, 1);
	glVertex4i(x2, y2, 0, 1);
	glVertex4i(x3, y3, 0, 1);
	glEnd();
}
/*
 * Write two functions DrawRectangle and DrawSphere

 * */
	/////////////////////////////////////////  
	/////creating slate for the supporting ball///////
	////////////////////////////////////////     
	//////////
/*
 * Main Canvas drawing function.
 * */
/////////////////////////////////////////  
	/////creating circle for the the ball///////
	////////////////////////////////////////     
	//////////
// void createball(int cx,int cy,int r,int colorr)
// {
	// DrawTriangle(cx, cy, cx , cy + 10, cx, cy +10 , colors[3]);
	// DrawTriangle(d, d + 25, d + 25, d + 25, d + 25, d, colors[1]);
// }

//b == 40
/////////////////////////////////////////  
	/////creating bricks for the hitting with the ball///////
	////////////////////////////////////////     
	//////////
// void createbricks(int x,int y,int colorr) // x=50 and y=50
// {
	    
// 		DrawTriangle(x, y, x + 25, y, x, y + 25, colors[colorr]);
// 		DrawTriangle(x, y + 25, x + 25, y + 25, x + 25, y, colors[colorr]);
// 		x += 10;          
// 		y += 10;
// 		DrawTriangle(x , y - 10, x + 25, y -15, x, y + 25 - 10, colors[colorr]);
// 		DrawTriangle(x, y + 10, x + 25, y + 10, x + 25, y -10, colors[colorr]);
// }
// void createbricks(int x,int y,int colorr)




void createbricks(int x,int y,int colorr)
{
	    
		DrawTriangle(x, y, x + 25, y, x, y + 25, colors[colorr]);
		DrawTriangle(x, y + 25, x + 25, y + 25, x + 25, y, colors[colorr]);
		x += 15;          //there is issue for goiojg upward in these statement
		y += 15;
		DrawTriangle(x , y - 15, x + 25, y -15, x, y + 25 - 15, colors[colorr]);
		DrawTriangle(x, y + 25 - 15, x + 25, y + 25 -15, x + 25, y -15, colors[colorr]);
}
/*void createslate(int x, int y,int colorr){
	createbricks(x,y,colorr);
	createbricks(x+34,y,colorr);
}*/
void Display()/**/{

	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.

	glClearColor(1/*Red Component*/, 1.0/*Green Component*/,
			1.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear(GL_COLOR_BUFFER_BIT); //Update the colors

	//write your drawing commands here or call your drawing functions...                                                                              //////START my own code from here


{
		DrawTriangle(tx, ty, tx + 95, ty, tx, ty + 15, colors[3]);
		DrawTriangle(tx, ty + 15, tx + 95, ty + 15, tx + 95, ty, colors[3]); // for creating supporting slate for ball
	
}
if (tx>=705)
{
	tx=700;
}
if (tx<=0)
{
	tx=1;
}
// Drawing set of three triangles at different points of a circle using simple trignometry...


for (int j=0 ; j<=360 ; j++) {
		//int midy = 350;
		float theta = Deg2rad(-j);     ///this angle change pink triangle
		DrawTriangle(midx, midy, midx + 10 * cos(theta),
				midy + 10 * sin(-theta), midx + 10 * cos(theta),
				midy + 10 * sin(theta), colors[2]);

		float theta2 = Deg2rad(100);                                     ///this angle change yellow triangle                          ///changing theta
		theta = Deg2rad(80+j);                                      //THIS ANGLE change yellow triangle
		DrawTriangle(midx, midy, midx + 10 * cos(theta),
				midy + 10 * sin(theta), midx + 10 * cos(theta2),
				midy + 10 * sin(theta2), colors[2]);
		theta = Deg2rad(170 + j);                                     //this angle change blue triangle
		theta2 = Deg2rad(190);                                        ////this angle change blue triangle
 		DrawTriangle(midx, midy, midx + 10 * cos(theta),
				midy + 10 * sin(theta), midx + 10 * cos(theta2),
		  		midy + 10 * sin(theta2), colors[2]); 
}

if (midx==width)
{
	
	rightB = false;
	leftB = true;
}
if (midy==height)
{
	upB = false;
	downB = true;
}     
if (midx==0)
{
	leftB = false;
	rightB = true;
}

if(rightB == true)
	midx+=5;
if(leftB == true)
	midx-=5;
if(upB == true)
	midy+=5;
if(downB == true)
	midy-=5;
if (midx >= tx && midx <= tx+95 && midy >= ty && midy <=ty +15)  // if for slate
{
	if (leftB==true && downB==true)
	{      // for moving ball from slate
		downB=false;
		leftB=true;
		rightB=false;
		upB=true;
	}
	else if (rightB==true && downB==true)
	{
		downB=false;
		rightB=true;
		leftB=false;
		upB=true;
	}
}
if ( midy < 0 /* Escape key ASCII*/) { //for escapping game
		exit(1); // exit the program when escape key is pressed.
	}
int x=50;int y=50;
 for (int i=0;i<16;i++)
 {
	x = 44;
 	for (int j=0;j<16;j++)
 	{
 		if (midx >= x && midx <= x + 44 && midy >= y && midy <= y + 30)
 		{
 			if (arr[i][j]==true)
	 		 {
					if (leftB==true && downB==true)
	{
		downB=true;
		leftB=false;
		rightB=true;
		upB=false;
	}
	else if (rightB==true && downB==true)
	{
		downB=false;
		rightB=true;
		leftB=false;
		upB=true;
	}
	else if (rightB==true && upB==true)
	{
		downB=false;
		rightB=false;
		leftB=true;
		upB=true;
	}
	else if (leftB==true && upB==true)
	{
		downB=false;
		rightB=true;
		leftB=false;
		upB=true;
	}
	// 			if (leftB==true && upB==true)
	// {
	// 	downB=true;
	// 	leftB=false;
	// 	rightB=true;
	// 	upB=false;
	// }
	// else if (rightB==true && upB==true)
	// {
	// 	downB=true;
	// 	rightB=false;
	// 	leftB=true;
	// 	upB=false;
	// }

			 
			 arr[i][j] = false;
			 

				}
 		}
		x+=44;
 	} 
	y+=30;
 }	
// for (int i=0;i<16;i++)
// {
// 	for (int j=0;j<16;j++)
// 	{
// 		arr[i][j]=={{50,50}};
// 	}
// }

glutPostRedisplay();


//glutSwapBuffers();

/*	for (int midx = 150; midx < 800; midx += 250) {
		int midy = 350;
		float theta = Deg2rad(-10);     ///this angle change pink triangle
		DrawTriangle(midx, midy, midx + 100 * cos(theta),
				midy + 100 * sin(-theta), midx + 100 * cos(theta),
				midy + 100 * sin(theta), colors[1]);

		float theta2 = Deg2rad(140);                                     ///this angle change yellow triangle                          ///changing theta
		theta = Deg2rad(125);                                      //THIS ANGLE change yellow triangle
		DrawTriangle(midx, midy, midx + 60 * cos(theta),
				midy + 50 * sin(theta), midx + 70 * cos(theta2),
				midy + 60 * sin(theta2), colors[2]);
		theta = Deg2rad(120);                                     //this angle change blue triangle
		theta2 = Deg2rad(120);                                        ////this angle change blue triangle
 		DrawTriangle(midx, midy, midx + 90 * cos(theta),
				midy + 30 * sin(theta), midx + 100 * cos(theta2),
		  		midy + 30 * sin(theta2), colors[3]);        */
   /////////////////////////////////////////  
	/////caling function for ball///////
	////////////////////////////////////////     
	////////////
//	int cx = 1, cy = 100,r= 1;
//	createball(cx,cy,r,3);
//int b=40;
	/////////////////////////////////////////  
	/////loop for the bricks///////
	////////////////////////////////////////     
	//////////

  

 // a and b act as x and y axes in bricks
 
 int a=50,b=50;                   // a and act as x and y axws for bricks;
int colorr=1;
for (int i=0;i<16;i++)
{
	a = 50;
	 for (int j = 0; j < 16; j++)
	{
		// cout<<"j "<<j<<endl;
	  if (arr[i][j]==true)
		createbricks(a,b,colorr);
	
    colorr++;
    if (colorr==3)
    {
    	colorr=1;
    }
	//cout<<endl;                    //loop ni chal rhi hai	
	a+=44;                   // at 26 there is a gap bbetween two tiles  but different colors create unoquness;
	}
	b+=30;
	//cout<<"i "<<i<<endl;
}
	//createslate(10,10,1);



//	DrawTriangle(300, 300, 400, 400, 300, 500, colors[1]);
	//
	glutSwapBuffers(); // do not modify this line..
}
/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */
void SetCanvasSize(int width, int height) {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
}

/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */

void NonPrintableKeys(int key, int x, int y) {
	if (key == GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
		// what to do when left key is pressed...
	tx -= 30;

	} else if (key == GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {
	
	tx+=30;
    

	} else if (key == GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {

	}

	else if (key == GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {

	}

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/
	/*
	 glutPostRedisplay();
	 */
}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y) {
	if (key == KEY_ESC/* Escape key ASCII*/) {
		exit(1); // exit the program when escape key is pressed.
	}
}

/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m) {

	// implement your functionality here

	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(1000.0 / FPS, Timer, 0);
}

/*
 * our gateway main function
 * */
int main(int argc, char*argv[]) {
	for(int i=0 ; i <  16; i++){
		for(int j= 0 ; j < 16; j++){
			arr[i][j] = true;
		}
	}
	int width = 800, height = 600; // i have set my window size to be 800 x 600
	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("ABU BAKAR game"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	glutDisplayFunc(Display); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0 / FPS, Timer, 0);

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;
}
#endif /* BSLAYER_CPP_ */
