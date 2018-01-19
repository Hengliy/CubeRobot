// magic.h: inter#include <conio.h>face for the magic class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MAGIC_H__95EC4CB9_6E7B_4A2C_A366_61D8B47C2B60__INCLUDED_)
#define AFX_MAGIC_H__95EC4CB9_6E7B_4A2C_A366_61D8B47C2B60__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include  "face.h"
#include <conio.h>
#include <graphics.h>
//#include  "color.h"
class magic  
{
public:
	magic();
	void print();
	void init();
	void change(char c);
	void suanfa1();//顶面十字
	void suanfa2();//第一层 四角
	void sunafa3();//第二层 腰
	void suanfa4();//底面十字
	int suanfa5();//第三层面
	void suanfa6();//第三层愣
	void foot(int i,char a);
//	void second_LeftHandRule(int face);//第二层左手口诀
	void second_HandRule(int face,char a);//第二层右手口诀
	void fanzhuan();
	void third();
	void third2();
	int third_tuxing();
	int judge1();//判断顶面 十字
	int judge2();//判断第一层 四角
	int judge3();//判断第二层 腰
	int judge5();

	void suanfa7();
	int judge4();
	void third_HandRule();
    void Finallchange();
    int Finallyjudge5();

	~magic();
	MOUSEMSG mouse;
	face F[6];
	int ceshi();
	int sleep;
	int avl;
};

#endif // !defined(AFX_MAGIC_H__95EC4CB9_6E7B_4A2C_A366_61D8B47C2B60__INCLUDED_)
