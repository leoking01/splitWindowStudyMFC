#if !defined(AFX_004VIEW_H__05FC321D_4A64_4C3D_B80B_224A6E01EEF4__INCLUDED_)
#define AFX_004VIEW_H__05FC321D_4A64_4C3D_B80B_224A6E01EEF4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// 004View.h : header file
//

#include "SpltDoc.h"

/////////////////////////////////////////////////////////////////////////////
// C004View form view

#ifndef __AFXEXT_H__
#include <afxext.h>
#endif

class C004View : public CFormView
{
protected:
	C004View();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(C004View)

// Form Data
public:
	//{{AFX_DATA(C004View)
	enum { IDD = IDD_FORMVIEW };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA
	
// Attributes
public:
	CSpltDoc* GetDocument();
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(C004View)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~C004View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
	//{{AFX_MSG(C004View)
	afx_msg void OnButton1();
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};
#ifndef _DEBUG  // debug version in 001View.cpp
inline CSpltDoc* C004View::GetDocument()
   { return (CSpltDoc*)m_pDocument; }
#endif
/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_004VIEW_H__05FC321D_4A64_4C3D_B80B_224A6E01EEF4__INCLUDED_)
