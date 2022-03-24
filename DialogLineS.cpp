// DialogLineS.cpp : implementation file
//

#include "stdafx.h"
#include "Final.h"
#include "DialogLineS.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// DialogLineS dialog


DialogLineS::DialogLineS(CWnd* pParent /*=NULL*/)
	: CDialog(DialogLineS::IDD, pParent)
{
	//{{AFX_DATA_INIT(DialogLineS)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void DialogLineS::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(DialogLineS)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(DialogLineS, CDialog)
	//{{AFX_MSG_MAP(DialogLineS)
	ON_BN_CLICKED(IDC_RADIO1, OnRadio1)
	ON_BN_CLICKED(IDC_RADIO2, OnRadio2)
	ON_BN_CLICKED(IDC_RADIO3, OnRadio3)
	ON_BN_CLICKED(IDC_RADIO4, OnRadio4)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// DialogLineS message handlers

void DialogLineS::OnRadio1() 
{
	// TODO: Add your control notification handler code here
	Lineflag = 1;
}

void DialogLineS::OnRadio2() 
{
	// TODO: Add your control notification handler code here
	Lineflag = 2;
}

void DialogLineS::OnRadio3() 
{
	// TODO: Add your control notification handler code here
	Lineflag = 3;
}

void DialogLineS::OnRadio4() 
{
	// TODO: Add your control notification handler code here
	Lineflag = 4;
}
