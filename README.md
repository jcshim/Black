<span style="color:blue">some *This is Blue italic.* text</span>

# MainFrm.cpp
### PreCreateWindow() 함수는 스크린 크기를 나타냄.

int x = GetSystemMetrics(SM_CXSCREEN);  // 스크린 X 크기

int y = GetSystemMetrics(SM_CYSCREEN);  // 스크린 Y 크기

cs.style = WS_POPUP; 

cs.x = -2; // 테두리까지 포함

cs.y = -2;

cs.cx = x+4;

cs.cy = y+4;

if (cs.hMenu != NULL) {

  ::DestroyMenu(cs.hMenu);
  
  cs.hMenu = NULL;
  
}


# BlackView.cpp

### OnDraw() 함수

CBrush b;

b.CreateSolidBrush(RGB(0, 0, 0)); // 검은색으로 채우기

pDC->SelectObject(&b);

CRect r;

GetClientRect(&r);

pDC->Rectangle(r);  // 사각형 그리기

ShowCursor(false);  // 커서 감추기


### OnKeyDown() 함수

  AfxGetMainWnd()->PostMessageW(WM_CLOSE); // 윈도우 닫기

### OnLButtonDown() 함수

  AfxGetMainWnd()->PostMessageW(WM_CLOSE); // 메시지 보내기
