// DialogTrans.cpp : implementation file
//

#include "stdafx.h"
#include "Final.h"
#include "DialogTrans.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DialogTrans dialog


DialogTrans::DialogTrans(CWnd* pParent /*=NULL*/)
	: CDialog(DialogTrans::IDD, pParent)
{
	//{{AFX_DATA_INIT(DialogTrans)
	m_dx = 0;
	m_dy = 0;
	//}}AFX_DATA_INIT
}


void DialogTrans::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(DialogTrans)
	DDX_Text(pDX, IDC_dx, m_dx);
	DDX_Text(pDX, IDC_dy, m_dy);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(DialogTrans, CDialog)
	//{{AFX_MSG_MAP(DialogTrans)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DialogTrans message handlers
