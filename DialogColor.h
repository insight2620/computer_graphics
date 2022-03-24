#if !defined(AFX_DIALOGCOLOR_H__C0F259C9_2CF9_44FE_93FA_8CB201CF5D04__INCLUDED_)
#define AFX_DIALOGCOLOR_H__C0F259C9_2CF9_44FE_93FA_8CB201CF5D04__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DialogColor.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DialogColor dialog

class DialogColor : public CDialog
{
// Construction
public:
	DialogColor(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(DialogColor)
	enum { IDD = IDD_DIALOG1 };
	int		m_color;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DialogColor)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DialogColor)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGCOLOR_H__C0F259C9_2CF9_44FE_93FA_8CB201CF5D04__INCLUDED_)
