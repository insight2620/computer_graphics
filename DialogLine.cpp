// DialogLine.cpp : implementation file
//

#include "stdafx.h"
#include "Final.h"
#include "DialogLine.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DialogLine dialog


DialogLine::DialogLine(CWnd* pParent /*=NULL*/)
	: CDialog(DialogLine::IDD, pParent)
{
	//{{AFX_DATA_INIT(DialogLine)
	m_x0 = 0;
	m_x1 = 0;
	m_y0 = 0;
	m_y1 = 0;
	//}}AFX_DATA_INIT
}


void DialogLine::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(DialogLine)
	DDX_Text(pDX, IDC_x0, m_x0);
	DDX_Text(pDX, IDC_x1, m_x1);
	DDX_Text(pDX, IDC_y0, m_y0);
	DDX_Text(pDX, IDC_y1, m_y1);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(DialogLine, CDialog)
	//{{AFX_MSG_MAP(DialogLine)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DialogLine message handlers
