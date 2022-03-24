// FinalView.h : interface of the CFinalView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_FINALVIEW_H__E94B6A77_9C91_4EAF_A811_C3E17A5C6C4E__INCLUDED_)
#define AFX_FINALVIEW_H__E94B6A77_9C91_4EAF_A811_C3E17A5C6C4E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "AET.h"//������Ч�߱���
#include "Bucket.h"//����Ͱ��
#define Number 3//NΪ�պ϶���ζ������������������Ͷ�ά����Point[N]��


class CFinalView : public CView
{
protected: // create from serialization only
	CFinalView();
	DECLARE_DYNCREATE(CFinalView)

// Attributes
public:
	CFinalDoc* GetDocument();

// Operations
public:
	void PolygonFill();//�ϱ��¿��������
	void CreatBucket();//����Ͱ���Ͱ
	void Et();//����߱�
	void AddEdge(AET *);//���߲���AET��
	void EdgeOrder();//��AET���������
	int choose;


///////////
public:
	//CMyDoc* GetDocument();
	CColorDialog CColor;
	int COLOR;  //��ɫ
	bool up;   //����
	bool sym;  //���Ǳ��
	int flag; //�������
	int xx1,xx2,yy1,yy2,xxx2,yyy2; //��¼�������
	int save[10000][3],count; 
	//DCPoint a, b, c, d;
	int cc;
	int vpoint;
///////////


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFinalView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	void draw_point (int x,int y,int color);
	void ddaline (int x0,int y0,int x1,int y1,int color);
	void Hermite(CDC *pDC);
	void MultiMatrix(int a[4][4],int b[4][2]);
	static void Rotate(int &x0, int &y0, double pointx, double pointy, double angle);
	int *n;
	static void Tri(int x0,int y0,int x1,int y1,int x2,int y2,CDC *pDC);
	static void Rect(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, CDC *pDC);
	static void Circle(int a, int b, int x0, int y0, int color, CDC *pDC);
	int Linef;
	virtual ~CFinalView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	COLORREF GetColor;//��ɫ��
	CPoint Point[7];//��������
	Bucket *HeadB,*CurrentB;//Ͱ��ͷ���͵�ǰ���
	AET E[Number],*HeadE,*CurrentE,*T1,*T2;//��Ч�߱�Ľ��

// Generated message map functions
protected:
	double result[4][2];
	int p2[9][2];
	int p1[9][2];
	//{{AFX_MSG(CFinalView)
	afx_msg void OnLine();
	afx_msg void OnBresenhamCircle();
	afx_msg void OnBresenhamEllipse();
	afx_msg void OnRectangle();
	afx_msg void OnPolygon();
	afx_msg void OnArc();
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnTranslation();
	afx_msg void OnRatio();
	afx_msg void OnShear();
	afx_msg void OnSym();
	afx_msg void OnRotate();
	afx_msg void OnCompTrans();
	afx_msg void OnCompRatio();
	afx_msg void OnCompRotate();
	afx_msg void OnRotatex();
	afx_msg void OnSymx();
	afx_msg void OnSymxx();
	afx_msg void OnBezier1();
	afx_msg void OnBezier2();
	afx_msg void OnBezier3();
	afx_msg void OnBspl();
	afx_msg void OnHermite();
	afx_msg void OnCurvesplicing();
	afx_msg void OnGraphcut();
	afx_msg void OnRefresh();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMenuAET();
	afx_msg void OnMenuDrawPolygon();
	afx_msg void OnCaijian();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in FinalView.cpp
inline CFinalDoc* CFinalView::GetDocument()
   { return (CFinalDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FINALVIEW_H__E94B6A77_9C91_4EAF_A811_C3E17A5C6C4E__INCLUDED_)
