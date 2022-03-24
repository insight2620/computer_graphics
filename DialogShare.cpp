// DialogShare.cpp : implementation file
//

#include "stdafx.h"
#include "Final.h"
#include "DialogShare.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DialogShare dialog


DialogShare::DialogShare(CWnd* pParent /*=NULL*/)
	: CDialog(DialogShare::IDD, pParent)
{
	//{{AFX_DATA_INIT(DialogShare)
	m_b = 0.0;
	m_c = 0.0;
	//}}AFX_DATA_INIT
}


void DialogShare::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(DialogShare)
	DDX_Text(pDX, IDC_b, m_b);
	DDX_Text(pDX, IDC_c, m_c);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(DialogShare, CDialog)
	//{{AFX_MSG_MAP(DialogShare)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DialogShare message handlers
