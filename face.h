#if !defined(AFX_FACE_H__749516C0_C83A_46C0_857E_31D4AC917150__INCLUDED_)
#define AFX_FACE_H__749516C0_C83A_46C0_857E_31D4AC917150__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
/**************************************************/
#include <graphics.h>


class face
{
public:
	face();
	~face();
	int data[4][4];//���С����
	void face_point(int k,int a,int b,COLORREF color); //kΪ��k����,aΪ�У�bΪ��
};


/***************************************************/
#endif // !defined(AFX_FACE_H__749516C0_C83A_46C0_857E_31D4AC917150__INCLUDED_)
