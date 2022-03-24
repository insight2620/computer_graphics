#if !defined(AFX_DIALOGTRI_H__5F57B26A_602A_43CC_9B3B_CFD6D0C7880C__INCLUDED_)
#define AFX_DIALOGTRI_H__5F57B26A_602A_43CC_9B3B_CFD6D0C7880C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DialogTri.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DialogTri dialog

class DialogTri : public CDialog
{
// Construction
public:
	DialogTri(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(DialogTri)
	enum { IDD = IDD_DIALOGTri };
	int		m_x0;
	int		m_x1;
	int		m_x2;
	int		m_y0;
	int		m_y1;
	int		m_y2;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DialogTri)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DialogTri)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGTRI_H__5F57B26A_602A_43CC_9B3B_CFD6D0C7880C__INCLUDED_)
