#if !defined(AFX_DIALOGPOLY_H__115DDD9B_8029_46F8_A4FC_86A4DB168E73__INCLUDED_)
#define AFX_DIALOGPOLY_H__115DDD9B_8029_46F8_A4FC_86A4DB168E73__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DialogPoly.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DialogPoly dialog

class DialogPoly : public CDialog
{
// Construction
public:
	DialogPoly(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(DialogPoly)
	enum { IDD = IDD_DIALOGPoly };
	CString	m_str;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DialogPoly)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DialogPoly)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGPOLY_H__115DDD9B_8029_46F8_A4FC_86A4DB168E73__INCLUDED_)
