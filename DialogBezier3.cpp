// DialogBezier3.cpp : implementation file
//

#include "stdafx.h"
#include "Final.h"
#include "DialogBezier3.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DialogBezier3 dialog


DialogBezier3::DialogBezier3(CWnd* pParent /*=NULL*/)
	: CDialog(DialogBezier3::IDD, pParent)
{
	//{{AFX_DATA_INIT(DialogBezier3)
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


void DialogBezier3::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(DialogBezier3)
	DDX_Text(pDX, IDC_x000, m_x0);
	DDX_Text(pDX, IDC_x111, m_x1);
	DDX_Text(pDX, IDC_x222, m_x2);
	DDX_Text(pDX, IDC_x333, m_x3);
	DDX_Text(pDX, IDC_y000, m_y0);
	DDX_Text(pDX, IDC_y111, m_y1);
	DDX_Text(pDX, IDC_y222, m_y2);
	DDX_Text(pDX, IDC_y333, m_y3);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(DialogBezier3, CDialog)
	//{{AFX_MSG_MAP(DialogBezier3)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DialogBezier3 message handlers
