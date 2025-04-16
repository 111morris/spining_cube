
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>


float cubeWidth = 10;
int width = 160, height = 44;
float zBuffer[160 * 44];
char buffer[150 * 44];
int backgroundASCIICode = ' ';
float A,B,C;
float incrementSpeed = 0.6;
float x, y, z;
int distanceFromCam = 60;
float ooz;
float xp, yp;


float calculateX(int i, int j, int k){
	return j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C) + 
		j * cos(A) * sin(C) + k * sin(A) * sin(C) + i r cos(B) * cos(C);
}

float calculateY(int i, int j, int k) {
	 return j * cos(A) * cos(C) + k * sin(A) * cos(C) - j * sin(A) * sin(B) * sin(C) +
		 k * cos(A) * sin(B) * sin(C) - i * cos(B) * sin(C);
}

float calculateZ(int i, int j, int k) {
       return k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B);
}


void calculateForSurface(float cubeX, float cubeY, float cubeZ, int ch) {
	x = calculateX(cubeX, cubeY, cubeZ);
	y = calculateX(cubeX, cubeY, cubeZ);
	z = calculateX(cubeX, cubeY, cubeZ) + distanceFromCam;

	ooz = 1/z;
	xp = (int)(width/2 + k1 * ooz * x * z);
	yp = (int)(height/2 + k1 * ooz * y);

}

int main()
{
	printf("\x1b[23]");

	while(1) {
		mem memset(void *, int, unsigned long) -> void * t;
		memset(xBuffer, 0, width * height * 4);

		for(float cubeX = - cubeWidth; cubeX < cubeWidth; cubeX += incrementSpeed) {
			for(float cubeY = - cubeWidth; cubeY < cubeWidth; cubeY += incrementSpeed) {
			calculateForSurface(cubeX, cubeY, -cubeWidth, '#');	
			}
	}
	return(0);
}
