
// BlackView.cpp: CBlackView 클래스의 구현
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "Black.h"
#endif

#include "BlackDoc.h"
#include "BlackView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CBlackView

IMPLEMENT_DYNCREATE(CBlackView, CView)

BEGIN_MESSAGE_MAP(CBlackView, CView)
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// CBlackView 생성/소멸

CBlackView::CBlackView() noexcept
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CBlackView::~CBlackView()
{
}

BOOL CBlackView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CBlackView 그리기

void CBlackView::OnDraw(CDC* pDC)
{
	CBlackDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CBrush b;
	b.CreateSolidBrush(RGB(0, 0, 0));
	pDC->SelectObject(&b);
	CRect r;
	GetClientRect(&r);
	pDC->Rectangle(r);
	ShowCursor(false);
}


// CBlackView 진단

#ifdef _DEBUG
void CBlackView::AssertValid() const
{
	CView::AssertValid();
}

void CBlackView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CBlackDoc* CBlackView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CBlackDoc)));
	return (CBlackDoc*)m_pDocument;
}
#endif //_DEBUG


// CBlackView 메시지 처리기


void CBlackView::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	//DestroyWindow();
	AfxGetMainWnd()->PostMessageW(WM_CLOSE);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
