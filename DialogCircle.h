#if !defined(AFX_DIALOGCIRCLE_H__C94D75B0_6B72_4048_A44F_21E1C571741B__INCLUDED_)
#define AFX_DIALOGCIRCLE_H__C94D75B0_6B72_4048_A44F_21E1C571741B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DialogCircle.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DialogCircle dialog

class DialogCircle : public CDialog
{
// Construction
public:
	DialogCircle(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(DialogCircle)
	enum { IDD = IDD_DialogCircle };
	int		m_r;
	int		m_x;
	int		m_y;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DialogCircle)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DialogCircle)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGCIRCLE_H__C94D75B0_6B72_4048_A44F_21E1C571741B__INCLUDED_)
