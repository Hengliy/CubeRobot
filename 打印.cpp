#include <iostream>
//#include "color.h"
#include <graphics.h>
#include <conio.h>
#include "face.h"
#include "magic.h"
#include "time.h"
#include <windows.h>
using namespace std;
/***************************************************/
char data[100]="qwasiokl245";
char scand()                 //随机函数
{
	int x;
    x=rand()%12+1;
	return data[x];
}
/**************************************************/
void main()
{

	initgraph(240, 180); // 这里和 TC 略有区别
	setbkcolor(LIGHTCYAN);
	cleardevice();	

	magic M;
	int right=0,wrong=0;
	char s[5];
	while(1)
	{
		M.init();
		M.sleep = 0;
		srand(time(0));	   //随机函数 
		int n=100;//随机测试次数
		M.print();
		while(1)//等待按下“Z”键
		{
			while(n--)
			  M.change(scand());
			_sleep(1000);
			char c=getch();
			if(c=='z') break;
		}
		M.sleep = 10;
		M.print();	
		while(1)//拼接顶面 十字
		{
			M.suanfa1();
			M.print();
			if(M.judge1())
			{	
				break;
			}
		}
		while(1)//拼接第一层 四角
		{
			M.suanfa2();
			M.print();
			if(M.judge2())
			{
				break;
			}
		}
		M.fanzhuan();
		M.print();
		while(1)//拼接第二层 腰
		{
			M.sunafa3();
			M.print();
			if(M.judge3())
			{
				break;
			}
		}
		M.suanfa4();
		M.print();
		while(1)
		{
			if(M.suanfa5())
				break;
		}
		M.print();
		while(1)
		{
			M.suanfa6();
			M.print();
			if(M.judge5()==1)
				break;
		}
		M.print();
		if(M.ceshi())
			right++;
		else 
			wrong++;
		sprintf(s, "%d", right);//将整形a转换成字符串
		outtextxy(0, 0,s);
		sprintf(s, "%d", wrong);//将整形a转换成字符串
		M.print();
	
		while(1)
		{
			M.suanfa7();
			if(M.judge4())
			  break;
		}
		M.print();

	
		while(1)
		{
			M.Finallchange();
			if(M.Finallyjudge5())
				break;
		}
		outtextxy(150, 0,s);
		M.avl=0;
		outtextxy(150, 20,M.avl);
		M.print();
		_sleep(1000);
	//	getch();

	}
	/*		M.suanfa4();
			M.print();*/
		
	while(1);
	getch(); // 按任意键继续
	//closegraph(); // 关闭图形界面
}