#if !defined(AFX_DIALOGSHARE_H__09BA59A3_049A_4603_A7F6_3DDC289A3F44__INCLUDED_)
#define AFX_DIALOGSHARE_H__09BA59A3_049A_4603_A7F6_3DDC289A3F44__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DialogShare.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DialogShare dialog

class DialogShare : public CDialog
{
// Construction
public:
	DialogShare(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(DialogShare)
	enum { IDD = IDD_DIALOGShare };
	double	m_b;
	double	m_c;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DialogShare)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DialogShare)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGSHARE_H__09BA59A3_049A_4603_A7F6_3DDC289A3F44__INCLUDED_)
