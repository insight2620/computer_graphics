#if !defined(AFX_DIALOGBEZIER3_H__D65C021B_E64B_413C_8D80_67A107B4C704__INCLUDED_)
#define AFX_DIALOGBEZIER3_H__D65C021B_E64B_413C_8D80_67A107B4C704__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DialogBezier3.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DialogBezier3 dialog

class DialogBezier3 : public CDialog
{
// Construction
public:
	DialogBezier3(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(DialogBezier3)
	enum { IDD = IDD_DIALOGBezier3 };
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
	//{{AFX_VIRTUAL(DialogBezier3)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DialogBezier3)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGBEZIER3_H__D65C021B_E64B_413C_8D80_67A107B4C704__INCLUDED_)
