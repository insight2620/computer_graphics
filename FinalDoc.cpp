// FinalDoc.cpp : implementation of the CFinalDoc class
//

#include "stdafx.h"
#include "Final.h"

#include "FinalDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CFinalDoc

IMPLEMENT_DYNCREATE(CFinalDoc, CDocument)

BEGIN_MESSAGE_MAP(CFinalDoc, CDocument)
	//{{AFX_MSG_MAP(CFinalDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CFinalDoc construction/destruction

CFinalDoc::CFinalDoc()
{
	// TODO: add one-time construction code here

}

CFinalDoc::~CFinalDoc()
{
}

BOOL CFinalDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CFinalDoc serialization

void CFinalDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CFinalDoc diagnostics

#ifdef _DEBUG
void CFinalDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CFinalDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CFinalDoc commands
