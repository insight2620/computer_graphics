// DialogPoly.cpp : implementation file
//

#include "stdafx.h"
#include "Final.h"
#include "DialogPoly.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DialogPoly dialog


DialogPoly::DialogPoly(CWnd* pParent /*=NULL*/)
	: CDialog(DialogPoly::IDD, pParent)
{
	//{{AFX_DATA_INIT(DialogPoly)
	m_str = _T("");
	//}}AFX_DATA_INIT
}


void DialogPoly::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(DialogPoly)
	DDX_Text(pDX, IDC_EDIT1, m_str);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(DialogPoly, CDialog)
	//{{AFX_MSG_MAP(DialogPoly)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DialogPoly message handlers
