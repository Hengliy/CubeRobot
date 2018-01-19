#include "face.h"
/***************************************************/
face::face()
{

}

face::~face()
{

}


void face::face_point(int k,int b,int a,COLORREF color) //k为第k个面,a为行，b为列
{
	setfillcolor(color);  
	switch(k)
	{
		case 0: fillrectangle(60+(a-1)*20,60+(b-1)*20,60+a*20,60+b*20); break;
		case 1: fillrectangle((a-1)*20,60+(b-1)*20,a*20,60+b*20);break;
		case 2: fillrectangle(120+(a-1)*20,60+(b-1)*20,120+a*20,60+b*20); break;
		case 3: fillrectangle(60+(a-1)*20,(b-1)*20,60+a*20,b*20); break;
		case 4: fillrectangle(60+(a-1)*20,120+(b-1)*20,60+a*20,120+b*20); break;
		case 5: fillrectangle(180+(a-1)*20,60+(b-1)*20,180+a*20,60+b*20); break;
	}
	
}



