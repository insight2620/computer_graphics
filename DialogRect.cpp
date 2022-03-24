// DialogRect.cpp : implementation file
//

#include "stdafx.h"
#include "Final.h"
#include "DialogRect.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DialogRect dialog


DialogRect::DialogRect(CWnd* pParent /*=NULL*/)
	: CDialog(DialogRect::IDD, pParent)
{
	//{{AFX_DATA_INIT(DialogRect)
	m_l = 0;
	m_w = 0;
	m_x = 0;
	m_y = 0;
	//}}AFX_DATA_INIT
}


void DialogRect::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(DialogRect)
	DDX_Text(pDX, IDC_a, m_l);
	DDX_Text(pDX, IDC_b, m_w);
	DDX_Text(pDX, IDC_x, m_x);
	DDX_Text(pDX, IDC_y, m_y);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(DialogRect, CDialog)
	//{{AFX_MSG_MAP(DialogRect)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DialogRect message handlers
