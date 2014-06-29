#include "Character.h"

CS_Go_Forward::CS_Go_Forward()
{
	/*htempbitmap = (HBITMAP)LoadImage(NULL,_T("2P_Run.bmp"),IMAGE_BITMAP,0,0,SRCCOPY);
	BITMAP bm;
	GetObject(htempbitmap,sizeof(BITMAP),&bm);*/
	

	pAni = new Animation;
	for (int i = 0; i < 6; i++)
	{
		Image* pImg = new Image;
		pImg->Load(_T("2P_Run.bmp"), Rect(100*i,0,100 + 100*i,100));
		pImg->SetTransparent(RGB(255,0,255));
		pAni->AddShot(pImg);
	}

	pAni->SetLoop();
	pAni->SetDelay(60);
}
CS_Go_Forward::~CS_Go_Forward()
{
}

void CS_Go_Forward::Enter()
{
	if (pAni)
		pAni->Reset();
}
void CS_Go_Forward::Input(DWORD tick)
{

	if ((::GetAsyncKeyState(VK_RIGHT) & 0x8000) != 0x8000)
	{
		m_pMachine->transition(IDLE);
	}
	if ((::GetAsyncKeyState(VK_RIGHT) & 0x8000) == 0x8000)
	{
		pos->x+=3;
	}
	if (keydepot.KeyDownAction(VK_SPACE))
	{
		m_pMachine->transition(ATTACK);
	}
	if ((::GetAsyncKeyState(VK_LCONTROL) & 0x8000) == 0x8000)
	{
		m_pMachine->transition(JUMPUP);
	}
}
void CS_Go_Forward::Update(DWORD tick)
{
	if (pAni)
	{
		pAni->Update(tick);
	}

	//*pos = *pos + Point(+1,0);
}
void CS_Go_Forward::Draw(HDC hdc)
{
	if (pAni)
	{
		pAni->SetRect(Rect(*pos, Size(100,100)));
		pAni->Draw(hdc);
	}
}
void CS_Go_Forward::Leave()
{
}


CS_L_Go_Forward::CS_L_Go_Forward()
{
	

	pAni = new Animation;
	for (int i = 0; i < 6; i++)
	{
		Image* pImg = new Image;
		pImg->Load(_T("2P_Run.bmp"), Rect(100*i,100,100 + 100*i,200));
		pImg->SetTransparent(RGB(255,0,255));
		pAni->AddShot(pImg);
	}

	pAni->SetLoop();
	pAni->SetDelay(60);
}
CS_L_Go_Forward::~CS_L_Go_Forward()
{
}

void CS_L_Go_Forward::Enter()
{
	if (pAni)
		pAni->Reset();
}
void CS_L_Go_Forward::Input(DWORD tick)
{
	if ((::GetAsyncKeyState(VK_LEFT) & 0x8000) != 0x8000)
	{
		m_pMachine->transition(L_IDLE);
	}
	else if (keydepot.KeyDownAction(VK_SPACE))
	{
		m_pMachine->transition(L_ATTACK);
	}
	else if ((::GetAsyncKeyState(VK_LCONTROL) & 0x8000) == 0x8000)
	{
		m_pMachine->transition(L_JUMPUP);
	}
}
void CS_L_Go_Forward::Update(DWORD tick)
{
	if (pAni)
	{
		pAni->Update(tick);
	}

	//*pos = *pos + Point(+1,0);
}
void CS_L_Go_Forward::Draw(HDC hdc)
{
	if (pAni)
	{
		pAni->SetRect(Rect(*pos, Size(100,100)));
		pAni->Draw(hdc);
	}
}
void CS_L_Go_Forward::Leave()
{
}