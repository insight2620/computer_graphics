#if !defined(AFX_DIALOGARC_H__FA1EFA54_EBEB_456A_A5D2_56C1857D621D__INCLUDED_)
#define AFX_DIALOGARC_H__FA1EFA54_EBEB_456A_A5D2_56C1857D621D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DialogArc.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DialogArc dialog

class DialogArc : public CDialog
{
// Construction
public:
	DialogArc(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(DialogArc)
	enum { IDD = IDD_DIALOGArc };
	int		m_x0;
	int		m_x1;
	int		m_x2;
	int		m_x3;
	int		m_y0;
	int		m_y1;
	int		m_y2;
	int		m_y3;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DialogArc)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DialogArc)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGARC_H__FA1EFA54_EBEB_456A_A5D2_56C1857D621D__INCLUDED_)
