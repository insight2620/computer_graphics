#if !defined(AFX_DIALOGRATIO1_H__524CB172_D5C1_408E_9EE8_10C93EF43FCD__INCLUDED_)
#define AFX_DIALOGRATIO1_H__524CB172_D5C1_408E_9EE8_10C93EF43FCD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DialogRatio1.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DialogRatio1 dialog

class DialogRatio1 : public CDialog
{
// Construction
public:
	DialogRatio1(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(DialogRatio1)
	enum { IDD = IDD_DIALOGRatio };
	double	m_dx;
	double	m_dy;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DialogRatio1)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DialogRatio1)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGRATIO1_H__524CB172_D5C1_408E_9EE8_10C93EF43FCD__INCLUDED_)
