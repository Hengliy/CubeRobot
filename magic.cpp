// magic.cpp: implementation of the magic class.
//
//////////////////////////////////////////////////////////////////////

#include "magic.h"
#include "color.h"
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

magic::magic()
{

}

magic::~magic()
{

}

/************************************************************************/

void magic::print()
{
	int i,j,k;
	for(k=0;k<6;k++)
		for(i=1;i<=3;i++)
			for(j=1;j<=3;j++)
				F[k].face_point(k,i,j,F[k].data[i][j]);
}
/************************************************************************/
void magic::init()
{
	int i,j;
	for(i=1;i<=3;i++)
		for(j=1;j<=3;j++)
			F[0].data[i][j] = Yellow;

	for(i=1;i<=3;i++)
		for(j=1;j<=3;j++)
			F[1].data[i][j] = Green;

	for(i=1;i<=3;i++)
		for(j=1;j<=3;j++)
			F[2].data[i][j] = D_blue;

	for(i=1;i<=3;i++)
		for(j=1;j<=3;j++)
			F[3].data[i][j] = Orange;

	for(i=1;i<=3;i++)
		for(j=1;j<=3;j++)
			F[4].data[i][j] = Red;

	for(i=1;i<=3;i++)
		for(j=1;j<=3;j++)
			F[5].data[i][j] = White;
}


/************************************************************************/
void magic::change(char c)
{
	int q1,q2,q3;
	if(c=='w')                    //正右上
	{ 
		q1 = F[4].data[1][3];
		q2 = F[4].data[2][3];
		q3 = F[4].data[3][3];

		F[4].data[1][3] = F[0].data[1][3];
		F[4].data[2][3] = F[0].data[2][3];
		F[4].data[3][3] = F[0].data[3][3];


		F[0].data[1][3] = F[3].data[3][1];
		F[0].data[2][3] = F[3].data[2][1];
		F[0].data[3][3] = F[3].data[1][1];

		F[3].data[1][1] = F[5].data[3][3];
		F[3].data[2][1] = F[5].data[2][3];
		F[3].data[3][1] = F[5].data[1][3];

		F[5].data[1][3] = q1;
		F[5].data[2][3] = q2;
		F[5].data[3][3] = q3;
		
		q1 = F[2].data[1][1];
		q2 = F[2].data[1][3];
		q3 = F[2].data[1][2];

		F[2].data[1][1] = F[2].data[3][1];
		F[2].data[1][2] = F[2].data[2][1];
		F[2].data[1][3] = q1;
		F[2].data[2][1] = F[2].data[3][2];
		F[2].data[3][1] = F[2].data[3][3];
		F[2].data[3][2] = F[2].data[2][3];
		F[2].data[3][3] = q2;
		F[2].data[2][3] = q3;

	} 
	if(c=='s')          //正右下
	{
		q1 = F[4].data[1][3];
		q2 = F[4].data[2][3];
		q3 = F[4].data[3][3];

		F[4].data[1][3] = F[5].data[1][3];
		F[4].data[2][3] = F[5].data[2][3];
		F[4].data[3][3] = F[5].data[3][3];


		F[5].data[1][3] = F[3].data[3][1];
		F[5].data[2][3] = F[3].data[2][1];
		F[5].data[3][3] = F[3].data[1][1];

		F[3].data[3][1] = F[0].data[1][3];
		F[3].data[2][1] = F[0].data[2][3];
		F[3].data[1][1] = F[0].data[3][3];

		F[0].data[1][3] = q1;
		F[0].data[2][3] = q2;
		F[0].data[3][3] = q3;
		
		q1 = F[2].data[1][1];
		q2 = F[2].data[1][2];
		q3 = F[2].data[1][2];

		F[2].data[1][1] = F[2].data[1][3];
		F[2].data[1][2] = F[2].data[2][3];
		F[2].data[1][3] = F[2].data[3][3];
		F[2].data[2][3] = F[2].data[3][2];
		F[2].data[3][3] = F[2].data[3][1];
		F[2].data[3][2] = F[2].data[2][1];
		F[2].data[3][1] = q1;
		F[2].data[2][1] = q2;
	}
	if(c=='5')    //上右
	{
		q1 = F[4].data[1][1];
		q2 = F[4].data[1][2];
		q3 = F[4].data[1][3];

		F[4].data[1][1] = F[1].data[1][1];
		F[4].data[1][2] = F[1].data[1][2];
		F[4].data[1][3] = F[1].data[1][3];


		F[1].data[1][1] = F[3].data[1][1];
		F[1].data[1][2] = F[3].data[1][2];
		F[1].data[1][3] = F[3].data[1][3];

		F[3].data[1][1] = F[2].data[1][1];
		F[3].data[1][2] = F[2].data[1][2];
		F[3].data[1][3] = F[2].data[1][3];

		F[2].data[1][1] = q1;
		F[2].data[1][2] = q2;
		F[2].data[1][3] = q3;
		
		q1 = F[5].data[1][1];
		q2 = F[5].data[1][2];
		q3 = F[5].data[1][2];

		F[5].data[1][1] = F[5].data[1][3];
		F[5].data[1][2] = F[5].data[2][3];
		F[5].data[1][3] = F[5].data[3][3];
		F[5].data[2][3] = F[5].data[3][2];
		F[5].data[3][3] = F[5].data[3][1];
		F[5].data[3][2] = F[5].data[2][1];
		F[5].data[3][1] = q1;
		F[5].data[2][1] = q2;

	}
	if(c=='4')   //上左
	{
		q1 = F[4].data[1][1];
		q2 = F[4].data[1][2];
		q3 = F[4].data[1][3];

		F[4].data[1][1] = F[2].data[1][1];
		F[4].data[1][2] = F[2].data[1][2];
		F[4].data[1][3] = F[2].data[1][3];


		F[2].data[1][1] = F[3].data[1][1];
		F[2].data[1][2] = F[3].data[1][2];
		F[2].data[1][3] = F[3].data[1][3];

		F[3].data[1][1] = F[1].data[1][1];
		F[3].data[1][2] = F[1].data[1][2];
		F[3].data[1][3] = F[1].data[1][3];

		F[1].data[1][1] = q1;
		F[1].data[1][2] = q2;
		F[1].data[1][3] = q3;
		
		q1 = F[5].data[1][1];
		q2 = F[5].data[1][3];
		q3 = F[5].data[1][2];

		F[5].data[1][1] = F[5].data[3][1];
		F[5].data[1][2] = F[5].data[2][1];
		F[5].data[1][3] = q1;
		F[5].data[2][1] = F[5].data[3][2];
		F[5].data[3][1] = F[5].data[3][3];
		F[5].data[3][2] = F[5].data[2][3];
		F[5].data[3][3] = q2;
		F[5].data[2][3] = q3;

	}
		if(c=='2')   //下右
	{
		q1 = F[4].data[3][1];
		q2 = F[4].data[3][2];
		q3 = F[4].data[3][3];

		F[4].data[3][1] = F[1].data[3][1];
		F[4].data[3][2] = F[1].data[3][2];
		F[4].data[3][3] = F[1].data[3][3];


		F[1].data[3][1] = F[3].data[3][1];
		F[1].data[3][2] = F[3].data[3][2];
		F[1].data[3][3] = F[3].data[3][3];

		F[3].data[3][1] = F[2].data[3][1];
		F[3].data[3][2] = F[2].data[3][2];
		F[3].data[3][3] = F[2].data[3][3];

		F[2].data[3][1] = q1;
		F[2].data[3][2] = q2;
		F[2].data[3][3] = q3;

		q1 = F[0].data[1][1];
		q2 = F[0].data[1][3];
		q3 = F[0].data[1][2];

		F[0].data[1][1] = F[0].data[3][1];
		F[0].data[1][2] = F[0].data[2][1];
		F[0].data[1][3] = q1;
		F[0].data[2][1] = F[0].data[3][2];
		F[0].data[3][1] = F[0].data[3][3];
		F[0].data[3][2] = F[0].data[2][3];
		F[0].data[3][3] = q2;
		F[0].data[2][3] = q3;
		
	
	}
	if(c=='1')    //下左
	{
		q1 = F[4].data[3][1];
		q2 = F[4].data[3][2];
		q3 = F[4].data[3][3];

		F[4].data[3][1] = F[2].data[3][1];
		F[4].data[3][2] = F[2].data[3][2];
		F[4].data[3][3] = F[2].data[3][3];

		F[2].data[3][1] = F[3].data[3][1];
		F[2].data[3][2] = F[3].data[3][2];
		F[2].data[3][3] = F[3].data[3][3];

		F[3].data[3][1] = F[1].data[3][1];
		F[3].data[3][2] = F[1].data[3][2];
		F[3].data[3][3] = F[1].data[3][3];

		F[1].data[3][1] = q1;
		F[1].data[3][2] = q2;
		F[1].data[3][3] = q3;
		
		q1 = F[0].data[1][1];
		q2 = F[0].data[1][2];
		q3 = F[0].data[1][2];

		F[0].data[1][1] = F[0].data[1][3];
		F[0].data[1][2] = F[0].data[2][3];
		F[0].data[1][3] = F[0].data[3][3];
		F[0].data[2][3] = F[0].data[3][2];
		F[0].data[3][3] = F[0].data[3][1];
		F[0].data[3][2] = F[0].data[2][1];
		F[0].data[3][1] = q1;
		F[0].data[2][1] = q2;
	}

		if(c=='o')  //右右上
	{
		q1 = F[2].data[1][3];
		q2 = F[2].data[2][3];
		q3 = F[2].data[3][3];

		F[2].data[1][3] = F[0].data[3][3];
		F[2].data[2][3] = F[0].data[3][2];
		F[2].data[3][3] = F[0].data[3][1];


		F[0].data[3][1] = F[1].data[1][1];
		F[0].data[3][2] = F[1].data[2][1];
		F[0].data[3][3] = F[1].data[3][1];

		F[1].data[1][1] = F[5].data[1][3];
		F[1].data[2][1] = F[5].data[1][2];
		F[1].data[3][1] = F[5].data[1][1];

		F[5].data[1][1] = q1;
		F[5].data[1][2] = q2;
		F[5].data[1][3] = q3;
		
		q1 = F[3].data[1][1];
		q2 = F[3].data[1][3];
		q3 = F[3].data[1][2];

		F[3].data[1][1] = F[3].data[3][1];
		F[3].data[1][2] = F[3].data[2][1];
		F[3].data[1][3] = q1;
		F[3].data[2][1] = F[3].data[3][2];
		F[3].data[3][1] = F[3].data[3][3];
		F[3].data[3][2] = F[3].data[2][3];
		F[3].data[3][3] = q2;
		F[3].data[2][3] = q3;

	}

		if(c=='l') //右右下
	{
		q1 = F[2].data[1][3];
		q2 = F[2].data[2][3];
		q3 = F[2].data[3][3];

		F[2].data[1][3] = F[5].data[1][1];
		F[2].data[2][3] = F[5].data[1][2];
		F[2].data[3][3] = F[5].data[1][3];


		F[5].data[1][1] = F[1].data[3][1];
		F[5].data[1][2] = F[1].data[2][1];
		F[5].data[1][3] = F[1].data[1][1];

		F[1].data[1][1] = F[0].data[3][1];
		F[1].data[2][1] = F[0].data[3][2];
		F[1].data[3][1] = F[0].data[3][3];

		F[0].data[3][1] = q3;
		F[0].data[3][2] = q2;
		F[0].data[3][3] = q1;
		
		q1 = F[3].data[1][1];
		q2 = F[3].data[1][2];
		q3 = F[3].data[1][2];

		F[3].data[1][1] = F[3].data[1][3];
		F[3].data[1][2] = F[3].data[2][3];
		F[3].data[1][3] = F[3].data[3][3];
		F[3].data[2][3] = F[3].data[3][2];
		F[3].data[3][3] = F[3].data[3][1];
		F[3].data[3][2] = F[3].data[2][1];
		F[3].data[3][1] = q1;
		F[3].data[2][1] = q2;

	}

	if(c=='i')  //右左上
	{
		q1 = F[2].data[1][1];
		q2 = F[2].data[2][1];
		q3 = F[2].data[3][1];

		F[2].data[1][1] = F[0].data[1][3];
		F[2].data[2][1] = F[0].data[1][2];
		F[2].data[3][1] = F[0].data[1][1];


		F[0].data[1][1] = F[1].data[1][3];
		F[0].data[1][2] = F[1].data[2][3];
		F[0].data[1][3] = F[1].data[3][3];

		F[1].data[1][3] = F[5].data[3][3];
		F[1].data[2][3] = F[5].data[3][2];
		F[1].data[3][3] = F[5].data[3][1];

		F[5].data[3][1] = q1;
		F[5].data[3][2] = q2;
		F[5].data[3][3] = q3;
		
		q1 = F[4].data[1][1];
		q2 = F[4].data[1][2];
		q3 = F[4].data[1][2];

		F[4].data[1][1] = F[4].data[1][3];
		F[4].data[1][2] = F[4].data[2][3];
		F[4].data[1][3] = F[4].data[3][3];
		F[4].data[2][3] = F[4].data[3][2];
		F[4].data[3][3] = F[4].data[3][1];
		F[4].data[3][2] = F[4].data[2][1];
		F[4].data[3][1] = q1;
		F[4].data[2][1] = q2;
	}

	if(c=='k')  //右左下
	{ 
		q1 = F[2].data[1][1];
		q2 = F[2].data[2][1];
		q3 = F[2].data[3][1];

		F[2].data[1][1] = F[5].data[3][1];
		F[2].data[2][1] = F[5].data[3][2];
		F[2].data[3][1] = F[5].data[3][3];


		F[5].data[3][1] = F[1].data[3][3];
		F[5].data[3][2] = F[1].data[2][3];
		F[5].data[3][3] = F[1].data[1][3];

		F[1].data[1][3] = F[0].data[1][1];
		F[1].data[2][3] = F[0].data[1][2];
		F[1].data[3][3] = F[0].data[1][3];

		F[0].data[1][1] = q3;
		F[0].data[1][2] = q2;
		F[0].data[1][3] = q1;
		
		q1 = F[4].data[1][1];
		q2 = F[4].data[1][3];
		q3 = F[4].data[1][2];

		F[4].data[1][1] = F[4].data[3][1];
		F[4].data[1][2] = F[4].data[2][1];
		F[4].data[1][3] = q1;
		F[4].data[2][1] = F[4].data[3][2];
		F[4].data[3][1] = F[4].data[3][3];
		F[4].data[3][2] = F[4].data[2][3];
		F[4].data[3][3] = q2;
		F[4].data[2][3] = q3;
	}

	if(c=='q')//正左 上
	{
		q1 = F[5].data[1][1];
		q2 = F[5].data[2][1];
		q3 = F[5].data[3][1];

		F[5].data[1][1] = F[4].data[1][1];
		F[5].data[2][1] = F[4].data[2][1];
		F[5].data[3][1] = F[4].data[3][1];

		F[4].data[1][1] = F[0].data[1][1];
		F[4].data[2][1] = F[0].data[2][1];
		F[4].data[3][1] = F[0].data[3][1];

		F[0].data[1][1] = F[3].data[3][3];
		F[0].data[2][1] = F[3].data[2][3];
		F[0].data[3][1] = F[3].data[1][3];

		F[3].data[1][3] = q3;
		F[3].data[2][3] = q2;
		F[3].data[3][3] = q1;


		q1 = F[1].data[1][1];
		q2 = F[1].data[1][2];
		q3 = F[1].data[1][3];
	
		F[1].data[1][1]=F[1].data[1][3];
		F[1].data[1][2]=F[1].data[2][3];

		F[1].data[2][3]=F[1].data[3][2];
		F[1].data[1][3]=F[1].data[3][3];

		
		F[1].data[3][2]=F[1].data[2][1];
		F[1].data[3][3]=F[1].data[3][1];
		
		F[1].data[3][1]=q1;
		F[1].data[2][1]=q2;
		F[1].data[1][1]=q3;

	}

	if(c=='a') //正左下
	{
		q1 = F[4].data[1][1];
		q2 = F[4].data[2][1];
		q3 = F[4].data[3][1];

		F[4].data[1][1] = F[5].data[1][1];
		F[4].data[2][1] = F[5].data[2][1];
		F[4].data[3][1] = F[5].data[3][1];


		F[5].data[1][1] = F[3].data[3][3];
		F[5].data[2][1] = F[3].data[2][3];
		F[5].data[3][1] = F[3].data[1][3];

		F[3].data[3][3] = F[0].data[1][1];
		F[3].data[2][3] = F[0].data[2][1];
		F[3].data[1][3] = F[0].data[3][1];

		F[0].data[1][1] = q1;
		F[0].data[2][1] = q2;
		F[0].data[3][1] = q3;
		
		q1 = F[1].data[1][1];
		q2 = F[1].data[1][3];
		q3 = F[1].data[1][2];

		F[1].data[1][1] = F[1].data[3][1];
		F[1].data[1][2] = F[1].data[2][1];
		F[1].data[1][3] = q1;
		F[1].data[2][1] = F[1].data[3][2];
		F[1].data[3][1] = F[1].data[3][3];
		F[1].data[3][2] = F[1].data[2][3];
		F[1].data[3][3] = q2;
		F[1].data[2][3] = q3;
	}
	print();
	_sleep(10);
	avl++;

}

/************************************************************************/
void magic::suanfa1()
{
	int visit[6];
	char m[5];
	int i,k[4]={3,1,4,2},flag;
	if(F[1].data[2][1]==F[5].data[2][2])
	{
		flag = 0;
		if(F[5].data[1][3]==F[5].data[2][2]&&F[3].data[1][2]==F[1].data[2][2])
		{
			flag = 1;
		}
		change('o');
		i=0;

		while(F[k[i]].data[3][2]!=F[k[i]].data[2][2])
		{
			change('2');
			i++;
		}
		if(flag)
			change('l');
		switch(k[i])
		{
			case 1: change('q');change('q');break;
			case 2: change('w');change('w');break;
			case 3: change('o');change('o');break;
			case 4: change('i');change('i');break;
		}
		visit[k[i]] = 1;

	}
	k[0] = 4; k[1] = 2; k[2] = 3; k[3] = 1;
	if(F[1].data[2][3]==F[5].data[2][2])
	{
		flag = 0;
		if(F[5].data[3][2]==F[5].data[2][2]&&F[4].data[1][2]==F[4].data[2][2])
		{
			flag = 1;
		}
		change('i');
		i=0;
	//	print();

		while(F[k[i]].data[3][2]!=F[k[i]].data[2][2])
		{
			change('2');
			i++;
		}
		if(flag)
		{
			change('k');
		}
			
		switch(k[i])
		{
			case 1: change('q');change('q');break;
			case 2: change('w');change('w');break;
			case 3: change('o');change('o');break;
			case 4: change('i');change('i');break;
		}
		visit[k[i]] = 1;
	}

	k[0] = 1; k[1] = 4; k[2] = 2; k[3] = 3;
	if(F[4].data[2][1]==F[5].data[2][2])
	{
		flag = 0;
		if(F[5].data[2][1]==F[5].data[2][2]&&F[1].data[1][2]==F[1].data[2][2])
		{
			flag = 1;
		}
		change('a');
		i=0;
	//	print();

		while(F[k[i]].data[3][2]!=F[k[i]].data[2][2])
		{
			change('2');
			i++;
		}
		if(flag)
		{
			change('q');
		}
		
		switch(k[i])
		{
			case 1: change('q');change('q');break;
			case 2: change('w');change('w');break;
			case 3: change('o');change('o');break;
			case 4: change('i');change('i');break;
		}
		visit[k[i]] = 1;	
	}

	k[0] = 2; k[1] = 3; k[2] = 1; k[3] = 4;
	if(F[4].data[2][3]==F[5].data[2][2])
	{
		flag = 0;
		if(F[5].data[2][3]==F[5].data[2][2]&&F[2].data[1][2]==F[1].data[2][2])
		{
			flag = 1;
		}
		change('s');
		i=0;
	//	print();

		while(F[k[i]].data[3][2]!=F[k[i]].data[2][2])
		{
			change('2');
			i++;
		}
		if(flag)
		{
			change('w');
		}
		switch(k[i])
		{
			case 1: change('q');change('q');break;
			case 2: change('w');change('w');break;
			case 3: change('o');change('o');break;
			case 4: change('i');change('i');break;
		}
		visit[k[i]] = 1;
	}

	k[0] = 4; k[1] = 2; k[2] = 3; k[3] = 1;
	if(F[2].data[2][1]==F[5].data[2][2])
	{
		flag = 0;
		if(F[5].data[3][2]==F[5].data[2][2]&&F[4].data[1][2]==F[4].data[2][2])
		{
			flag = 1;
		}
		change('k');
		i=0;
	//	print();

		while(F[k[i]].data[3][2]!=F[k[i]].data[2][2])
		{
			change('2');
			i++;
		}
		if(flag)
			change('i');
		switch(k[i])
		{
			case 1: change('q');change('q');break;
			case 2: change('w');change('w');break;
			case 3: change('o');change('o');break;
			case 4: change('i');change('i');break;
		}
		visit[k[i]] = 1;
	}

	k[0] = 3; k[1] = 1; k[2] = 4; k[3] = 2;
	if(F[2].data[2][3]==F[5].data[2][2])
	{
		flag = 0;
		if(F[5].data[1][2]==F[5].data[2][2]&&F[3].data[1][2]==F[3].data[2][2])
		{
			flag = 1;
		}
		change('l');
		i=0;
	//	print();

		while(F[k[i]].data[3][2]!=F[k[i]].data[2][2])
		{
			change('2');
			i++;
		}
		if(flag)
		{
			change('o');
		}
		
		switch(k[i])
		{
			case 1: change('q');change('q');break;
			case 2: change('w');change('w');break;
			case 3: change('o');change('o');break;
			case 4: change('i');change('i');break;
		}
		visit[k[i]] = 1;
			print();
	}

	k[0] = 2; k[1] = 3; k[2] = 1; k[3] = 4;
	if(F[3].data[2][1]==F[5].data[2][2])
	{
		flag = 0;
		if(F[5].data[2][3]==F[5].data[2][2]&&F[2].data[1][2]==F[2].data[2][2])
		{
			flag = 1;
		}
		change('w');
		i=0;
	//	print();

		while(F[k[i]].data[3][2]!=F[k[i]].data[2][2])
		{
			change('2');
			i++;
		}
		if(flag)
		{
			change('s');
		}
			
		switch(k[i])
		{
			case 1: change('q');change('q');break;
			case 2: change('w');change('w');break;
			case 3: change('o');change('o');break;
			case 4: change('i');change('i');break;
		}
		visit[k[i]] = 1;
			print();
	}

	k[0] = 1; k[1] = 4; k[2] = 2; k[3] = 3;
	if(F[3].data[2][3]==F[5].data[2][2])
	{
		flag = 0;
		if(F[5].data[2][1]==F[5].data[2][2]&&F[1].data[1][2]==F[1].data[2][2])
		{
			flag = 1;
		}
		change('q');
		i=0;
	//	print();

		while(F[k[i]].data[3][2]!=F[k[i]].data[2][2])
		{
			change('2');
			i++;
		}
		if(flag)
		{
				change('a');
		}

		switch(k[i])
		{
			case 1: change('q');change('q');break;
			case 2: change('w');change('w');break;
			case 3: change('o');change('o');break;
			case 4: change('i');change('i');break;
		}
		visit[k[i]] = 1;
			print();
	}


	if(F[1].data[1][2]==F[5].data[2][2])
	{
		change('q');	
	}

	else if(F[1].data[3][2]==F[5].data[2][2])
	{
		i = 0;
		k[0] = 1; k[1] = 4; k[2] = 2; k[3] = 3;
		m[0] = 'q'; m[1] = 'i'; m[2] = 'w'; m[3] = 'l';
		while(visit[k[i]]==1)
		{
			change('2');
			i++;
		}
		change(m[i]);
	}
	else if(F[4].data[1][2]==F[5].data[2][2])
	{
		change('i');
	}
		
	else if(F[4].data[3][2]==F[5].data[2][2])
	{
		i = 0;
		k[0] = 4; k[1] = 2; k[2] = 3; k[3] = 1;
		m[0] = 'i'; m[1] = 'w'; m[2] = 'l'; m[3] = 'q';
		while(visit[k[i]]==1)
		{
			change('2');
			i++;
		}
		change(m[i]);
	}

	else if(F[2].data[1][2]==F[5].data[2][2])
	{
		change('w');
	}
	
	else if(F[2].data[3][2]==F[5].data[2][2])
	{
		i = 0;
		k[0] = 2; k[1] = 3; k[2] = 1; k[3] = 4;
		m[0] = 'w'; m[1] = 'l'; m[2] = 'q'; m[3] = 'i';
		while(visit[k[i]]==1)
		{
			change('2');
			i++;
		}
		change(m[i]);
	}

	else if(F[3].data[1][2]==F[5].data[2][2])
	{
		change('l');
	}
	else if(F[3].data[3][2]==F[5].data[2][2])
	{
		i = 0;
		k[0] = 3; k[1] = 1; k[2] = 4; k[3] = 2;
		m[0] = 'l'; m[1] = 'q'; m[2] = 'i'; m[3] = 'w';
		while(visit[k[i]]==1)
		{
			change('2');
			i++;
		}
		change(m[i]);
	}

		while(1)//当底面没有白块时 跳出循环
		{
			if((F[0].data[1][2]==White)&&(F[4].data[3][2]==F[4].data[2][2]))
				{change('i');change('i');visit[4]=1;}//180度
			else 
			{
					if((F[0].data[2][1]==White)&&(F[1].data[3][2]==F[1].data[2][2]))
						{change('q');change('q');visit[1]=1;}
					else
					{	 
						if((F[0].data[2][3]==White)&&(F[2].data[3][2]==F[2].data[2][2]))
							{change('w');change('w');visit[2]=1;}
						else
						{	
							if((F[0].data[3][2]==White)&&(F[3].data[3][2]==F[3].data[2][2]))
								{change('o');change('o');visit[3]=1;}
						}
					}
			}
			print();
			if((F[0].data[1][2]!=White)&&(F[0].data[2][1]!=White)&&(F[0].data[2][3]!=White)&&(F[0].data[3][2]!=White))
				break;
			change('1');
		}

}

/************************************************************************/
int magic::judge1()
{
	if(F[5].data[2][2]==F[5].data[1][2] && F[5].data[2][2]==F[5].data[2][1] && F[5].data[2][2]==F[5].data[2][3] &&F[5].data[2][2]==F[5].data[3][2] )
		return 1;
	 return 0;
}

void magic::foot(int i,char a)
{
	if(i==1&&a=='l')
	{
		change('q');
		change('1');
		change('a');
	}
	else if(i==1&&a=='r')
	{
		change('a');
		change('2');
		change('q');
	}
	else if(i==4&&a=='l')
	{
		change('i');
		change('1');
		change('k');
	}
	else if(i==4&&a=='r')
	{
		change('k');
		change('2');
		change('i');
	}
	else if(i==2&&a=='l')
	{
		change('s');
		change('1');
		change('w');
	}
	else if(i==2&&a=='r')
	{
		change('w');
		change('2');
		change('s');
	}
	else if(i==3&&a=='l')
	{
		change('l');
		change('1');
		change('o');
	}
	else if(i==3&&a=='r')
	{
		change('o');
		change('2');
		change('l');
	}
}
/************************************************************************/
void magic::suanfa2()//一层脚块
{

	int k[5],i=0,flag;
	k[0] = 3;k[1] = 1;k[2] = 4;k[3] = 2; 
	if(F[1].data[3][1]==F[5].data[2][2])
	{
		while(F[k[i]].data[3][3]!=F[k[i]].data[2][2])
		{
			change('2');
			i = (i+1)%4;
		}
		i = (i+1)%4;
		foot(k[i],'l');
	}
	
	i = 2;
	if(F[1].data[3][3]==F[5].data[2][2])
	{
		while(F[k[i]].data[3][1]!=F[k[i]].data[2][2])
		{
			change('2');
			i = (i+1)%4;
		}
		i = (i+3)%4;
		foot(k[i],'r');
	}
	
	i = 1;
	if(F[4].data[3][1]==F[5].data[2][2])
	{
		while(F[k[i]].data[3][3]!=F[k[i]].data[2][2])
		{
			change('2');
			i = (i+1)%4;
		}
		i = (i+1)%4;
		foot(k[i],'l');
	}
	
	i = 3;
	if(F[4].data[3][3]==F[5].data[2][2])
	{
		while(F[k[i]].data[3][1]!=F[k[i]].data[2][2])
		{
			change('2');
			i = (i+1)%4;
		}
		i = (i+3)%4;
		foot(k[i],'r');
	}
	
	i = 2;
	if(F[2].data[3][1]==F[5].data[2][2])
	{
		while(F[k[i]].data[3][3]!=F[k[i]].data[2][2])
		{
			change('2');
			i = (i+1)%4;
		}
		i = (i+1)%4;
		foot(k[i],'l');
	}

	i = 0;
	if(F[2].data[3][3]==F[5].data[2][2])
	{
		while(F[k[i]].data[3][1]!=F[k[i]].data[2][2])
		{
			change('2');
			i = (i+1)%4;
		}
		i = (i+3)%4;
		foot(k[i],'r');
	}

	i = 3;
	if(F[3].data[3][1]==F[5].data[2][2])
	{
		while(F[k[i]].data[3][3]!=F[k[i]].data[2][2])
		{
			change('2');
			i = (i+1)%4;
		}

		i = (i+1)%4;
		foot(k[i],'l');
	}

	i = 1;
	if(F[3].data[3][3]==F[5].data[2][2])
	{
		while(F[k[i]].data[3][1]!=F[k[i]].data[2][2])
		{
			change('2');
			i = (i+1)%4;
		}
		i = (i+3)%4;
		foot(k[i],'r');
	}
	flag = 0;
	if(F[1].data[1][1]==F[5].data[2][2])
	{foot(1,'l');flag=1;}
	else if(F[4].data[1][1]==F[5].data[2][2])
	{foot(4,'l');flag=1;}
	else if(F[2].data[1][1]==F[5].data[2][2])
	{foot(2,'l');flag=1;}
	else if(F[3].data[1][1]==F[5].data[2][2])
	{foot(3,'l');flag=1;}
	else if(F[1].data[1][3]==F[5].data[2][2])
	{foot(1,'r');flag=1;}
	else if(F[4].data[1][3]==F[5].data[2][2])
	{foot(4,'r');flag=1;}
	else if(F[2].data[1][3]==F[5].data[2][2])
	{foot(2,'r');flag=1;}
	else if(F[3].data[1][3]==F[5].data[2][2])
	{foot(3,'r');flag=1;}

	if(flag==0)
	{
		if(F[0].data[1][1]==F[5].data[2][2])
		{
			foot(4,'l');
			foot(4,'l');
		}
		if(F[0].data[1][3]==F[5].data[2][2])
		{
			foot(4,'r');
			foot(4,'r');
		}
		if(F[0].data[3][1]==F[5].data[2][2])
		{
			foot(3,'r');
			foot(3,'r');
		}
		if(F[0].data[3][3]==F[5].data[2][2])
		{
			foot(3,'l');
			foot(3,'l');
		}
	}
	
}
/************************************************************************/
int magic::judge2()
{
	if(F[5].data[1][1]==F[5].data[2][2] && F[5].data[1][3]==F[5].data[2][2] && F[5].data[3][1]==F[5].data[2][2] && F[5].data[3][3]==F[5].data[2][2] )
		return 1;
	else return 0;
}

/************************************************************************/

void magic::sunafa3()//第二层
{
	if(F[1].data[1][2]==F[1].data[2][2]&&F[5].data[2][1]==F[3].data[2][2])//左手
		second_HandRule(1,'l');
	if(F[4].data[1][2]==F[4].data[2][2]&&F[5].data[3][2]==F[1].data[2][2])
		second_HandRule(4,'l');
	if(F[2].data[1][2]==F[2].data[2][2]&&F[5].data[2][3]==F[4].data[2][2])
		second_HandRule(2,'l');
	if(F[3].data[1][2]==F[3].data[2][2]&&F[5].data[1][2]==F[2].data[2][2])
		second_HandRule(3,'l');

	if(F[1].data[1][2]==F[1].data[2][2]&&F[5].data[2][1]==F[4].data[2][2])//左手
		second_HandRule(1,'r');
	if(F[4].data[1][2]==F[4].data[2][2]&&F[5].data[3][2]==F[2].data[2][2])
		second_HandRule(4,'r');
	if(F[2].data[1][2]==F[2].data[2][2]&&F[5].data[2][3]==F[3].data[2][2])
		second_HandRule(2,'r');
	if(F[3].data[1][2]==F[3].data[2][2]&&F[5].data[1][2]==F[1].data[2][2])
		second_HandRule(3,'r');
	
	if(!judge3())
	{
		if((F[1].data[1][2]==F[5].data[2][2]||F[5].data[2][1]==F[5].data[2][2])&&(F[4].data[1][2]==F[5].data[2][2]||F[5].data[3][2]==F[5].data[2][2])&&(F[2].data[1][2]==F[5].data[2][2]||F[5].data[2][3]==F[5].data[2][2])&&(F[3].data[1][2]==F[5].data[2][2]||F[5].data[1][2]==F[5].data[2][2]))
		{
			if(F[1].data[2][1]!=F[1].data[2][2])
				second_HandRule(1,'l');
			else if(F[1].data[2][3]!=F[1].data[2][2])
				second_HandRule(1,'r');
			else if(F[4].data[2][1]!=F[4].data[2][2])
				second_HandRule(4,'l');
			else if(F[4].data[2][3]!=F[4].data[2][2])
				second_HandRule(4,'r');
			else if(F[2].data[2][1]!=F[2].data[2][2])
				second_HandRule(2,'l');
			else if(F[2].data[2][3]!=F[2].data[2][2])
				second_HandRule(2,'r');
			else if(F[3].data[2][1]!=F[3].data[2][2])
				second_HandRule(3,'l');
			else if(F[3].data[2][3]!=F[3].data[2][2])
				second_HandRule(3,'r');
		}
		change('5');
	}

		
}
/*
void magic::second_LeftHandRule(int face)
{
	if(face==4)
	{	
		change('2');
		change('a');
		change('1');
		change('q');
		change('k');
		change('q');
		change('i');
		change('a');
	}
	if(face==2)
	{
		change('2');
		change('k');
		change('1');
		change('i');
		change('w');
		change('i');
		change('s');
		change('k');
	}
	if(face==3)
	{
		change('2');
		change('w');
		change('1');
		change('s');
		change('o');
		change('s');
		change('l');
		change('w');
	}
	if(face==1)
	{
		change('2');
		change('o');
		change('1');
		change('l');
		change('a');
		change('l');
		change('q');
		change('o');
	}
}

void magic::second_RightHandRule(int face)
{
	if(face==4)
	{	
		change('1');
		change('s');
		change('2');
		change('w');
		change('i');
		change('w');
		change('k');
		change('s');
	}
	if(face==2)
	{
		change('1');
		change('l');
		change('2');
		change('o');
		change('s');
		change('o');
		change('w');
		change('l');
	}
	if(face==3)
	{
		change('1');
		change('q');
		change('2');
		change('a');
		change('2');
		change('a');
		change('o');
		change('q');
	}
	if(face==1)
	{
		change('1');
		change('i');
		change('2');
		change('k');
		change('q');
		change('k');
		change('a');
		change('i');
	}
}*/	

void magic::second_HandRule(int face,char a)//第二层右手口诀
{
	if(face==1&&a=='l')
	{
		change('5');
		change('l');
		change('4');
		change('o');
		change('4');
		change('a');
		change('5');
		change('q');
	}
	if(face==4&&a=='l')
	{
		change('5');
		change('q');
		change('4');
		change('a');
		change('4');
		change('k');
		change('5');
		change('i');
	}
	if(face==2&&a=='l')
	{
		change('5');
		change('i');
		change('4');
		change('k');
		change('4');
		change('w');
		change('5');
		change('s');
	}
	if(face==3&&a=='l')
	{
		change('5');
		change('s');
		change('4');
		change('w');
		change('4');
		change('o');
		change('5');
		change('l');
	}


	if(face==1&&a=='r')
	{
		change('4');
		change('k');
		change('5');
		change('i');
		change('5');
		change('q');
		change('4');
		change('a');
	}
	if(face==4&&a=='r')
	{
		change('4');
		change('w');
		change('5');
		change('s');
		change('5');
		change('i');
		change('4');
		change('k');
	}
	if(face==2&&a=='r')
	{
		change('4');
		change('o');
		change('5');
		change('l');
		change('5');
		change('s');
		change('4');
		change('w');
	}
	if(face==3&&a=='r')
	{
		change('4');
		change('a');
		change('5');
		change('q');
		change('5');
		change('l');
		change('4');
		change('o');
	}
	
}
/*
void magic::sunafa3()//第二层 腰
{

}*/
/************************************************************************/
int magic::judge3()
{
	if(F[1].data[2][1]==F[1].data[2][2]&&F[1].data[2][3]==F[1].data[2][2]&&F[2].data[2][1]==F[2].data[2][2]&&F[2].data[2][3]==F[2].data[2][2]&&F[3].data[2][1]==F[3].data[2][2]&&F[3].data[2][3]==F[3].data[2][2]&&F[4].data[2][1]==F[4].data[2][2]&&F[4].data[2][3]==F[4].data[2][2])
		return 1;
	else return 0;
}


void magic::fanzhuan()
{
	int q1,q2,q3,q4,q5,q6,q7,q8,q9;
	q1 = F[4].data[3][3];
	q2 = F[4].data[3][2];
	q3 = F[4].data[3][1];
	q4 = F[4].data[2][1];
	F[4].data[3][3] = F[4].data[1][1];
	F[4].data[3][2] = F[4].data[1][2];
	F[4].data[3][1] = F[4].data[1][3];
	F[4].data[2][1] = F[4].data[2][3];
	F[4].data[1][1] = q1;
	F[4].data[1][2] = q2;
	F[4].data[1][3] = q3;
	F[4].data[2][3] = q4;

	q1 = F[3].data[3][3];
	q2 = F[3].data[3][2];
	q3 = F[3].data[3][1];
	q4 = F[3].data[2][1];
	F[3].data[3][3] = F[3].data[1][1];
	F[3].data[3][2] = F[3].data[1][2];
	F[3].data[3][1] = F[3].data[1][3];
	F[3].data[2][1] = F[3].data[2][3];
	F[3].data[1][1] = q1;
	F[3].data[1][2] = q2;
	F[3].data[1][3] = q3;
	F[3].data[2][3] = q4;

	q1 = F[2].data[1][1]; 
	q2 = F[2].data[1][2]; 
	q3 = F[2].data[1][3]; 
	q4 = F[2].data[2][1];
	q5 = F[2].data[2][2]; 
	q6 = F[2].data[2][3]; 
	q7 = F[2].data[3][1];
	q8 = F[2].data[3][2]; 
	q9 = F[2].data[3][3];

	F[2].data[1][1] = F[1].data[3][3];
	F[2].data[1][2] = F[1].data[3][2];
	F[2].data[1][3] = F[1].data[3][1];
	F[2].data[2][1] = F[1].data[2][3];
	F[2].data[2][2] = F[1].data[2][2];
	F[2].data[2][3] = F[1].data[2][1];
	F[2].data[3][1] = F[1].data[1][3];
	F[2].data[3][2] = F[1].data[1][2];
	F[2].data[3][3] = F[1].data[1][1];

	F[1].data[3][3] = q1;
	F[1].data[3][2] = q2;
 	F[1].data[3][1] = q3;
	F[1].data[2][3] = q4;
	F[1].data[2][2] = q5;
 	F[1].data[2][1] = q6;
	F[1].data[1][3] = q7;
	F[1].data[1][2] = q8;
	F[1].data[1][1] = q9;

	q1 = F[0].data[1][1]; 
	q2 = F[0].data[1][2]; 
	q3 = F[0].data[1][3]; 
	q4 = F[0].data[2][1];
	q5 = F[0].data[2][2]; 
	q6 = F[0].data[2][3]; 
	q7 = F[0].data[3][1];
	q8 = F[0].data[3][2]; 
	q9 = F[0].data[3][3];

	F[0].data[1][1] = F[5].data[3][3];
	F[0].data[1][2] = F[5].data[3][2];
	F[0].data[1][3] = F[5].data[3][1];
	F[0].data[2][1] = F[5].data[2][3];
	F[0].data[2][2] = F[5].data[2][2];
	F[0].data[2][3] = F[5].data[2][1];
	F[0].data[3][1] = F[5].data[1][3];
	F[0].data[3][2] = F[5].data[1][2];
	F[0].data[3][3] = F[5].data[1][1];

	F[5].data[3][3] = q1;
	F[5].data[3][2] = q2;
 	F[5].data[3][1] = q3;
	F[5].data[2][3] = q4;
	F[5].data[2][2] = q5;
 	F[5].data[2][1] = q6;
	F[5].data[1][3] = q7;
	F[5].data[1][2] = q8;
	F[5].data[1][1] = q9;
}

void magic::suanfa4()//底面十字
{
	while((F[5].data[1][2]!=F[5].data[2][2]||F[5].data[3][2]!=F[5].data[2][2])&&(F[5].data[2][1]!=F[5].data[2][2]||F[5].data[2][3]!=F[5].data[2][2]))
	{
		if((F[5].data[3][2]==F[5].data[2][2]&&F[5].data[2][1]==F[5].data[2][2])||(F[5].data[1][2]==F[5].data[2][2]&&F[5].data[2][3]==F[5].data[2][2]))
			change('4');
		change('k');
		change('w');
		change('4');
		change('s');
		change('5');
		change('i');
	}
	if((F[5].data[1][2]==F[5].data[2][2]&&F[5].data[3][2]==F[5].data[2][2])&&(F[5].data[2][1]!=F[5].data[2][2]||F[5].data[2][3]!=F[5].data[2][2]))
	{
		change('4');
		change('k');
		change('w');
		change('4');
		change('s');
		change('5');
		change('i');
	}
	else	if((F[5].data[1][2]!=F[5].data[2][2]||F[5].data[3][2]!=F[5].data[2][2])&&(F[5].data[2][1]==F[5].data[2][2]&&F[5].data[2][3]==F[5].data[2][2]))
	{
		change('k');
		change('w');
		change('4');
		change('s');
		change('5');
		change('i');
	}
}

int magic::suanfa5()//第三层面
{
	if(third_tuxing()==0)
		return 1;
	if(third_tuxing()==1)
	{
		while(F[1].data[1][1]!=F[5].data[2][2])
			change('5');
		third();
	}
	if(third_tuxing()==3)
	{
		while(F[3].data[1][3]!=F[5].data[2][2])
			change('5');
		third();
	}
	if(third_tuxing()==4)
	{
		while(F[3].data[1][3]!=F[5].data[2][2])
			change('5');
		third();
	}
	if(third_tuxing()==2)
	{
		while(F[5].data[1][1]!=F[5].data[2][2])
			change('5');
		third();
	}
	return 0;
//	if(F[5].data[1][1]==F[5].data[2][2]&&F[5].data[1][1]!=F[5].data[2][2]&&F[5].data[1][1]!=F[5].data[2][2]&&F[5].data[1][1]!=F[5].data[2][2]&&)
}

void magic::third()//第三层面小鱼一
{
	change('s');
	change('5');
	change('w');
	change('5');
	change('s');
	change('5');
	change('5');
	change('w');
}

int magic::third_tuxing()
{
	while(1)
	{
		if(F[5].data[1][1]==F[5].data[2][2]&&F[5].data[1][3]==F[5].data[2][2]&&F[5].data[3][1]==F[5].data[2][2]&&F[5].data[3][3]==F[5].data[2][2])
			return 0;
		if(F[5].data[1][1]!=F[5].data[2][2]&&F[5].data[1][3]!=F[5].data[2][2]&&F[5].data[3][1]!=F[5].data[2][2]&&F[5].data[3][3]!=F[5].data[2][2])
			return 1;
		else if(F[5].data[1][1]==F[5].data[2][2]&&F[5].data[1][3]!=F[5].data[2][2]&&F[5].data[3][1]!=F[5].data[2][2]&&F[5].data[3][3]!=F[5].data[2][2])
			return 2;
		else if(F[5].data[1][1]!=F[5].data[2][2]&&F[5].data[1][3]==F[5].data[2][2]&&F[5].data[3][1]==F[5].data[2][2]&&F[5].data[3][3]!=F[5].data[2][2])
			return 3;
		else if(F[5].data[1][1]!=F[5].data[2][2]&&F[5].data[1][3]!=F[5].data[2][2]&&F[5].data[3][1]==F[5].data[2][2]&&F[5].data[3][3]==F[5].data[2][2])
			return 4;
		else change('5');
	}
}

int magic::ceshi()
{
	if(F[5].data[1][1]==F[5].data[2][2]&&F[5].data[1][2]==F[5].data[2][2]&&F[5].data[1][3]==F[5].data[2][2]&&F[5].data[2][1]==F[5].data[2][2]&&F[5].data[2][3]==F[5].data[2][2]&&F[5].data[3][1]==F[5].data[2][2]&&F[5].data[3][2]==F[5].data[2][2]&&F[5].data[3][3]==F[5].data[2][2])
		if(F[1].data[2][1]==F[1].data[2][2]&&F[1].data[2][3]==F[1].data[2][2]&&F[1].data[3][1]==F[1].data[2][2]&&F[1].data[3][2]==F[1].data[2][2]&&F[1].data[3][3]==F[1].data[2][2])
			if(F[4].data[2][1]==F[4].data[2][2]&&F[4].data[2][3]==F[4].data[2][2]&&F[4].data[3][1]==F[4].data[2][2]&&F[4].data[3][2]==F[4].data[2][2]&&F[4].data[3][3]==F[4].data[2][2])
				if(F[2].data[2][1]==F[2].data[2][2]&&F[2].data[2][3]==F[2].data[2][2]&&F[2].data[3][1]==F[2].data[2][2]&&F[2].data[3][2]==F[2].data[2][2]&&F[2].data[3][3]==F[2].data[2][2])
					if(F[3].data[2][1]==F[3].data[2][2]&&F[3].data[2][3]==F[3].data[2][2]&&F[3].data[3][1]==F[3].data[2][2]&&F[3].data[3][2]==F[3].data[2][2]&&F[3].data[3][3]==F[3].data[2][2])
						if(F[1].data[1][1]==F[1].data[1][3]&&F[2].data[1][1]==F[2].data[1][3]&&F[3].data[1][1]==F[3].data[1][3]&&F[4].data[1][1]==F[4].data[1][3])
	
/*	if(F[5].data[1][1]==F[5].data[2][2]&&F[5].data[1][2]==F[5].data[2][2]&&F[5].data[1][3]==F[5].data[2][2]&&F[5].data[2][1]==F[5].data[2][2]&&F[5].data[2][3]==F[5].data[2][2]&&F[5].data[3][1]==F[5].data[2][2]&&F[5].data[3][2]==F[5].data[2][2]&&F[5].data[3][3]==F[5].data[2][2])
		if(F[1].data[1][2]==F[1].data[2][2]&&F[4].data[1][2]==F[4].data[2][2]&&F[2].data[1][2]==F[2].data[2][2]&&F[3].data[1][2]==F[3].data[2][2])
			if(F[1].data[1][1]==F[1].data[2][2]&&F[4].data[1][1]==F[4].data[2][2]&&F[2].data[1][1]==F[2].data[2][2]&&F[3].data[1][1]==F[3].data[2][2])
				if(F[1].data[1][3]==F[1].data[2][2]&&F[4].data[1][3]==F[4].data[2][2]&&F[2].data[1][3]==F[2].data[2][2]&&F[3].data[1][3]==F[3].data[2][2])
			*/		return 1;
	return 0;
}

int magic::judge5()
{
	if(F[1].data[1][1]==F[1].data[1][3]&&F[4].data[1][1]==F[4].data[1][3]&&F[2].data[1][1]==F[2].data[1][3]&&F[3].data[1][1]==F[3].data[1][3])
		return 1;
	return 0;
}

void magic::suanfa6()//第三层愣
{
	if(F[1].data[1][1]!=F[1].data[1][3]&&F[4].data[1][1]!=F[4].data[1][3]&&F[2].data[1][1]!=F[2].data[1][3]&&F[3].data[1][1]!=F[3].data[1][3])
		third2();
	while(F[2].data[1][1]!=F[2].data[1][3])
		change('5');
	third2();
}

void magic::third2()
{
	change('w');
	change('w');
	change('i');
	change('i');
	change('s');
	change('l');
	change('w');
	change('k');
	change('k');
	change('s');
	change('o');
	change('s');
}

/*********************最后一步**************************************/
void magic::suanfa7()
{
	int cout=0;
	while(F[3].data[1][2]!=F[3].data[1][1]&&F[3].data[1][2]!=F[3].data[1][3])//判断整齐的面是否在后面
	{
		change('4');
		cout++;
		if(cout==4)
		{
			cout=0;
			break;
		}
	}
	third_HandRule();

}

int magic::judge4()
{
	if(F[1].data[1][1]==F[1].data[1][2]&&F[1].data[1][3]==F[1].data[1][2]&&F[2].data[1][1]==F[2].data[1][2]&&F[2].data[1][3]==F[2].data[1][2]&&F[3].data[1][1]==F[3].data[1][2]&&F[3].data[1][3]==F[3].data[1][2]&&F[4].data[1][1]==F[4].data[1][2]&&F[4].data[1][3]==F[4].data[1][2])
		return 1;
	else return 0;
}
/******************************************************************/
void magic::third_HandRule()
{
	
		change('w');
		change('4');
		change('s');
		change('4');
		change('w');
		change('5');
		change('5');
		change('s');

    	change('i');
		change('5');
		change('k');
		change('5');
		change('i');
		change('5');
		change('5');
		change('k');
	
}
/*************************************************/
void magic::Finallchange()
{
	change('4');
}

int magic::Finallyjudge5()
{
	if(F[4].data[1][2]==F[4].data[2][2])
		return 1;
	else return 0;
}