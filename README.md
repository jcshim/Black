
BOOL 
CMainFrame::PreCreateWindow
(CREATESTRUCT& cs)

{

	if( !CFrameWnd::PreCreateWindow(cs) )

		return FALSE;
		
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
		
	}
	
	return TRUE;
	
}  
