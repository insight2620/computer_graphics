#if !defined(AFX_DIALOGLINE_H__7A8E58D0_4276_4274_9A5B_556644260424__INCLUDED_)
#define AFX_DIALOGLINE_H__7A8E58D0_4276_4274_9A5B_556644260424__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DialogLine.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DialogLine dialog

class DialogLine : public CDialog
{
// Construction
public:
	DialogLine(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(DialogLine)
	enum { IDD = IDD_DIALOGLine };
	int		m_x0;
	int		m_x1;
	int		m_y0;
	int		m_y1;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DialogLine)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DialogLine)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGLINE_H__7A8E58D0_4276_4274_9A5B_556644260424__INCLUDED_)
