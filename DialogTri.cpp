// DialogTri.cpp : implementation file
//

#include "stdafx.h"
#include "Final.h"
#include "DialogTri.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DialogTri dialog


DialogTri::DialogTri(CWnd* pParent /*=NULL*/)
	: CDialog(DialogTri::IDD, pParent)
{
	//{{AFX_DATA_INIT(DialogTri)
	m_x0 = 0;
	m_x1 = 0;
	m_x2 = 0;
	m_y0 = 0;
	m_y1 = 0;
	m_y2 = 0;
	//}}AFX_DATA_INIT
}


void DialogTri::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(DialogTri)
	DDX_Text(pDX, IDC_x0, m_x0);
	DDX_Text(pDX, IDC_x1, m_x1);
	DDX_Text(pDX, IDC_x2, m_x2);
	DDX_Text(pDX, IDC_y0, m_y0);
	DDX_Text(pDX, IDC_y1, m_y1);
	DDX_Text(pDX, IDC_y2, m_y2);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(DialogTri, CDialog)
	//{{AFX_MSG_MAP(DialogTri)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DialogTri message handlers
