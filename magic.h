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
	void suanfa1();//����ʮ��
	void suanfa2();//��һ�� �Ľ�
	void sunafa3();//�ڶ��� ��
	void suanfa4();//����ʮ��
	int suanfa5();//��������
	void suanfa6();//�������
	void foot(int i,char a);
//	void second_LeftHandRule(int face);//�ڶ������ֿھ�
	void second_HandRule(int face,char a);//�ڶ������ֿھ�
	void fanzhuan();
	void third();
	void third2();
	int third_tuxing();
	int judge1();//�ж϶��� ʮ��
	int judge2();//�жϵ�һ�� �Ľ�
	int judge3();//�жϵڶ��� ��
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
