#if !defined(AFX_DIALOGTRANS_H__B3C15219_4964_45A2_AD51_4A3C1D839A14__INCLUDED_)
#define AFX_DIALOGTRANS_H__B3C15219_4964_45A2_AD51_4A3C1D839A14__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DialogTrans.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DialogTrans dialog

class DialogTrans : public CDialog
{
// Construction
public:
	DialogTrans(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(DialogTrans)
	enum { IDD = IDD_DIALOGTrans };
	int		m_dx;
	int		m_dy;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DialogTrans)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DialogTrans)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGTRANS_H__B3C15219_4964_45A2_AD51_4A3C1D839A14__INCLUDED_)
