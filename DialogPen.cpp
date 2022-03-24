// DialogPen.cpp : implementation file
//

#include "stdafx.h"
#include "Final.h"
#include "DialogPen.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DialogPen dialog


DialogPen::DialogPen(CWnd* pParent /*=NULL*/)
	: CDialog(DialogPen::IDD, pParent)
{
	//{{AFX_DATA_INIT(DialogPen)
	m_color = 0;
	m_wid = 0;
	//}}AFX_DATA_INIT
}


void DialogPen::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(DialogPen)
	DDX_Text(pDX, IDC_wid2, m_color);
	DDX_Text(pDX, IDC_wid, m_wid);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(DialogPen, CDialog)
	//{{AFX_MSG_MAP(DialogPen)
	ON_BN_CLICKED(IDC_RADIOx, OnRADIOx)
	ON_BN_CLICKED(IDC_RADIOz, OnRADIOz)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DialogPen message handlers

void DialogPen::OnRADIOx() 
{
	// TODO: Add your control notification handler code here
	pen = 2;
}

void DialogPen::OnRADIOz() 
{
	// TODO: Add your control notification handler code here
	pen = 1;
}
