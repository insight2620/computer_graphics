// DialogSymx.cpp : implementation file
//

#include "stdafx.h"
#include "Final.h"
#include "DialogSymx.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DialogSymx dialog


DialogSymx::DialogSymx(CWnd* pParent /*=NULL*/)
	: CDialog(DialogSymx::IDD, pParent)
{
	//{{AFX_DATA_INIT(DialogSymx)
	m_x = 0.0;
	m_y = 0.0;
	//}}AFX_DATA_INIT
}


void DialogSymx::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(DialogSymx)
	DDX_Text(pDX, IDC_x, m_x);
	DDX_Text(pDX, IDC_y, m_y);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(DialogSymx, CDialog)
	//{{AFX_MSG_MAP(DialogSymx)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DialogSymx message handlers
