// FinalDoc.h : interface of the CFinalDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_FINALDOC_H__4AF29BF9_6F2B_4FE3_AD8B_024A4CB0F1A6__INCLUDED_)
#define AFX_FINALDOC_H__4AF29BF9_6F2B_4FE3_AD8B_024A4CB0F1A6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CFinalDoc : public CDocument
{
protected: // create from serialization only
	CFinalDoc();
	DECLARE_DYNCREATE(CFinalDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFinalDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CFinalDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CFinalDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FINALDOC_H__4AF29BF9_6F2B_4FE3_AD8B_024A4CB0F1A6__INCLUDED_)
