// DialogEllipse.cpp : implementation file
//

#include "stdafx.h"
#include "Final.h"
#include "DialogEllipse.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DialogEllipse dialog


DialogEllipse::DialogEllipse(CWnd* pParent /*=NULL*/)
	: CDialog(DialogEllipse::IDD, pParent)
{
	//{{AFX_DATA_INIT(DialogEllipse)
	m_a = 0;
	m_b = 0;
	m_x = 0;
	m_y = 0;
	//}}AFX_DATA_INIT
}


void DialogEllipse::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(DialogEllipse)
	DDX_Text(pDX, IDC_a, m_a);
	DDX_Text(pDX, IDC_b, m_b);
	DDX_Text(pDX, IDC_x, m_x);
	DDX_Text(pDX, IDC_y, m_y);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(DialogEllipse, CDialog)
	//{{AFX_MSG_MAP(DialogEllipse)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DialogEllipse message handlers
