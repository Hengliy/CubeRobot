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
char scand()                 //�������
{
	int x;
    x=rand()%12+1;
	return data[x];
}
/**************************************************/
void main()
{

	initgraph(240, 180); // ����� TC ��������
	setbkcolor(LIGHTCYAN);
	cleardevice();	

	magic M;
	int right=0,wrong=0;
	char s[5];
	while(1)
	{
		M.init();
		M.sleep = 0;
		srand(time(0));	   //������� 
		int n=100;//������Դ���
		M.print();
		while(1)//�ȴ����¡�Z����
		{
			while(n--)
			  M.change(scand());
			_sleep(1000);
			char c=getch();
			if(c=='z') break;
		}
		M.sleep = 10;
		M.print();	
		while(1)//ƴ�Ӷ��� ʮ��
		{
			M.suanfa1();
			M.print();
			if(M.judge1())
			{	
				break;
			}
		}
		while(1)//ƴ�ӵ�һ�� �Ľ�
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
		while(1)//ƴ�ӵڶ��� ��
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
		sprintf(s, "%d", right);//������aת�����ַ���
		outtextxy(0, 0,s);
		sprintf(s, "%d", wrong);//������aת�����ַ���
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
	getch(); // �����������
	//closegraph(); // �ر�ͼ�ν���
}