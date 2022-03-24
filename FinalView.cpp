// FinalView.cpp : implementation of the CFinalView class

#include "stdafx.h"
#include "Final.h"
#include "FinalDoc.h"
#include "FinalView.h"
#include "Dialogline.h"
#include "DialogLineS.h"
#include "DialogPen.h"
#include "DialogCircle.h"
#include "DialogEllipse.h"
#include "DialogRect.h"
#include "DialogPoly.h"
#include "DialogArc.h"
#include "DialogTri.h"
#include "DialogTrans.h"
#include "DialogRatio1.h"
#include "DialogShare.h"
#include "DialogSym.h"
#include "DialogRotate.h"
#include "DialogSymx.h"
#include "DialogSymxx.h"
#include "DialogBezier3.h"
#include "DialogColor.h"
#include <math.h>
#include <string>
#include <malloc.h>

#define ROUND(a) int(a+0.5)
using namespace std;
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

int Flag = 0;
CPoint spt[7],s_point;
/////////////////////////////////////////////////////////////////////////////

IMPLEMENT_DYNCREATE(CFinalView, CView)

BEGIN_MESSAGE_MAP(CFinalView, CView)
	//{{AFX_MSG_MAP(CFinalView)
	ON_COMMAND(ID_Line, OnLine)
	ON_COMMAND(ID_BresenhamCircle, OnBresenhamCircle)
	ON_COMMAND(ID_BresenhamEllipse, OnBresenhamEllipse)
	ON_COMMAND(ID_Rectangle, OnRectangle)
	ON_COMMAND(ID_Polygon, OnPolygon)
	ON_COMMAND(ID_Arc, OnArc)
	ON_WM_RBUTTONDOWN()
	ON_COMMAND(ID_Translation, OnTranslation)
	ON_COMMAND(ID_Ratio, OnRatio)
	ON_COMMAND(ID_Shear, OnShear)
	ON_COMMAND(ID_Sym, OnSym)
	ON_COMMAND(ID_Rotate, OnRotate)
	ON_COMMAND(ID_CompTrans, OnCompTrans)
	ON_COMMAND(ID_CompRatio, OnCompRatio)
	ON_COMMAND(ID_CompRotate, OnCompRotate)
	ON_COMMAND(ID_Rotatex, OnRotatex)
	ON_COMMAND(ID_Symx, OnSymx)
	ON_COMMAND(ID_Symxx, OnSymxx)
	ON_COMMAND(ID_Bezier1, OnBezier1)
	ON_COMMAND(ID_Bezier2, OnBezier2)
	ON_COMMAND(ID_Bezier3, OnBezier3)
	ON_COMMAND(ID_Bspl, OnBspl)
	ON_COMMAND(ID_Hermite, OnHermite)
	ON_COMMAND(ID_Curvesplicing, OnCurvesplicing)
	ON_COMMAND(ID_Graphcut, OnGraphcut)
	ON_COMMAND(ID_Refresh, OnRefresh)
	ON_WM_LBUTTONDOWN()
	ON_COMMAND(ID_MENUITEM32802, OnMenuAET)
	ON_COMMAND(ID_MENUITEM32803, OnMenuDrawPolygon)
	ON_COMMAND(ID_CAIJIAN, OnCaijian)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CFinalView construction/destruction

CFinalView::CFinalView()
{
	// TODO: add construction code here
	//多边形端点坐标
	   Point[0]=CPoint(600,100);//P0
	   Point[1]=CPoint(800,600);//P1
	   Point[2]=CPoint(550,500);//P2
}

CFinalView::~CFinalView()
{
}

BOOL CFinalView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs
	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CFinalView drawing

void CFinalView::OnDraw(CDC* pDC)
{
	CFinalDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	if(choose==1) 
	{
		pDC->Polygon(Point,3);//绘制多边形
	}
	if (!pDoc)
		return;
	CRect rectClient;
	GetClientRect(rectClient);
	pDC->SetMapMode(MM_ISOTROPIC);
	pDC->SetWindowExt(2000,1000);
	pDC->SetViewportExt(rectClient.right,-rectClient.bottom);
	pDC->SetViewportOrg(rectClient.right/2,rectClient.bottom/2);

	pDC->MoveTo(-1000,0);
	pDC->LineTo(1000,0);
	pDC->LineTo(985,15);
	pDC->MoveTo(1000,0);
	pDC->LineTo(985,-15);
	int i;
	for(i=-10;i<=10;i++)
	{
	pDC->MoveTo(100*i,-10);
	pDC->LineTo(100*i,10);
	CString Str;
	Str.Format(_T("%d"),i);

		if(i!=0)
		{
			pDC->TextOut(100*i-10,-10,Str);
		}
	}
	pDC->MoveTo(0,-500);
	pDC->LineTo(0,500);
	pDC->LineTo(-15,485);
	pDC->MoveTo(0,500);
	pDC->LineTo(15,485);
	for(i=-5;i<=5;i++)
	{
	pDC->MoveTo(-5,100*i);
	pDC->LineTo(5,100*i);
	CString Str;
	Str.Format(_T("%d"),i);
	pDC->TextOut(-20,100*i-5,Str);
	}
	pDC->TextOut(980,-40,_T("X"));
	pDC->TextOut(-40,490,_T("Y"));

}

/////////////////////////////////////////////////////////////////////////////
// CFinalView printing

BOOL CFinalView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CFinalView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CFinalView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CFinalView diagnostics

#ifdef _DEBUG
void CFinalView::AssertValid() const
{
	CView::AssertValid();
}

void CFinalView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CFinalDoc* CFinalView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CFinalDoc)));
	return (CFinalDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CFinalView message handlers

void CFinalView::OnLine() //画直线
{
	// TODO: Add your command handler code here
	CDC *pDC = GetDC();
	CRect rectClient;
	GetClientRect(rectClient);
	pDC->SetMapMode(MM_ISOTROPIC);
	pDC->SetWindowExt(2000,1000);
	pDC->SetViewportExt(rectClient.right,-rectClient.bottom);
	pDC->SetViewportOrg(rectClient.right/2,rectClient.bottom/2);
	DialogLineS dlg;
	int x0,y0,x1,y1;
	if(dlg.DoModal())
	{
		Linef = dlg.Lineflag;
	}
	DialogLine dlg1;
	if(dlg1.DoModal())
	{
		x0 = dlg1.m_x0 * 100;
		y0 = dlg1.m_y0 * 100;
		x1 = dlg1.m_x1 * 100;
		y1 = dlg1.m_y1 * 100;
	}
	if(Linef == 1)
	{
		int dx,dy,d,UpIncre,DownIncre,x,y;
		if(x0>x1)
		{
			x=x1;x1=x0;x0=x;
			y=y1;y1=y0;y0=y;
		}
		x=x0;	y=y0;
		dx=x1-x0;	dy=y1-y0;	d=dx-2*dy;
		UpIncre = 2*dx - 2*dy;	DownIncre = -2*dy;
		while(x<=x1)
		{
			pDC->SetPixel(x,y,RGB(15,100,255));
			x++;
			if(d<0)
			{
				y++;
				d+=UpIncre;
			}
			else
			{
				d+=DownIncre;
			}
		}
	}
	else if(Linef == 2)
	{
		pDC->MoveTo(x0,y0);
		pDC->LineTo(x1,y1);
	}
	else if(Linef == 3)
	{
		int dx,dy,epsl,k;
		float x,y,xIncre,yIncre;
		dx = x1 - x0;
		dy = y1 - y0;
		x = x0;
		y = y0;
		if(abs(dx)>abs(dy))	epsl = abs(dx);
		else	epsl = abs(dy);
	    xIncre = (float)dx/(float)epsl;
		yIncre = (float)dy/(float)epsl;
	    for(k=0;k<epsl;k++)
		{
			pDC->SetPixel(int(x+0.5),int(y+0.5),RGB(100,100,0));
			x += xIncre;
			y += yIncre;
		}
	}
	else
	{
		int wid,color,x = 1;
		DialogPen dlg2;
		if(dlg2.DoModal())
		{
			wid = dlg2.m_wid;
			color = dlg2.m_color;
			x = dlg2.pen;
		}
		if(x == 1)
		{
			CPen MyPen,*OldPen; 
			MyPen.CreatePen(PS_SOLID,wid,color); 
			OldPen=pDC->SelectObject(&MyPen);
			pDC->MoveTo(x0,y0);
			pDC->LineTo(x1,y1);
			
		}
		else if(x == 2)
		{
			CPen MyPen,*OldPen; 
			MyPen.CreatePen(PS_DASH,wid,color); 
			OldPen=pDC->SelectObject(&MyPen);
			pDC->MoveTo(x0,y0);
			pDC->LineTo(x1,y1);
		}
		
	}

}

void CFinalView::Circle(int a, int b, int x0, int y0, int color, CDC *pDC) 
{
		int x=0,y=b;
		pDC->SetPixel(x0+x,y0+y,color);
		pDC->SetPixel(x0-x,y0+y,color);
		pDC->SetPixel(x0+x,y0-y,color);
		pDC->SetPixel(x0-x,y0-y,color);
 

		double d1=b*b+a*a*(-b+0.25);
		while(b*b*x<a*a*y)
		{
			if(d1<0)
			{
				d1+=b*b*(2*x+3);
				x++;
			}else
			{
				d1+=(b*b*(2*x+3)+a*a*(-2*y+2));
				x++;y--;
			}
 
			pDC->SetPixel(x0+x,y0+y,color);
			pDC->SetPixel(x0-x,y0+y,color);
			pDC->SetPixel(x0+x,y0-y,color);
			pDC->SetPixel(x0-x,y0-y,color);
		}
		double d2=sqrt((double)b*(x+0.5))+sqrt((double)a*(y-1))-sqrt((double)a*b);
		while(y>0)
		{
			if(d2<0)
			{
				d2+=b*b*(2*x+2)+a*a*(-2*y+3);
				x++;y--;
			}else
			{
				d2+=a*a*(-2*y+3);
				y--;
			}
			pDC->SetPixel(x0+x,y0+y,color);
			pDC->SetPixel(x0-x,y0+y,color);
			pDC->SetPixel(x0+x,y0-y,color);
			pDC->SetPixel(x0-x,y0-y,color);
		}
}

void CFinalView::OnBresenhamCircle() //Bresenham画圆
{
	// TODO: Add your command handler code here
	CDC *pDC = GetDC();
	CRect rectClient;
	GetClientRect(rectClient);
	pDC->SetMapMode(MM_ISOTROPIC);
	pDC->SetWindowExt(2000,1000);
	pDC->SetViewportExt(rectClient.right,-rectClient.bottom);
	pDC->SetViewportOrg(rectClient.right/2,rectClient.bottom/2);
	int x,y,r,color=150;
	DialogCircle dlg;
	if(dlg.DoModal())
	{
		x = dlg.m_x * 100;
		y = dlg.m_y * 100;
		r = dlg.m_r * 100;
	}
	Circle(r,r,x,y,color,pDC);
}

void CFinalView::OnBresenhamEllipse() //Bresenham画椭圆
{
	// TODO: Add your command handler code here
	CDC *pDC = GetDC();
	CRect rectClient;
	GetClientRect(rectClient);
	pDC->SetMapMode(MM_ISOTROPIC);
	pDC->SetWindowExt(2000,1000);
	pDC->SetViewportExt(rectClient.right,-rectClient.bottom);
	pDC->SetViewportOrg(rectClient.right/2,rectClient.bottom/2);
	int x,y,a,b,color=170;
	DialogEllipse dlg;
	if(dlg.DoModal())
	{
		x = dlg.m_x * 100;
		y = dlg.m_y * 100;
		a = dlg.m_a * 100;
		b = dlg.m_b * 100;
	}
	Circle(a,b,x,y,color,pDC);
}

void CFinalView::OnRectangle() //画矩形
{
	// TODO: Add your command handler code here
	CDC *pDC = GetDC();
	CRect rectClient;
	GetClientRect(rectClient);
	pDC->SetMapMode(MM_ISOTROPIC);
	pDC->SetWindowExt(2000,1000);
	pDC->SetViewportExt(rectClient.right,-rectClient.bottom);
	pDC->SetViewportOrg(rectClient.right/2,rectClient.bottom/2);
	int x,y,a,b;
	DialogRect dlg;
	if(dlg.DoModal())
	{
		x = dlg.m_x * 100;
		y = dlg.m_y * 100;
		a = dlg.m_l * 100;
		b = dlg.m_w * 100;
	}
	Rect(x,y,x+a,y,x+a,y+b,x,y+b,pDC);
}

void CFinalView::Rect(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, CDC *pDC)
{
	pDC->MoveTo(x0,y0);
	pDC->LineTo(x1,y1);
	pDC->LineTo(x2,y2);
	pDC->LineTo(x3,y3);
	pDC->LineTo(x0,y0);
}

void CFinalView::OnPolygon() //画多边形
{
	// TODO: Add your command handler code here
	CDC *pDC = GetDC();
	CRect rectClient;
	GetClientRect(rectClient);
	pDC->SetMapMode(MM_ISOTROPIC);
	pDC->SetWindowExt(2000,1000);
	pDC->SetViewportExt(rectClient.right,-rectClient.bottom);
	pDC->SetViewportOrg(rectClient.right/2,rectClient.bottom/2);
	string str;
	DialogPoly dlg;
	if(dlg.DoModal())
	{
		str = dlg.m_str;
	}
	int flag = 1,temp[2],m0,n0;
	for(int i=0;i<str.length();i++)
	{
		if(str[i] == ',' && flag == 1)
		{
			temp[0] = (str[i-1] - '0')*100;
			if(str[i+1] == '-')
				temp[1] = (str[i+2] - '0') * -100;
			else
				temp[1] = (str[i+1] - '0') * 100;
			if(str[i-2] == '-')
				temp[0] *= -1;
			m0 = temp[0];
			n0 = temp[1];
			pDC->MoveTo(temp[0],temp[1]);
			flag--;
			continue;
		}
		if(str[i] == ',' && flag == 0)
		{
			temp[0] = (str[i-1] - '0')*100;
			if(str[i+1] == '-')
				temp[1] = (str[i+2] - '0') * -100;
			else
				temp[1] = (str[i+1] - '0') * 100;
			if(str[i-2] == '-')
				temp[0] *= -1;
			pDC->LineTo(temp[0],temp[1]);
		}
	}
	pDC->LineTo(m0,n0);
}

void CFinalView::OnArc() //圆弧
{
	// TODO: Add your command handler code here
	CDC *pDC = GetDC();
	CRect rectClient;
	GetClientRect(rectClient);
	pDC->SetMapMode(MM_ISOTROPIC);
	pDC->SetWindowExt(2000,1000);
	pDC->SetViewportExt(rectClient.right,-rectClient.bottom);
	pDC->SetViewportOrg(rectClient.right/2,rectClient.bottom/2);

	CPen MyPen,*OldPen; 
	int color = RGB(255,125,0);
	MyPen.CreatePen(PS_SOLID,3,color); 
	OldPen=pDC->SelectObject(&MyPen);

	int x0,y0,x1,y1,x2,y2,x3,y3;
	DialogArc dlg;
	if(dlg.DoModal())
	{
		x0 = dlg.m_x0 * 100;
		x1 = dlg.m_x1 * 100;
		x2 = dlg.m_x2 * 100;
		x3 = dlg.m_x3 * 100;
		y0 = dlg.m_y0 * 100;
		y1 = dlg.m_y1 * 100;
		y2 = dlg.m_y2 * 100;
		y3 = dlg.m_y3 * 100;
	}
	pDC->Arc(x0,y0,x1,y1,x2,y2,x3,y3);
}

void CFinalView::OnRButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CDC *pDC = GetDC();
	CRect rectClient;
	GetClientRect(rectClient);
	pDC->SetMapMode(MM_ISOTROPIC);
	pDC->SetWindowExt(2000,1000);
	pDC->SetViewportExt(rectClient.right,-rectClient.bottom);
	pDC->SetViewportOrg(rectClient.right/2,rectClient.bottom/2);

	n = (int *)malloc(sizeof(int)*6);
	DialogTri dlg;
	if(dlg.DoModal())
	{
		n[0] = dlg.m_x0 * 100;
		n[2] = dlg.m_x1 * 100;
		n[4] = dlg.m_x2 * 100;
		n[1] = dlg.m_y0 * 100;
		n[3] = dlg.m_y1 * 100;
		n[5] = dlg.m_y2 * 100;
	}
	Tri(n[0],n[1],n[2],n[3],n[4],n[5],pDC);	
	CView::OnRButtonDown(nFlags, point);
}

void CFinalView::Tri(int x0, int y0, int x1, int y1, int x2, int y2, CDC *pDC)
{
	pDC->MoveTo(x0,y0);
	pDC->LineTo(x1,y1);
	pDC->LineTo(x2,y2);
	pDC->LineTo(x0,y0);
}

void CFinalView::OnTranslation()  //转换
{
	// TODO: Add your command handler code here
	CDC *pDC = GetDC();
	CRect rectClient;
	GetClientRect(rectClient);
	pDC->SetMapMode(MM_ISOTROPIC);
	pDC->SetWindowExt(2000,1000);
	pDC->SetViewportExt(rectClient.right,-rectClient.bottom);
	pDC->SetViewportOrg(rectClient.right/2,rectClient.bottom/2);

	CPen MyPen,*OldPen; 
	int color = RGB(255,0,0);
	MyPen.CreatePen(PS_SOLID,3,color); 
	OldPen=pDC->SelectObject(&MyPen);
	
	int dx,dy,i;
	DialogTrans dlg;
	if(dlg.DoModal())
	{
		dx = dlg.m_dx * 100;
		dy = dlg.m_dy * 100;
	}
	for(i=0;i<6;i++)
	{
		if(i % 2 == 0)
			n[i] += dx;
		else
			n[i] += dy;
	}
	Tri(n[0],n[1],n[2],n[3],n[4],n[5],pDC);
	for(i=0;i<6;i++)
	{
		if(i % 2 == 0)
			n[i] -= dx;
		else
			n[i] -= dy;
	}
}

void CFinalView::OnRatio() 
{
	// TODO: Add your command handler code here
	CDC *pDC = GetDC();
	CRect rectClient;
	GetClientRect(rectClient);
	pDC->SetMapMode(MM_ISOTROPIC);
	pDC->SetWindowExt(2000,1000);
	pDC->SetViewportExt(rectClient.right,-rectClient.bottom);
	pDC->SetViewportOrg(rectClient.right/2,rectClient.bottom/2);

	CPen MyPen,*OldPen;
	int color = RGB(125,125,0);
	MyPen.CreatePen(PS_SOLID,3,color); 
	OldPen=pDC->SelectObject(&MyPen);

	double dx,dy;
	DialogRatio1 dlg;
	if(dlg.DoModal())
	{
		dx = dlg.m_dx;
		dy = dlg.m_dy;
	}
	double tx,ty;
	tx = (n[0] + n[2] + n[4]) * (dx - 1)/3;
	ty = (n[1] + n[3] + n[5]) * (dy - 1)/3;
	Tri(n[0]*dx-tx,n[1]*dy-ty,n[2]*dx-tx,n[3]*dy-ty,n[4]*dx-tx,n[5]*dy-ty,pDC);
}

void CFinalView::OnShear() 
{
	// TODO: Add your command handler code here
	CDC *pDC = GetDC();
	CRect rectClient;
	GetClientRect(rectClient);
	pDC->SetMapMode(MM_ISOTROPIC);
	pDC->SetWindowExt(2000,1000);
	pDC->SetViewportExt(rectClient.right,-rectClient.bottom);
	pDC->SetViewportOrg(rectClient.right/2,rectClient.bottom/2);

	CPen MyPen,*OldPen; 
	int color = RGB(0,0,255);
	MyPen.CreatePen(PS_SOLID,3,color); 
	OldPen=pDC->SelectObject(&MyPen);

	double b,c;
	DialogShare dlg;
	if(dlg.DoModal())
	{
		b = dlg.m_b;
		c = dlg.m_c;
	}
	int i,t[6];
	for(i=0;i<6;i++)
	{
		if(i%2 == 0)
		{
			t[i] = n[i] + c*n[i+1];
		}
		else
		{
			t[i] = b*n[i-1] + n[i];
		}
	}
	double tx,ty;
	tx = ((n[0] + n[2] + n[4]) - (t[0] + t[2] + t[4]))/3;
	ty = ((n[1] + n[3] + n[5]) - (t[1] + t[3] + t[5]))/3;
	Tri(t[0]+tx,t[1]+ty,t[2]+tx,t[3]+ty,t[4]+tx,t[5]+ty,pDC);
}

void CFinalView::OnSym() 
{
	// TODO: Add your command handler code here
	CDC *pDC = GetDC();
	CRect rectClient;
	GetClientRect(rectClient);
	pDC->SetMapMode(MM_ISOTROPIC);
	pDC->SetWindowExt(2000,1000);
	pDC->SetViewportExt(rectClient.right,-rectClient.bottom);
	pDC->SetViewportOrg(rectClient.right/2,rectClient.bottom/2);

	CPen MyPen,*OldPen;
	int color = RGB(0,125,125);
	MyPen.CreatePen(PS_SOLID,3,color); 
	OldPen=pDC->SelectObject(&MyPen);

	int sym;
	DialogSym dlg;
	if(dlg.DoModal())
	{
		sym = dlg.symflag;
	}
	int i,t[6];
	for(i=0;i<6;i++)
	{
		t[i] = n[i];
	}
	if(sym == 1)
	{
		for(i=0;i<6;i++)
			if(i%2 != 0)
				t[i] *= -1;
	}
	else if(sym == 2)
	{
		for(i=0;i<6;i++)
			if(i%2 == 0)
				t[i] *= -1;
	}
	else if(sym = 3)
	{
		for(i=0;i<6;i++)
			t[i] *= -1;
	}
	else if(sym = 4)
	{
		for(int i=0;i<6;i+=2)
			swap(t[i],t[i+1]);
	}
	else
	{
		for(int i=0;i<6;i+=2)
			swap(t[i],t[i+1]);
		for(i=0;i<6;i++)
			t[i] *= -1;
	}
	Tri(t[0],t[1],t[2],t[3],t[4],t[5],pDC);
}

void CFinalView::Rotate(int &x0, int &y0, double pointx, double pointy, double angle)
{
	double xx0,yy0,valuex,valuey;
	valuex = x0;
	valuey = y0;
	xx0 = (valuex-pointx)*cos(angle) + (valuey-pointy)*sin(angle) + pointx;
 	yy0 = (valuey-pointy)*cos(angle) - (valuex-pointx)*sin(angle) + pointy;
	x0 = (int)(xx0+0.5);
	y0 = (int)(yy0+0.5);
}

void CFinalView::OnRotate() 
{
	// TODO: Add your command handler code here
	CDC *pDC = GetDC();
	CRect rectClient;
	GetClientRect(rectClient);
	pDC->SetMapMode(MM_ISOTROPIC);
	pDC->SetWindowExt(2000,1000);
	pDC->SetViewportExt(rectClient.right,-rectClient.bottom);
	pDC->SetViewportOrg(rectClient.right/2,rectClient.bottom/2);

	CPen MyPen,*OldPen; 
	MyPen.CreatePen(PS_SOLID,3,RGB(0,255,0)); 
	OldPen=pDC->SelectObject(&MyPen);

	double angle,pointx,pointy;
	DialogRotate dlg;
	if(dlg.DoModal())
	{
		angle = (360-dlg.m_angle)*3.1415926/180;
		pointx = dlg.m_x * 100;
		pointy = dlg.m_y * 100;
	}
	int t[6],i;
	for(i=0;i<6;i++)
		t[i] = n[i];
	for(i=0;i<6;i+=2)
		Rotate(t[i],t[i+1],pointx,pointy,angle);
	Tri(t[0],t[1],t[2],t[3],t[4],t[5],pDC);
}

void CFinalView::OnCompTrans() 
{
	// TODO: Add your command handler code here
	CDC *pDC = GetDC();
	CRect rectClient;
	GetClientRect(rectClient);
	pDC->SetMapMode(MM_ISOTROPIC);
	pDC->SetWindowExt(2000,1000);
	pDC->SetViewportExt(rectClient.right,-rectClient.bottom);
	pDC->SetViewportOrg(rectClient.right/2,rectClient.bottom/2);

	CPen MyPen,*OldPen; 
	int color = RGB(125,0,60);
	MyPen.CreatePen(PS_SOLID,3,color); 
	OldPen=pDC->SelectObject(&MyPen);

	int dx,dy,i,t[6];
	for(i=0;i<6;i++)
		t[i] = n[i];
	DialogTrans dlg,dlg1;
	if(dlg.DoModal())
	{
		dx = dlg.m_dx * 100;
		dy = dlg.m_dy * 100;
	}
	for(i=0;i<6;i++)
	{
		if(i % 2 == 0)
			t[i] += dx;
		else
			t[i] += dy;
	}
	Tri(t[0],t[1],t[2],t[3],t[4],t[5],pDC);
	if(dlg1.DoModal())
	{
		dx = dlg1.m_dx * 100;
		dy = dlg1.m_dy * 100;
	}
	for(i=0;i<6;i++)
	{
		if(i % 2 == 0)
			t[i] += dx;
		else
			t[i] += dy;
	}
	Tri(t[0],t[1],t[2],t[3],t[4],t[5],pDC);
}

void CFinalView::OnCompRatio() 
{
	// TODO: Add your command handler code here
	CDC *pDC = GetDC();
	CRect rectClient;
	GetClientRect(rectClient);
	pDC->SetMapMode(MM_ISOTROPIC);
	pDC->SetWindowExt(2000,1000);
	pDC->SetViewportExt(rectClient.right,-rectClient.bottom);
	pDC->SetViewportOrg(rectClient.right/2,rectClient.bottom/2);

	CPen MyPen,*OldPen; 
	int color = RGB(125,90,90);
	MyPen.CreatePen(PS_SOLID,3,color); 
	OldPen=pDC->SelectObject(&MyPen);
	
	int t[6],i;
	double tx,ty;
	for(i=0;i<6;i++)
		t[i] = n[i];
	double dx,dy;
	DialogRatio1 dlg,dlg1;
	if(dlg.DoModal())
	{
		dx = dlg.m_dx;
		dy = dlg.m_dy;
	}
	
	tx = (n[0] + n[2] + n[4]) * (dx - 1)/3;
	ty = (n[1] + n[3] + n[5]) * (dy - 1)/3;
	for(i=0;i<6;i++)
	{
		if(i%2 == 0)
			t[i] = t[i]*dx-tx;
		else
			t[i] = t[i]*dy-ty;
	}
	Tri(t[0],t[1],t[2],t[3],t[4],t[5],pDC);
	if(dlg1.DoModal())
	{
		dx = dlg1.m_dx;
		dy = dlg1.m_dy;
	}
	
	tx = (n[0] + n[2] + n[4]) * (dx - 1)/3;
	ty = (n[1] + n[3] + n[5]) * (dy - 1)/3;
	for(i=0;i<6;i++)
	{
		if(i%2 == 0)
			t[i] = t[i]*dx-tx;
		else
			t[i] = t[i]*dy-ty;
	}
	Tri(t[0],t[1],t[2],t[3],t[4],t[5],pDC);
}

void CFinalView::OnCompRotate() 
{
	// TODO: Add your command handler code here
	CDC *pDC = GetDC();
	CRect rectClient;
	GetClientRect(rectClient);
	pDC->SetMapMode(MM_ISOTROPIC);
	pDC->SetWindowExt(2000,1000);
	pDC->SetViewportExt(rectClient.right,-rectClient.bottom);
	pDC->SetViewportOrg(rectClient.right/2,rectClient.bottom/2);

	CPen MyPen,*OldPen; 
	int color = RGB(125,90,150);
	MyPen.CreatePen(PS_SOLID,3,color); 
	OldPen=pDC->SelectObject(&MyPen);

	double angle,pointx,pointy;
	DialogRotate dlg,dlg1;
	if(dlg.DoModal())
	{
		angle = (360-dlg.m_angle)*3.1415926/180;
		pointx = dlg.m_x * 100;
		pointy = dlg.m_y * 100;
	}
	int t[6],i;
	for(i=0;i<6;i++)
		t[i] = n[i];
	for(i=0;i<6;i+=2)
		Rotate(t[i],t[i+1],pointx,pointy,angle);
	Tri(t[0],t[1],t[2],t[3],t[4],t[5],pDC);
	if(dlg1.DoModal())
	{
		angle = (360-dlg1.m_angle)*3.1415926/180;
		pointx = dlg1.m_x * 100;
		pointy = dlg1.m_y * 100;
	}
	for(i=0;i<6;i+=2)
		Rotate(t[i],t[i+1],pointx,pointy,angle);
	Tri(t[0],t[1],t[2],t[3],t[4],t[5],pDC);
}

void CFinalView::OnRotatex() 
{
	// TODO: Add your command handler code here
	CDC *pDC = GetDC();
	CRect rectClient;
	GetClientRect(rectClient);
	pDC->SetMapMode(MM_ISOTROPIC);
	pDC->SetWindowExt(2000,1000);
	pDC->SetViewportExt(rectClient.right,-rectClient.bottom);
	pDC->SetViewportOrg(rectClient.right/2,rectClient.bottom/2);

	CPen MyPen,*OldPen; 
	MyPen.CreatePen(PS_SOLID,3,RGB(0,255,0)); 
	OldPen=pDC->SelectObject(&MyPen);

	double angle,pointx,pointy;
	DialogRotate dlg;
	if(dlg.DoModal())
	{
		angle = (360-dlg.m_angle)*3.1415926/180;
		pointx = dlg.m_x * 100;
		pointy = dlg.m_y * 100;
	}
	int t[6],i;
	for(i=0;i<6;i++)
		t[i] = n[i];
	for(i=0;i<6;i+=2)
		Rotate(t[i],t[i+1],pointx,pointy,angle);
	Tri(t[0],t[1],t[2],t[3],t[4],t[5],pDC);
}



void CFinalView::OnSymx() 
{
	// TODO: Add your command handler code here
	CDC *pDC = GetDC();
	CRect rectClient;
	GetClientRect(rectClient);
	pDC->SetMapMode(MM_ISOTROPIC);
	pDC->SetWindowExt(2000,1000);
	pDC->SetViewportExt(rectClient.right,-rectClient.bottom);
	pDC->SetViewportOrg(rectClient.right/2,rectClient.bottom/2);

	CPen MyPen,*OldPen; 
	MyPen.CreatePen(PS_SOLID,3,RGB(230,255,0)); 
	OldPen=pDC->SelectObject(&MyPen);

	int t[6],i,x,y;
	DialogSymx dlg;
	if(dlg.DoModal())
	{
		x = dlg.m_x * 100;
		y = dlg.m_y * 100;
	}
	for(i=0;i<6;i++)
	{
		if(i%2 == 0)
			t[i] = 2*x - n[i];
		else
			t[i] = 2*y - n[i];
	}
	Tri(t[0],t[1],t[2],t[3],t[4],t[5],pDC);
}

void CFinalView::OnSymxx() 
{
	// TODO: Add your command handler code here
	CDC *pDC = GetDC();
	CRect rectClient;
	GetClientRect(rectClient);
	pDC->SetMapMode(MM_ISOTROPIC);
	pDC->SetWindowExt(2000,1000);
	pDC->SetViewportExt(rectClient.right,-rectClient.bottom);
	pDC->SetViewportOrg(rectClient.right/2,rectClient.bottom/2);

	CPen MyPen,*OldPen; 
	MyPen.CreatePen(PS_SOLID,3,RGB(230,90,0)); 
	OldPen=pDC->SelectObject(&MyPen);

	double A,B,C,temp;
	int t[6],i;
	DialogSymxx dlg;
	if(dlg.DoModal())
	{
		A = dlg.m_A;
		B = dlg.m_B;
		C = dlg.m_C*100;
	}
	pDC->MoveTo((400*B+C)/-A,400);
	pDC->LineTo((-400*B+C)/-A,-400);
	temp = A*A+B*B;
	for(i=0;i<6;i+=2)
	{
		t[i] = ((B*B-A*A)*n[i]-2*A*B*n[i+1]-2*A*C)/temp;
		t[i+1] = ((A*A-B*B)*n[i+1]-2*A*B*n[i]-2*B*C)/temp;
	}
	Tri(t[0],t[1],t[2],t[3],t[4],t[5],pDC);
}

void CFinalView::OnBezier1() 
{
	// TODO: Add your command handler code here
	CDC *pDC = GetDC();
	CRect rectClient;
	GetClientRect(rectClient);
	pDC->SetMapMode(MM_ISOTROPIC);
	pDC->SetWindowExt(2000,1000);
	pDC->SetViewportExt(rectClient.right,-rectClient.bottom);
	pDC->SetViewportOrg(rectClient.right/2,rectClient.bottom/2);


	CPen MyPen,*OldPen; 
	MyPen.CreatePen(PS_SOLID,3,RGB(30,90,30)); 
	OldPen=pDC->SelectObject(&MyPen);

	int x0,x1,y0,y1,x=0;
	DialogLine dlg;
	if(dlg.DoModal())
	{
		x0 = dlg.m_x0 * 100;
		x1 = dlg.m_x1 * 100;
		y0 = dlg.m_y0 * 100;
		y1 = dlg.m_y1 * 100;
	}
	for(double i=0;i<=1;i+=0.001)
	{
		double temp,temp1;
		temp = x0*(1-i)+x1*i;
		temp1 = y0*(1-i)+y1*i;
		pDC->SetPixel(temp,temp1,RGB(255,0,0));
		if(x++ % 10 == 0)
			Sleep(1);
	}
}

void CFinalView::OnBezier2() 
{
	// TODO: Add your command handler code here
	CDC *pDC = GetDC();
	CRect rectClient;
	GetClientRect(rectClient);
	pDC->SetMapMode(MM_ISOTROPIC);
	pDC->SetWindowExt(2000,1000);
	pDC->SetViewportExt(rectClient.right,-rectClient.bottom);
	pDC->SetViewportOrg(rectClient.right/2,rectClient.bottom/2);
	CPen MyPen,*OldPen; 
	MyPen.CreatePen(PS_SOLID,3,RGB(30,90,0)); 
	OldPen=pDC->SelectObject(&MyPen);

	int x0,x1,x2,y0,y1,y2,x=0;
	DialogTri dlg;
	if(dlg.DoModal())
	{
		x0 = dlg.m_x0 * 100;
		x1 = dlg.m_x1 * 100;
		y0 = dlg.m_y0 * 100;
		y1 = dlg.m_y1 * 100;
		x2 = dlg.m_x2 * 100;
		y2 = dlg.m_y2 * 100;
	}
	pDC->MoveTo(x0,y0);
	pDC->LineTo(x1,y1);
	pDC->LineTo(x2,y2);
	for(double i=0;i<=1;i+=0.001)
	{
		double temp,temp1;
		temp = (x2-2*x1+x0)*i*i + 2*(x1-x0)*i + x0;
		temp1 = (y2-2*y1+y0)*i*i + 2*(y1-y0)*i + y0;
		pDC->SetPixel(temp,temp1,RGB(0,0,255));
		if(x++ % 10 == 0)
			Sleep(1);
	}
}

void CFinalView::OnBezier3() 
{
	// TODO: Add your command handler code here
	CDC *pDC = GetDC();
	CRect rectClient;
	GetClientRect(rectClient);
	pDC->SetMapMode(MM_ISOTROPIC);
	pDC->SetWindowExt(2000,1000);
	pDC->SetViewportExt(rectClient.right,-rectClient.bottom);
	pDC->SetViewportOrg(rectClient.right/2,rectClient.bottom/2);

	CPen MyPen,*OldPen; 
	MyPen.CreatePen(PS_SOLID,3,RGB(30,90,30)); 
	OldPen=pDC->SelectObject(&MyPen);

	double x0,y0,x1,y1,x2,y2,x3,y3;
	int flag=0;
	DialogBezier3 dlg;
	if(dlg.DoModal())
	{
		x0 = dlg.m_x0 * 100;
		x1 = dlg.m_x1 * 100;
		x2 = dlg.m_x2 * 100;
		x3 = dlg.m_x3 * 100;
		y0 = dlg.m_y0 * 100;
		y1 = dlg.m_y1 * 100;
		y2 = dlg.m_y2 * 100;
		y3 = dlg.m_y3 * 100;
	}
	pDC->MoveTo(x0,y0);
	pDC->LineTo(x1,y1);
	pDC->LineTo(x2,y2);
	pDC->LineTo(x3,y3);
	for(double i=0;i<=1;i+=0.001)
	{
		double temp,temp1;
		temp = (1-i)*(1-i)*(1-i)*x0+3*i*(1-i)*(1-i)*x1+3*i*i*(1-i)*x2+i*i*i*x3;
		temp1 = (1-i)*(1-i)*(1-i)*y0+3*i*(1-i)*(1-i)*y1+3*i*i*(1-i)*y2+i*i*i*y3;
		pDC->SetPixel(temp,temp1,RGB(0,0,255));
		if(flag++ % 10 == 0)
			Sleep(1);
	}
}

void CFinalView::OnBspl() 
{
	// TODO: Add your command handler code here
	CDC *pDC = GetDC();
	CRect rectClient;
	GetClientRect(rectClient);
	pDC->SetMapMode(MM_ISOTROPIC);
	pDC->SetWindowExt(2000,1000);
	pDC->SetViewportExt(rectClient.right,-rectClient.bottom);
	pDC->SetViewportOrg(rectClient.right/2,rectClient.bottom/2);


	CPen MyPen,*OldPen; 
	MyPen.CreatePen(PS_SOLID,3,RGB(30,90,70)); 
	OldPen=pDC->SelectObject(&MyPen);

	double x0,y0,x1,y1,x2,y2,x3,y3;
	int flag = 0;
	DialogBezier3 dlg;
	if(dlg.DoModal())
	{
		x0 = dlg.m_x0 * 100;
		x1 = dlg.m_x1 * 100;
		x2 = dlg.m_x2 * 100;
		x3 = dlg.m_x3 * 100;
		y0 = dlg.m_y0 * 100;
		y1 = dlg.m_y1 * 100;
		y2 = dlg.m_y2 * 100;
		y3 = dlg.m_y3 * 100;
	}
	pDC->MoveTo(x0,y0);
	pDC->LineTo(x1,y1);
	pDC->LineTo(x2,y2);
	pDC->LineTo(x3,y3);
	for(double i=0;i<=1;i+=0.001)
	{
		double F0 = (1-i)*(1-i)*(1-i) / 6;
		double F1 = (3*i*i*i - 6*i*i + 4) / 6;
		double F2 = (-3*i*i*i + 3*i*i + 3*i + 1) / 6;
		double F3 = i*i*i/6;
		double temp,temp1;
		temp = x0*F0 +x1*F1 + x2*F2 + x3*F3;
		temp1 = y0*F0 +y1*F1 + y2*F2 + y3*F3;
		pDC->SetPixel(temp,temp1,RGB(0,255,0));
		if(flag++%10 == 0)
			Sleep(1);
	}
}

void CFinalView::MultiMatrix(int a[][4], int b[][2])
{
	int i,j,k;
	for(i=0;i<4;i++)
		for(j=0;j<2;j++)
			result[i][j]=0;
	for(i=0;i<2;i++)
		for(j=0;j<4;j++)
			for(k=0;k<4;k++)
				result[j][i]+=a[j][k]*b[k][i]; 
}

void CFinalView::Hermite(CDC *pDC)
{
	int a[4][4] ={{2,-2,1,1},{-3,3,-2,-1},{0,0,1,0},{1,0,0,0}};
	int b[4][2];
	for(int i=0;i<3;i++)
	{
		b[0][0]=p1[i][0];b[0][1]=p1[i][1];
		b[1][0]=p1[i+1][0];b[1][1]=p1[i+1][1];
		b[2][0]=p2[i][0];b[2][1]=p2[i][1];
		b[3][0]=p2[i+1][0];b[3][1]=p2[i+1][1];
		MultiMatrix(a,b);
		CPen MyPen,*pOldPen;
		MyPen.CreatePen(PS_SOLID,1,RGB(255,0,0));
		pOldPen=pDC->SelectObject(&MyPen);
		pDC->MoveTo(p1[i][0],p1[i][1]);
		for(double t=0.0;t<=1;t+=1.0/400)
		{
			int x=ROUND(pow(t,3)*result[0][0]+pow(t,2)*result[1][0]
			+ t*result[2][0]+result[3][0]);
			int y=ROUND(pow(t,3)*result[0][1]+pow(t,2)*result[1][1]
			+ t*result[2][1]+result[3][1]);		
			pDC->LineTo(x,y);
		}
		pDC->SelectObject(pOldPen);
		MyPen.DeleteObject();
	}
}

void CFinalView::OnHermite() 
{
	// TODO: Add your command handler code here
	CDC *pDC = GetDC();
	CRect rectClient;
	GetClientRect(rectClient);
	pDC->SetMapMode(MM_ISOTROPIC);
	pDC->SetWindowExt(2000,1000);
	pDC->SetViewportExt(rectClient.right,-rectClient.bottom);
	pDC->SetViewportOrg(rectClient.right/2,rectClient.bottom/2);
	DialogBezier3 dlg;
	if(dlg.DoModal())
	{
		p1[0][0]=dlg.m_x0*100;	p1[0][1]=dlg.m_y0*100;
		p1[1][0]=dlg.m_x1*100;	p1[1][1]=dlg.m_y1*100;
		p1[2][0]=dlg.m_x2*100;	p1[2][1]=dlg.m_y2*100;
		p1[3][0]=dlg.m_x3*100;	p1[3][1]=dlg.m_y3*100;
	}
	p2[0][0]=100;p2[0][1]=-100;
	p2[1][0]=100;p2[1][1]=-100;
	p2[2][0]=100;p2[2][1]=-100;
	p2[3][0]=100;p2[3][1]=-100;
	CPen MyPen,*pOldPen;
	MyPen.CreatePen(PS_SOLID,3,RGB(0,0,255));
	pOldPen=pDC->SelectObject(&MyPen);	
	pDC->MoveTo(p1[0][0],p1[0][1]);
	pDC->Ellipse(p1[0][0]-2,p1[0][1]-2,p1[0][0]+2,p1[0][1]+2);
	for(int i=1;i<4;i++)
	{
		pDC->LineTo(p1[i][0],p1[i][1]);
		pDC->Ellipse(p1[i][0]-2,p1[i][1]-2,p1[i][0]+2,p1[i][1]+2);
	}	
	pDC->SelectObject(pOldPen);
	MyPen.DeleteObject();
	Hermite(pDC);
}

void CFinalView::OnCurvesplicing() //曲线拼接
{
	// TODO: Add your command handler code here
	CDC *pDC = GetDC();
	CRect rectClient;
	GetClientRect(rectClient);
	pDC->SetMapMode(MM_ISOTROPIC);
	pDC->SetWindowExt(2000,1000);
	pDC->SetViewportExt(rectClient.right,-rectClient.bottom);
	pDC->SetViewportOrg(rectClient.right/2,rectClient.bottom/2);
	CPen MyPen,*OldPen; 
	MyPen.CreatePen(PS_SOLID,3,RGB(30,90,30)); 
	OldPen=pDC->SelectObject(&MyPen);
	double x0,y0,x1,y1,x2,y2,x3,y3,x00,y00,x11,y11,x22,y22,x33,y33,i;
	int flag=0;
	DialogBezier3 dlg,dlg1;
	if(dlg.DoModal())
	{
		x0 = dlg.m_x0 * 100;
		x1 = dlg.m_x1 * 100;
		x2 = dlg.m_x2 * 100;
		x3 = dlg.m_x3 * 100;
		y0 = dlg.m_y0 * 100;
		y1 = dlg.m_y1 * 100;
		y2 = dlg.m_y2 * 100;
		y3 = dlg.m_y3 * 100;
	}
	pDC->MoveTo(x0,y0);
	pDC->LineTo(x1,y1);
	pDC->LineTo(x2,y2);
	pDC->LineTo(x3,y3);
	if(dlg1.DoModal())
	{
		x00 = dlg1.m_x0 * 100;
		x11 = dlg1.m_x1 * 100;
		x22 = dlg1.m_x2 * 100;
		x33 = dlg1.m_x3 * 100;
		y00 = dlg1.m_y0 * 100;
		y11 = dlg1.m_y1 * 100;
		y22 = dlg1.m_y2 * 100;
		y33 = dlg1.m_y3 * 100;
	}
	x00 = x3;
	y00 = y3;
	pDC->MoveTo(x00,y00);
	pDC->LineTo(x11,y11);
	pDC->LineTo(x22,y22);
	pDC->LineTo(x33,y33);

	for(i=0;i<=1;i+=0.001)
	{
		double temp,temp1;
		temp = (1-i)*(1-i)*(1-i)*x0+3*i*(1-i)*(1-i)*x1+3*i*i*(1-i)*x2+i*i*i*x3;
		temp1 = (1-i)*(1-i)*(1-i)*y0+3*i*(1-i)*(1-i)*y1+3*i*i*(1-i)*y2+i*i*i*y3;
		pDC->SetPixel(temp,temp1,RGB(0,0,255));
		if(flag++ % 10 == 0)
			Sleep(1);
	}
	for(i=0;i<=1;i+=0.001)
	{
		double temp,temp1;
		temp = (1-i)*(1-i)*(1-i)*x00+3*i*(1-i)*(1-i)*x11+3*i*i*(1-i)*x22+i*i*i*x33;
		temp1 = (1-i)*(1-i)*(1-i)*y00+3*i*(1-i)*(1-i)*y11+3*i*i*(1-i)*y22+i*i*i*y33;
		pDC->SetPixel(temp,temp1,RGB(0,0,255));
		if(flag++ % 10 == 0)
			Sleep(1);
	}
}

void CFinalView::OnGraphcut()
{
	// TODO: Add your command handler code here

}

void CFinalView::OnRefresh() 
{
	// TODO: Add your command handler code here
	Invalidate();
}

void CFinalView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	//s_point = point;
	s_point = CPoint(127,200);
	CView::OnLButtonDown(nFlags, point);
}

void CFinalView::OnMenuAET() 
{
	// TODO: Add your command handler code here
	CColorDialog ccd(GetColor);
	if(ccd.DoModal()==IDOK)//调用调色板选取前景色
	{
		GetColor=ccd.GetColor();
	}
	RedrawWindow();//刷新屏幕
	CreatBucket();//初始化桶
	Et();//用于建立边表	
	PolygonFill();//多边形填充	
}
void CFinalView::CreatBucket()//建立桶结点
{
	int ScanMin,ScanMax;//确定扫描线的最小值和最大值
	ScanMax=ScanMin=Point[0].y;
	for(int i=1;i<Number;i++)
	{
		if(Point[i].y<ScanMin)
		{
			ScanMin=Point[i].y;//扫描线的最小值			
		}
		if(Point[i].y>ScanMax)
		{
			ScanMax=Point[i].y;//扫描线的最大值
		}
	}	
	for(i=ScanMin;i<=ScanMax;i++)//建立桶结点
	{
		if(ScanMin==i)//桶头结点
		{
			HeadB=new Bucket;//建立桶的头结点
			CurrentB=HeadB;//CurrentB为Bucket当前结点指针
			CurrentB->ScanLine=ScanMin;
			CurrentB->p=NULL;//没有连接边链表
			CurrentB->next=NULL;
		}
		else//建立桶的其它结点
		{
			CurrentB->next=new Bucket;//新建一个桶结点
			CurrentB=CurrentB->next;//使CurrentB指向新建的桶结点
			CurrentB->ScanLine=i;
			CurrentB->p=NULL;//没有连接边链表
			CurrentB->next=NULL;				
		}
	}
}

void CFinalView::Et()//构造边表
{
	for(int i=0;i<Number;i++)//访问每个顶点
	{
		CurrentB=HeadB;//从桶链表的头结点开始循环
		int j=i+1;//边的第二个顶点，Point[i]和Point[j]构成边
		if(j==Number) j=0;//保证多边形的闭合
		if(Point[j].y>Point[i].y)//终点比起点高
		{
			while(CurrentB->ScanLine!=Point[i].y)//在桶内寻找该边的yMin
			{
				CurrentB=CurrentB->next;//移到下一个桶结点
			}
			E[i].x=Point[i].x;//计算AET表的值
			E[i].yMax=Point[j].y;
			E[i].k=double((Point[j].x-Point[i].x))/(Point[j].y-Point[i].y);//代表1/k			
			E[i].next=NULL;
			CurrentE=CurrentB->p;//获得桶上链接边表的地址
			if(CurrentB->p==NULL)//当前桶结点上没有链接边结点
			{
				CurrentE=&E[i];//赋边的起始地址
				CurrentB->p=CurrentE;//第一个边结点直接连接到对应的桶中
			}
			else
			{
				while(CurrentE->next!=NULL)//如果当前边已连有边结点
				{
					CurrentE=CurrentE->next;//移动指针到当前边的最后一个边结点					
				}
				CurrentE->next=&E[i];//把当前边接上去
			}
		}
		if(Point[j].y<Point[i].y)//终点比起点低
		{
			while(CurrentB->ScanLine!=Point[j].y)
			{
				CurrentB=CurrentB->next;				
			}
			E[i].x=Point[j].x;
			E[i].yMax=Point[i].y;
			E[i].k=double((Point[i].x-Point[j].x))/(Point[i].y-Point[j].y);			
			E[i].next=NULL;
			CurrentE=CurrentB->p;
			if(CurrentE==NULL)
			{
				CurrentE=&E[i];
				CurrentB->p=CurrentE;
			}
			else
			{
				while(CurrentE->next!=NULL)
				{
					CurrentE=CurrentE->next;				
				}
				CurrentE->next=&E[i];
			}
		}
	}
	CurrentB=NULL;
	CurrentE=NULL;	
}

void CFinalView::AddEdge(AET *NewEdge)//插入临时边表
{
	T1=HeadE;
	if(T1==NULL)//边表为空,将边表置为TempEdge
	{
		T1=NewEdge;
		HeadE=T1;
	}
	else
	{
		while(T1->next!=NULL)//边表不为空,将TempEdge连在该边之后
		{
			T1=T1->next;
		}
		T1->next=NewEdge;
	}
}

void CFinalView::EdgeOrder()//对边表进行排序
{	
	T1=HeadE;
	if(T1==NULL)
	{
		return;
	}
	if(T1->next==NULL)//如果该边表没有再连边表
	{
		return;//桶结点只有一条边，不需要排序
	}
	else
	{
		if(T1->next->x<T1->x)//边表按x值排序
		{
			T2=T1->next;
			T1->next=T2->next;
			T2->next=T1;
			HeadE=T2;
		}
		T2=HeadE;
		T1=HeadE->next;		
		while(T1->next!=NULL)//继续两两比较相连的边表的x值,进行排序
		{
			if(T1->next->x<T1->x)
			{
				T2->next=T1->next;
				T1->next=T1->next->next;
				T2->next->next=T1;
				T2=T2->next;
			}
			else
			{
				T2=T1;
				T1=T1->next;
			}
		}
	}
}

void CFinalView::PolygonFill()//多边形填充
{
	HeadE=NULL;
	for(CurrentB=HeadB;CurrentB!=NULL;CurrentB=CurrentB->next)//访问所有桶结点
	{
		for(CurrentE=CurrentB->p;CurrentE!=NULL;CurrentE=CurrentE->next)//访问桶中排序前的边结点			
		{
			AET *TempEdge=new AET;
			TempEdge->x=CurrentE->x;
			TempEdge->yMax=CurrentE->yMax;
			TempEdge->k=CurrentE->k;
			TempEdge->next=NULL;			
			AddEdge(TempEdge);//将该边插入临时Aet表
		}
		EdgeOrder();//使得边表按照x递增的顺序存放		
		T1=HeadE;//根据ymax抛弃扫描完的边结点
		if(T1==NULL)
		{
			return;
		}
		while(CurrentB->ScanLine>=T1->yMax)//放弃该结点，Aet表指针后移（下闭上开）
		{
			T1=T1->next;
			HeadE=T1;
			if(HeadE==NULL)
			{
				return;
			}
		}
		if(T1->next!=NULL)
		{
			T2=T1;
			T1=T2->next;
		}
		while(T1!=NULL)
		{
			if(CurrentB->ScanLine>=T1->yMax)//跳过一个结点
			{
				T2->next=T1->next;
				T1->next=NULL;
				T1=T2->next;
			}
			else
			{
				T2=T1;
				T1=T2->next;
			}
		}
		BOOL In=false;//设置一个BOOL变量In，初始值为假
		double xb,xe;//扫描线的起点和终点
		for(T1=HeadE;T1!=NULL;T1=T1->next)//填充扫描线和多边形相交的区间
		{
			if(In==false)
			{
				xb=T1->x;
				In=true;//每访问一个结点,把In值取反一次
			}
			else//如果In值为真，则填充从当前结点的x值开始到下一结点的x值结束的区间
			{
				xe=T1->x-1;//左闭右开
				CClientDC dc(this);
				for(double x=xb;x<=xe;x++)
					dc.SetPixel(ROUND(x),CurrentB->ScanLine,GetColor);//填充语句
				Sleep(2);//延时1ms,提高填充过程的可视性
				In=FALSE;
			}		
		}
		for(T1=HeadE;T1!=NULL;T1=T1->next)//边连贯性
		{
			T1->x=T1->x+T1->k;//x=x+1/k				 
		}				
	}
	delete HeadB; 
	delete CurrentB;
	delete CurrentE;
	delete HeadE;
}

void CFinalView::OnMenuDrawPolygon() 
{
	// TODO: Add your command handler code here
	choose=1;
    Invalidate();
}


/////////////////
//DDA画直线
void CFinalView::ddaline (int x0,int y0,int x1,int y1,int color)
{
	double dx, dy, x, y, m;
	dx = x1 - x0;
	dy = y1 - y0;

	if (sym)
		count=0;

	if (dx == 0){
		for (int i = min(y0,y1), j = abs(y0-y1); j >=0; j-- )
			draw_point (x0, i+j, color);
	}
	else{
		if (dx < 0){
			int xBuf, yBuf;
			xBuf = x0; x0 = x1; x1 = xBuf;
			yBuf = y0; y0 = y1; y1 = yBuf;
			dx = -dx; dy = -dy;
		}

		if (dx >= (dy>0?dy:-dy)){
			m = dy / dx;
			y = y0;
			for (x = x0; x <= x1; x++){
				draw_point((int)x, (int)(y+0.5), color );
				y += m;
			}
		}
		else{
			m = dx / dy;
			if (m < 0)
				m = -m;
			x = x0;
			if (dy > 0){
				for (y = y0; y <= y1; y++){
					draw_point( (int)(x+0.5), (int)y, color);
					x += m;
				}
			}
			else{
				for (y = y0; y >= y1; y--){
				draw_point( (int)(x+0.5), (int)y, color);
					x += m;
				}
			}
		}
	}
}

void CFinalView::draw_point (int x,int y,int color)
{
	CDC* pDC=GetDC();
	int cc=pDC->GetPixel(x,y),white=RGB(255,255,255);
	if (cc!=white&&sym){//暂时保存点信息,以备刷新时恢复
		save[count][0]=(int)(x+0.5);
		save[count][1]=(int)y;
		save[count][2]=cc;
		count++;
	}
	pDC->SetPixel( x, y, color);
	//pDC->TextOut(100,20,"计算机图形学");
	ReleaseDC(pDC);
}

////////////////
//多边形裁剪
void CFinalView::OnCaijian() 
{
	// TODO: Add your command handler code here
	flag=10;
	//OnClear();
	int cc=RGB(250,250,250);
	ddaline (250,200,250,400,COLOR);
	ddaline (250,400,600,400,COLOR);
	ddaline (250,200,600,200,COLOR);
	ddaline (600,200,600,400,COLOR);
	ddaline (100,300,500,100,COLOR);
	ddaline (100,300,700,500,COLOR);
	ddaline (700,500,500,100,COLOR);
	::Sleep(500);//时间间隔函数
	ddaline (100,300,250,225,cc);
	ddaline (100,300,250,350,cc);
	::Sleep(500);
	ddaline (500,100,300,200,cc);
	ddaline (500,100,550,200,cc);
	::Sleep(500);
	ddaline (700,500,600,300,cc);
	ddaline (700,500,600,467,cc);
	ddaline (600,400,600,467,COLOR);
	::Sleep(500);
	ddaline (600,400,600,467,cc);
	ddaline (400,400,700,500,cc);
}
