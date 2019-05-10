// test.cpp : 实现文件
//

#include "stdafx.h"
#include "splt.h"
#include "test.h"


// test

IMPLEMENT_DYNCREATE(test, CFormView)

test::test()
	: CFormView(test::IDD)
{

}

test::~test()
{
}

void test::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(test, CFormView)
END_MESSAGE_MAP()


// test 诊断

#ifdef _DEBUG
void test::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void test::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// test 消息处理程序
