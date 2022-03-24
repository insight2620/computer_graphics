// DialogRotate.cpp : implementation file
//

#include "stdafx.h"
#include "Final.h"
#include "DialogRotate.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DialogRotate dialog


DialogRotate::DialogRotate(CWnd* pParent /*=NULL*/)
	: CDialog(DialogRotate::IDD, pParent)
{
	//{{AFX_DATA_INIT(DialogRotate)
	m_angle = 0.0;
	m_x = 0;
	m_y = 0;
	//}}AFX_DATA_INIT
}


void DialogRotate::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(DialogRotate)
	DDX_Text(pDX, IDC_angle, m_angle);
	DDX_Text(pDX, IDC_x, m_x);
	DDX_Text(pDX, IDC_y, m_y);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(DialogRotate, CDialog)
	//{{AFX_MSG_MAP(DialogRotate)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DialogRotate message handlers
