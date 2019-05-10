// 004View.cpp : implementation file
//

#include "stdafx.h"
#include "splt.h"
#include "004View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// C004View

IMPLEMENT_DYNCREATE(C004View, CFormView)

C004View::C004View()
	: CFormView(C004View::IDD)
{
	//{{AFX_DATA_INIT(C004View)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}

C004View::~C004View()
{
}

void C004View::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(C004View)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(C004View, CFormView)
	//{{AFX_MSG_MAP(C004View)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_WM_LBUTTONUP()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// C004View diagnostics

#ifdef _DEBUG
void C004View::AssertValid() const
{
	CFormView::AssertValid();
}

void C004View::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
CSpltDoc* C004View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSpltDoc)));
	return (CSpltDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// C004View message handlers

void C004View::OnButton1() 
{
	// TODO: Add your control notification handler code here
	
}

void C004View::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	
	CFormView::OnLButtonUp(nFlags, point);
}
