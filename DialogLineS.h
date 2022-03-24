#if !defined(AFX_DIALOGLINES_H__BC47A46B_F220_4B4B_9143_57133CE9F06E__INCLUDED_)
#define AFX_DIALOGLINES_H__BC47A46B_F220_4B4B_9143_57133CE9F06E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DialogLineS.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DialogLineS dialog

class DialogLineS : public CDialog
{
// Construction
public:
	int Lineflag;
	DialogLineS(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(DialogLineS)
	enum { IDD = IDD_DIALOGLineS };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DialogLineS)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DialogLineS)
	afx_msg void OnRadio1();
	afx_msg void OnRadio2();
	afx_msg void OnRadio3();
	afx_msg void OnRadio4();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGLINES_H__BC47A46B_F220_4B4B_9143_57133CE9F06E__INCLUDED_)
