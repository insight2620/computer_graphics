#if !defined(AFX_DIALOGSYM_H__9EE4CCA6_EA15_4A4E_897E_A164CF5C42A3__INCLUDED_)
#define AFX_DIALOGSYM_H__9EE4CCA6_EA15_4A4E_897E_A164CF5C42A3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DialogSym.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DialogSym dialog

class DialogSym : public CDialog
{
// Construction
public:
	int symflag;
	DialogSym(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(DialogSym)
	enum { IDD = IDD_DIALOGSym };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DialogSym)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DialogSym)
	afx_msg void OnRadio1();
	afx_msg void OnRadio2();
	afx_msg void OnRadio3();
	afx_msg void OnRadio4();
	afx_msg void OnRadio5();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGSYM_H__9EE4CCA6_EA15_4A4E_897E_A164CF5C42A3__INCLUDED_)
