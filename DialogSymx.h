#if !defined(AFX_DIALOGSYMX_H__A01916C8_4054_47F8_AD3B_EB2C598A112A__INCLUDED_)
#define AFX_DIALOGSYMX_H__A01916C8_4054_47F8_AD3B_EB2C598A112A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DialogSymx.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DialogSymx dialog

class DialogSymx : public CDialog
{
// Construction
public:
	DialogSymx(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(DialogSymx)
	enum { IDD = IDD_DIALOGSymx };
	double	m_x;
	double	m_y;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DialogSymx)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DialogSymx)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGSYMX_H__A01916C8_4054_47F8_AD3B_EB2C598A112A__INCLUDED_)
