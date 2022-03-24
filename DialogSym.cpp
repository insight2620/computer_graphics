// DialogSym.cpp : implementation file
//

#include "stdafx.h"
#include "Final.h"
#include "DialogSym.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DialogSym dialog


DialogSym::DialogSym(CWnd* pParent /*=NULL*/)
	: CDialog(DialogSym::IDD, pParent)
{
	//{{AFX_DATA_INIT(DialogSym)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void DialogSym::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(DialogSym)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(DialogSym, CDialog)
	//{{AFX_MSG_MAP(DialogSym)
	ON_BN_CLICKED(IDC_RADIO1, OnRadio1)
	ON_BN_CLICKED(IDC_RADIO2, OnRadio2)
	ON_BN_CLICKED(IDC_RADIO3, OnRadio3)
	ON_BN_CLICKED(IDC_RADIO4, OnRadio4)
	ON_BN_CLICKED(IDC_RADIO5, OnRadio5)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DialogSym message handlers

void DialogSym::OnRadio1() 
{
	// TODO: Add your control notification handler code here
	symflag = 1;
}

void DialogSym::OnRadio2() 
{
	// TODO: Add your control notification handler code here
	symflag = 2;
}

void DialogSym::OnRadio3() 
{
	// TODO: Add your control notification handler code here
	symflag = 3;
}

void DialogSym::OnRadio4() 
{
	// TODO: Add your control notification handler code here
	symflag = 4;
}

void DialogSym::OnRadio5() 
{
	// TODO: Add your control notification handler code here
	symflag = 5;
}
