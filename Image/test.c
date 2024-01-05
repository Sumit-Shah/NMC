#include<stdio.h>
#include"lodepng.h"
void main(){
	//creating image
	unsigned int h = 2, w= 3;
	unsigned char pixel[]=
	{255,0,0,255,
	233,233,0,255,
	23,10,20,255,
	255,0,0,255,
	233,233,0,255,
	23,10,20,255
	};
//	int len = sizeof(pixel);
//	printf("%d", len);
	lodepng_encode32_file("new.png", pixel, w,h);
}
