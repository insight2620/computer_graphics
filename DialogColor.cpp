// DialogColor.cpp : implementation file
//

#include "stdafx.h"
#include "Final.h"
#include "DialogColor.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DialogColor dialog


DialogColor::DialogColor(CWnd* pParent /*=NULL*/)
	: CDialog(DialogColor::IDD, pParent)
{
	//{{AFX_DATA_INIT(DialogColor)
	m_color = 0;
	//}}AFX_DATA_INIT
}


void DialogColor::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(DialogColor)
	DDX_Text(pDX, IDC_Color, m_color);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(DialogColor, CDialog)
	//{{AFX_MSG_MAP(DialogColor)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DialogColor message handlers
