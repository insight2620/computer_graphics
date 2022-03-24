// DialogArc.cpp : implementation file
//

#include "stdafx.h"
#include "Final.h"
#include "DialogArc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DialogArc dialog


DialogArc::DialogArc(CWnd* pParent /*=NULL*/)
	: CDialog(DialogArc::IDD, pParent)
{
	//{{AFX_DATA_INIT(DialogArc)
	m_x0 = 0;
	m_x1 = 0;
	m_x2 = 0;
	m_x3 = 0;
	m_y0 = 0;
	m_y1 = 0;
	m_y2 = 0;
	m_y3 = 0;
	//}}AFX_DATA_INIT
}


void DialogArc::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(DialogArc)
	DDX_Text(pDX, IDC_x0, m_x0);
	DDX_Text(pDX, IDC_x1, m_x1);
	DDX_Text(pDX, IDC_x2, m_x2);
	DDX_Text(pDX, IDC_x3, m_x3);
	DDX_Text(pDX, IDC_y0, m_y0);
	DDX_Text(pDX, IDC_y1, m_y1);
	DDX_Text(pDX, IDC_y2, m_y2);
	DDX_Text(pDX, IDC_y3, m_y3);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(DialogArc, CDialog)
	//{{AFX_MSG_MAP(DialogArc)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DialogArc message handlers
