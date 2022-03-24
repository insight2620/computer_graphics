#if !defined(AFX_DIALOGPEN_H__3F40BE45_97FA_45D4_A930_09738CB66CC5__INCLUDED_)
#define AFX_DIALOGPEN_H__3F40BE45_97FA_45D4_A930_09738CB66CC5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DialogPen.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DialogPen dialog

class DialogPen : public CDialog
{
// Construction
public:
	int pen;
	DialogPen(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(DialogPen)
	enum { IDD = IDD_DIALOGPen };
	int		m_color;
	int		m_wid;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DialogPen)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DialogPen)
	afx_msg void OnRADIOx();
	afx_msg void OnRADIOz();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGPEN_H__3F40BE45_97FA_45D4_A930_09738CB66CC5__INCLUDED_)
