// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "splt.h"

#include "MainFrm.h"

#include "001view.h"
#include "002view.h"
#include "003view.h"
#include "004view.h"
#include "005view.h"
#include "007view.h"
#include"test.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	//{{AFX_MSG_MAP(CMainFrame)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	ON_WM_CREATE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // status line indicator
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};

/////////////////////////////////////////////////////////////////////////////
// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	// TODO: add member initialization code here
	
}

CMainFrame::~CMainFrame()
{
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	if (!m_wndToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP
		| CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC) ||
		!m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
	{
		TRACE0("Failed to create toolbar\n");
		return -1;      // fail to create
	}

	if (!m_wndStatusBar.Create(this) ||
		!m_wndStatusBar.SetIndicators(indicators,
		  sizeof(indicators)/sizeof(UINT)))
	{
		TRACE0("Failed to create status bar\n");
		return -1;      // fail to create
	}

	// TODO: Delete these three lines if you don't want the toolbar to
	//  be dockable
	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndToolBar);

	return 0;
}

BOOL CMainFrame::OnCreateClient(LPCREATESTRUCT /*lpcs*/,
	CCreateContext* pContext)
{
	BOOL ret=m_wndSplitter.CreateStatic(this,3,2);
	if(!ret)
	{
		TRACE("SplitCreate Failed...\n");
		return ret;
	}
//计算窗口尺寸
	CRect rt;
	GetClientRect(&rt);
	CSize czPane(rt.Width()/2, rt.Height()/3);

//创建接收数据显示窗口
	pContext->m_pCurrentFrame=this;
	ret=m_wndSplitter.CreateView(
		0,0,
		RUNTIME_CLASS(C001View),
		czPane,
		pContext);
	if(!ret)
	{
		TRACE("SplitCreateView Failed(1)...\n");
		return ret;
	}
//创建发送数据显示窗口
	pContext->m_pCurrentFrame=this;
	ret=m_wndSplitter.CreateView(
		0,1,
		RUNTIME_CLASS(C002View),
		czPane,
		pContext);
	if(!ret)
	{
		TRACE("Split CreateView Failed(2)...\n");
		return ret;
	}
//创建调试数据显示窗口
	pContext->m_pCurrentFrame=this;
	ret=m_wndSplitter.CreateView(
		1,0,
		RUNTIME_CLASS(C003View),
		czPane,
		pContext);
//
	pContext->m_pCurrentFrame=this;
	ret=m_wndSplitter.CreateView(
		1,1,
		RUNTIME_CLASS(test),
		czPane,
		pContext);

//
	pContext->m_pCurrentFrame=this;
	ret=m_wndSplitter.CreateView(
		2,0,
		RUNTIME_CLASS(C005View),
		czPane,
		pContext);
//
	pContext->m_pCurrentFrame=this;
	ret=m_wndSplitter.CreateView(
		2,1,
		RUNTIME_CLASS(C007View),
		czPane,
		pContext);

	if(!ret)
	{
		TRACE("Split CreateView Failed(3)...\n");
		return ret;
	}
//初始化窗口
	m_wndSplitter.RecalcLayout();	
	m_wndSplitter.SetActivePane(1,0);
	return ret;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CMainFrame diagnostics

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}

#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMainFrame message handlers

