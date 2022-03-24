#if !defined(AFX_DIALOGELLIPSE_H__98155E82_529E_461E_85D7_20FD0AC0A9D4__INCLUDED_)
#define AFX_DIALOGELLIPSE_H__98155E82_529E_461E_85D7_20FD0AC0A9D4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DialogEllipse.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DialogEllipse dialog

class DialogEllipse : public CDialog
{
// Construction
public:
	DialogEllipse(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(DialogEllipse)
	enum { IDD = IDD_DIALOGEllipse };
	int		m_a;
	int		m_b;
	int		m_x;
	int		m_y;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DialogEllipse)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DialogEllipse)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGELLIPSE_H__98155E82_529E_461E_85D7_20FD0AC0A9D4__INCLUDED_)
