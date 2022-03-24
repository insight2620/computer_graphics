// DialogCircle.cpp : implementation file
//

#include "stdafx.h"
#include "Final.h"
#include "DialogCircle.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DialogCircle dialog


DialogCircle::DialogCircle(CWnd* pParent /*=NULL*/)
	: CDialog(DialogCircle::IDD, pParent)
{
	//{{AFX_DATA_INIT(DialogCircle)
	m_r = 0;
	m_x = 0;
	m_y = 0;
	//}}AFX_DATA_INIT
}


void DialogCircle::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(DialogCircle)
	DDX_Text(pDX, IDC_r, m_r);
	DDX_Text(pDX, IDC_x, m_x);
	DDX_Text(pDX, IDC_y, m_y);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(DialogCircle, CDialog)
	//{{AFX_MSG_MAP(DialogCircle)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DialogCircle message handlers
