// DialogSymxx.cpp : implementation file
//

#include "stdafx.h"
#include "Final.h"
#include "DialogSymxx.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DialogSymxx dialog


DialogSymxx::DialogSymxx(CWnd* pParent /*=NULL*/)
	: CDialog(DialogSymxx::IDD, pParent)
{
	//{{AFX_DATA_INIT(DialogSymxx)
	m_A = 0.0;
	m_B = 0.0;
	m_C = 0.0;
	//}}AFX_DATA_INIT
}


void DialogSymxx::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(DialogSymxx)
	DDX_Text(pDX, IDC_a, m_A);
	DDX_Text(pDX, IDC_b, m_B);
	DDX_Text(pDX, IDC_c, m_C);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(DialogSymxx, CDialog)
	//{{AFX_MSG_MAP(DialogSymxx)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DialogSymxx message handlers
