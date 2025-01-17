﻿#include "windefine.h"

INT WINAPI _tWinMain(HINSTANCE hInstance,
					 HINSTANCE hPrevInstance,
					 LPTSTR lpCmdLine,
					 INT nCmdShow)
{
	::srand((unsigned)time(NULL));

	LPCTSTR szClassName = _T("MyMainWindowClass");

	WNDCLASSEX wcex;

	::memset(&wcex, 0, sizeof(wcex));

    wcex.cbSize = sizeof(wcex);
    wcex.style = CS_VREDRAW | CS_HREDRAW;
    wcex.lpfnWndProc = &WndProc;
    wcex.cbClsExtra = 0;
    wcex.cbWndExtra = 0;
    wcex.hInstance = hInstance;
	wcex.hIcon = ::LoadIcon(NULL, IDI_APPLICATION);
	wcex.hCursor = ::LoadCursor(NULL, IDC_ARROW);
	wcex.hbrBackground = (HBRUSH)::GetStockObject(WHITE_BRUSH);
    wcex.lpszMenuName = NULL;
    wcex.lpszClassName = szClassName;
	wcex.hIconSm = ::LoadIcon(NULL, IDI_APPLICATION);

	if (!::RegisterClassEx(&wcex))
	{
		return 1;
	}

	int width = 640;
	int height = 255;

	int cx = ::GetSystemMetrics(SM_CXSCREEN);
	int cy = ::GetSystemMetrics(SM_CYSCREEN);

	int x = (cx - width)/2;
	int y = (cy - height)/2;

	DWORD dwStyle = WS_OVERLAPPEDWINDOW;
	dwStyle &= ~WS_MAXIMIZEBOX;
	dwStyle &= ~WS_THICKFRAME;

	HWND hWnd = ::CreateWindowEx(0, szClassName, 
								_T("Win32 Test"),
								dwStyle,
								x, y,
								width, height,
								NULL, NULL, 
								hInstance, NULL);

	if (hWnd == NULL)
	{
		return 2;
	}

	::ShowWindow(hWnd, nCmdShow);
	::UpdateWindow(hWnd);

	MSG msg;

	while (true)
	{
		if (::PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
		{
			::TranslateMessage(&msg);
			::DispatchMessage(&msg);
		}
		if (msg.message == WM_QUIT)
			break;
	}

	return msg.wParam;
}

