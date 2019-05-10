// spltDoc.cpp : implementation of the CSpltDoc class
//

#include "stdafx.h"
#include "splt.h"

#include "spltDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSpltDoc

IMPLEMENT_DYNCREATE(CSpltDoc, CDocument)

BEGIN_MESSAGE_MAP(CSpltDoc, CDocument)
	//{{AFX_MSG_MAP(CSpltDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSpltDoc construction/destruction

CSpltDoc::CSpltDoc()
{
	// TODO: add one-time construction code here

}

CSpltDoc::~CSpltDoc()
{
}

BOOL CSpltDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CSpltDoc serialization

void CSpltDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CSpltDoc diagnostics

#ifdef _DEBUG
void CSpltDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CSpltDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSpltDoc commands
