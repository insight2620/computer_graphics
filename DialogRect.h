#if !defined(AFX_DIALOGRECT_H__3597EE24_23F2_45AA_ACEE_2F1BA84BB3B3__INCLUDED_)
#define AFX_DIALOGRECT_H__3597EE24_23F2_45AA_ACEE_2F1BA84BB3B3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DialogRect.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DialogRect dialog

class DialogRect : public CDialog
{
// Construction
public:
	DialogRect(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(DialogRect)
	enum { IDD = IDD_DIALOGRect };
	int		m_l;
	int		m_w;
	int		m_x;
	int		m_y;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DialogRect)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DialogRect)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGRECT_H__3597EE24_23F2_45AA_ACEE_2F1BA84BB3B3__INCLUDED_)
