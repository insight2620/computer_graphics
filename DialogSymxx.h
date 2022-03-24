#if !defined(AFX_DIALOGSYMXX_H__6CA07EDB_6B19_41A0_9E81_9B490421A233__INCLUDED_)
#define AFX_DIALOGSYMXX_H__6CA07EDB_6B19_41A0_9E81_9B490421A233__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DialogSymxx.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DialogSymxx dialog

class DialogSymxx : public CDialog
{
// Construction
public:
	DialogSymxx(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(DialogSymxx)
	enum { IDD = IDD_DIALOGSymxx };
	double	m_A;
	double	m_B;
	double	m_C;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DialogSymxx)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DialogSymxx)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGSYMXX_H__6CA07EDB_6B19_41A0_9E81_9B490421A233__INCLUDED_)
