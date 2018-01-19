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
	int data[4][4];//面的小方格
	void face_point(int k,int a,int b,COLORREF color); //k为第k个面,a为行，b为列
};


/***************************************************/
#endif // !defined(AFX_FACE_H__749516C0_C83A_46C0_857E_31D4AC917150__INCLUDED_)
