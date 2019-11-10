-----
# MainFrm.cpp
BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	int x = GetSystemMetrics(SM_CXSCREEN);  // 스크린 X 크기
	int y = GetSystemMetrics(SM_CYSCREEN);  // 스크린 Y 크기
	cs.style = WS_POPUP;// | WS_OVERLAPPED | WS_CAPTION | 
FWS_ADDTOTITLE;
	cs.x = -2; // 테두리까지 포함
	cs.y = -2;
	cs.cx = x+4;
	cs.cy = y+4;
	if (cs.hMenu != NULL) {
		::DestroyMenu(cs.hMenu);
		cs.hMenu = NULL;
	}
	return TRUE;
}
-----
# BlackView.cpp
void CBlackView::OnDraw(CDC* pDC)
{	CBlackDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CBrush b;
	b.CreateSolidBrush(RGB(0, 0, 0)); // 검은색으로 채우기
	pDC->SelectObject(&b);
	CRect r;
	GetClientRect(&r);
	pDC->Rectangle(r);  // 사각형 그리기
	ShowCursor(false);  // 커서 감추기
}
void CBlackView::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	AfxGetMainWnd()->PostMessageW(WM_CLOSE); // 윈도우 닫기
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}void CBlackView::OnLButtonDown(UINT nFlags, CPoint point)
{	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	AfxGetMainWnd()->PostMessageW(WM_CLOSE); // 윈도우 닫기
	CView::OnLButtonDown(nFlags, point);
}
   
