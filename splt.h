// splt.h : main header file for the SPLT application
//

#if !defined(AFX_SPLT_H__B4E939AB_8CFC_4918_8219_E0A790CF9F81__INCLUDED_)
#define AFX_SPLT_H__B4E939AB_8CFC_4918_8219_E0A790CF9F81__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CSpltApp:
// See splt.cpp for the implementation of this class
//

class CSpltApp : public CWinApp
{
public:
	CSpltApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSpltApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CSpltApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SPLT_H__B4E939AB_8CFC_4918_8219_E0A790CF9F81__INCLUDED_)
