#include "Character.h"

CS_Idle::CS_Idle()
{


	pAni = new Animation;
	for (int i = 0; i < 2; i++)
	{
		Image* pImg = new Image;
		pImg->Load(_T("2P_Idle.bmp"), Rect(100*i,0,100 + 100*i,100));
		pImg->SetTransparent(RGB(255,0,255));

		pAni->AddShot(pImg);
	}

	pAni->SetDelay(60);
	pAni->SetLoop(true);
}
CS_Idle::~CS_Idle()
{
}

void CS_Idle::Enter()
{
	if (pAni)
		pAni->Reset();
}
void CS_Idle::Input(DWORD tick)
{
	if (keydepot.KeyDownAction(VK_SPACE))
	{
		m_pMachine->transition(ATTACK);
	}
	if ((::GetAsyncKeyState(VK_RIGHT) & 0x8000) == 0x8000)
	{
		m_pMachine->transition(GO_FORWARD);
	}
	if ((::GetAsyncKeyState(VK_DOWN) & 0x8000) == 0x8000)
	{
		m_pMachine->transition(SIT);
	}
	if ((::GetAsyncKeyState(VK_LCONTROL) & 0x8000) == 0x8000)
	{
		m_pMachine->transition(JUMPUP);
	}
	if ((::GetAsyncKeyState(VK_LEFT) & 0x8000) == 0x8000)
	{
		m_pMachine->transition(L_GO_FORWARD);
	}
	if ((::GetAsyncKeyState(VK_UP) & 0x8000) == 0x8000)
	{
		m_pMachine->transition(KEY_UP);
	}
}
void CS_Idle::Update(DWORD tick)
{
	if (pAni)
		pAni->Update(tick);
}
void CS_Idle::Draw(HDC hdc)
{
	if (pAni)
	{
		pAni->SetRect(Rect(*pos, Size(100,100)));
		pAni->Draw(hdc);
	}
}
void CS_Idle::Leave()
{
}

CS_L_Idle::CS_L_Idle()
{


	pAni = new Animation;
	for (int i = 0; i < 2; i++)
	{
		Image* pImg = new Image;
		pImg->Load(_T("2P_Idle.bmp"), Rect(100*i,100,100 + 100*i,200));
		pImg->SetTransparent(RGB(255,0,255));

		pAni->AddShot(pImg);
	}

	pAni->SetDelay(60);
	pAni->SetLoop(true);
}
CS_L_Idle::~CS_L_Idle()
{
}

void CS_L_Idle::Enter()
{
	if (pAni)
		pAni->Reset();
}
void CS_L_Idle::Input(DWORD tick)
{
	if (keydepot.KeyDownAction(VK_SPACE))
	{
		m_pMachine->transition(L_ATTACK);
	}
	if ((::GetAsyncKeyState(VK_RIGHT) & 0x8000) == 0x8000)
	{
		m_pMachine->transition(GO_FORWARD);
	}
	if ((::GetAsyncKeyState(VK_DOWN) & 0x8000) == 0x8000)
	{
		m_pMachine->transition(L_SIT);
	}
	if ((::GetAsyncKeyState(VK_LCONTROL) & 0x8000) == 0x8000)
	{
		m_pMachine->transition(L_JUMPUP);
	}
	if ((::GetAsyncKeyState(VK_LEFT) & 0x8000) == 0x8000)
	{
		m_pMachine->transition(L_GO_FORWARD);
	}
	if ((::GetAsyncKeyState(VK_UP) & 0x8000) == 0x8000)
	{
		m_pMachine->transition(L_KEY_UP);
	}
}
void CS_L_Idle::Update(DWORD tick)
{
	if (pAni)
		pAni->Update(tick);
}
void CS_L_Idle::Draw(HDC hdc)
{
	if (pAni)
	{
		pAni->SetRect(Rect(*pos, Size(100,100)));
		pAni->Draw(hdc);
	}
}
void CS_L_Idle::Leave()
{
}