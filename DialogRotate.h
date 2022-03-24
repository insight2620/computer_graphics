#if !defined(AFX_DIALOGROTATE_H__4271D8B0_5DC3_4F8A_AFFB_899E7AAB177B__INCLUDED_)
#define AFX_DIALOGROTATE_H__4271D8B0_5DC3_4F8A_AFFB_899E7AAB177B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DialogRotate.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// DialogRotate dialog

class DialogRotate : public CDialog
{
// Construction
public:
	DialogRotate(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(DialogRotate)
	enum { IDD = IDD_DIALOGRotate };
	double	m_angle;
	int		m_x;
	int		m_y;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(DialogRotate)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(DialogRotate)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGROTATE_H__4271D8B0_5DC3_4F8A_AFFB_899E7AAB177B__INCLUDED_)
