#include "windefine.h"

LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	static DWORD st = 0;
	static DWORD dt = 0;
	static DWORD update_dt = 0;
	static DWORD update_delay = 10;
	static Map map;


	if (uMsg == WM_CREATE)
	{
		Rect rc;
		::GetClientRect(hWnd, &rc);
		backbuffer.Attach(hWnd);
		// TODO
		map.Attach(hWnd);
		//Character *pchr = new Character;
		//pchr->SetPosition(Point(30,120));
		//map.Push(pchr);

		
		st = ::GetTickCount();
		::SetTimer(hWnd, 0, 30, NULL);
		return 0;
	}
	else if (uMsg == WM_DESTROY)
	{
		// TODO

		::KillTimer(hWnd, 0);

		backbuffer.Detach();
		::PostQuitMessage(0);
		return 0;
	}
	else if (uMsg == WM_PAINT)
	{
		Rect rc;
		::GetClientRect(hWnd, &rc);

		PAINTSTRUCT ps;
		HDC hdc = ::BeginPaint(hWnd, &ps);
		

		backbuffer << RGB(100,100,150);

		// TODO
		//Player2P.Draw(backbuffer);
		map.Draw(backbuffer);


		backbuffer.Draw();
		::EndPaint(hWnd, &ps);
		return 0;
	}
	else if (uMsg == WM_ERASEBKGND)
	{
		return 1;
	}
	else if (uMsg == WM_TIMER)
	{
		// TODO
		
		map.Input(dt);
		map.Update(dt);

		dt = ::GetTickCount() - st;
		st = ::GetTickCount();

		Rect rc;
		::GetClientRect(hWnd, &rc);
		::InvalidateRect(hWnd, &rc, TRUE);
		return 0;
	}

	return ::DefWindowProc(hWnd,uMsg,wParam,lParam);
}
