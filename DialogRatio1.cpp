// DialogRatio1.cpp : implementation file
//

#include "stdafx.h"
#include "Final.h"
#include "DialogRatio1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DialogRatio1 dialog


DialogRatio1::DialogRatio1(CWnd* pParent /*=NULL*/)
	: CDialog(DialogRatio1::IDD, pParent)
{
	//{{AFX_DATA_INIT(DialogRatio1)
	m_dx = 0.0;
	m_dy = 0.0;
	//}}AFX_DATA_INIT
}


void DialogRatio1::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(DialogRatio1)
	DDX_Text(pDX, IDC_dx, m_dx);
	DDX_Text(pDX, IDC_dy, m_dy);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(DialogRatio1, CDialog)
	//{{AFX_MSG_MAP(DialogRatio1)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DialogRatio1 message handlers
