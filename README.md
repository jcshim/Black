# MainFrm.cpp
PreCreateWindow()

int x = GetSystemMetrics(SM_CXSCREEN);  // 스크린 X 크기

int y = GetSystemMetrics(SM_CYSCREEN);  // 스크린 Y 크기

cs.style = WS_POPUP;// | WS_OVERLAPPED | WS_CAPTION | FWS_ADDTOTITLE;

cs.x = -2; // 테두리까지 포함

cs.y = -2;

cs.cx = x+4;

cs.cy = y+4;

if (cs.hMenu != NULL) {

::DestroyMenu(cs.hMenu);

cs.hMenu = NULL;


# BlackView.cpp


OnDraw()

CBrush b;

b.CreateSolidBrush(RGB(0, 0, 0)); // 검은색으로 채우기

pDC->SelectObject(&b);

CRect r;

GetClientRect(&r);

pDC->Rectangle(r);  // 사각형 그리기

ShowCursor(false);  // 커서 감추기


OnKeyDown()
  AfxGetMainWnd()->PostMessageW(WM_CLOSE); // 윈도우 닫기

OnLButtonDown()
  AfxGetMainWnd()->PostMessageW(WM_CLOSE); 
  
  
