#include "Character.h"

CS_Keyup::CS_Keyup()
{


	pAni = new Animation;
	for (int i = 0; i < 1; i++)
	{
		Image* pImg = new Image;
		pImg->Load(_T("2P_Keyup.bmp"), Rect(100*i,0,100 + 100*i,100));
		pImg->SetTransparent(RGB(255,0,255));

		pAni->AddShot(pImg);
	}

	pAni->SetDelay(60);
	pAni->SetLoop(true);
}
CS_Keyup::~CS_Keyup()
{
}

void CS_Keyup::Enter()
{
	if (pAni)
		pAni->Reset();
}
void CS_Keyup::Input(DWORD tick)
{
	if ((::GetAsyncKeyState(VK_UP) & 0x8000) != 0x8000)
	{
		m_pMachine->transition(IDLE);
	}
	else if (keydepot.KeyDownAction(VK_SPACE))
	{
		m_pMachine->transition(KEY_UP_ATTACK);
	}

}
void CS_Keyup::Update(DWORD tick)
{
	if (pAni)
		pAni->Update(tick);
}
void CS_Keyup::Draw(HDC hdc)
{
	if (pAni)
	{
		pAni->SetRect(Rect(*pos, Size(100,100)));
		pAni->Draw(hdc);
	}
}
void CS_Keyup::Leave()
{
}

CS_L_Keyup::CS_L_Keyup()
{


	pAni = new Animation;
	for (int i = 0; i < 1; i++)
	{
		Image* pImg = new Image;
		pImg->Load(_T("2P_Keyup.bmp"), Rect(100*i,100,100 + 100*i,200));
		pImg->SetTransparent(RGB(255,0,255));

		pAni->AddShot(pImg);
	}

	pAni->SetDelay(60);
	pAni->SetLoop(true);
}
CS_L_Keyup::~CS_L_Keyup()
{
}

void CS_L_Keyup::Enter()
{
	if (pAni)
		pAni->Reset();
}
void CS_L_Keyup::Input(DWORD tick)
{
	if ((::GetAsyncKeyState(VK_UP) & 0x8000) != 0x8000)
	{
		m_pMachine->transition(L_IDLE);
	}
	else if (keydepot.KeyDownAction(VK_SPACE))
	{
		m_pMachine->transition(L_KEY_UP_ATTACK);
	}
}
void CS_L_Keyup::Update(DWORD tick)
{
	if (pAni)
		pAni->Update(tick);
}
void CS_L_Keyup::Draw(HDC hdc)
{
	if (pAni)
	{
		pAni->SetRect(Rect(*pos, Size(100,100)));
		pAni->Draw(hdc);
	}
}
void CS_L_Keyup::Leave()
{
}