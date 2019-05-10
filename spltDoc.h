// spltDoc.h : interface of the CSpltDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SPLTDOC_H__1A89521D_811B_408D_8F1D_F86BA88FCDF0__INCLUDED_)
#define AFX_SPLTDOC_H__1A89521D_811B_408D_8F1D_F86BA88FCDF0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSpltDoc : public CDocument
{
protected: // create from serialization only
	CSpltDoc();
	DECLARE_DYNCREATE(CSpltDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSpltDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSpltDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSpltDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SPLTDOC_H__1A89521D_811B_408D_8F1D_F86BA88FCDF0__INCLUDED_)
