#include "Character.h"

CS_Sit::CS_Sit()
{

	pAni = new Animation;
	for (int i = 0; i < 1; i++)
	{
		Image* pImg = new Image;
		pImg->Load(_T("2P_Sit.bmp"), Rect(100*i,0,100 + 100*i,100));
		pImg->SetTransparent(RGB(255,0,255));
		pAni->AddShot(pImg);
	}

	pAni->SetLoop();
	pAni->SetDelay(60);
}
CS_Sit::~CS_Sit()
{
}

void CS_Sit::Enter()
{
	if (pAni)
		pAni->Reset();
}
void CS_Sit::Input(DWORD tick)
{
	if ((::GetAsyncKeyState(VK_DOWN) & 0x8000) != 0x8000)
	{
		m_pMachine->transition(IDLE);
	}
	else if(keydepot.KeyDownAction(VK_SPACE))
	{
		m_pMachine->transition(SIT_ATTACK);
	}
}
void CS_Sit::Update(DWORD tick)
{
	if (pAni)
	{
		pAni->Update(tick);
	}

	//*pos = *pos + Point(+1,0);
}
void CS_Sit::Draw(HDC hdc)
{
	if (pAni)
	{
		pAni->SetRect(Rect(*pos, Size(100,100)));
		pAni->Draw(hdc);
	}
}
void CS_Sit::Leave()
{
}

CS_L_Sit::CS_L_Sit()
{
	pAni = new Animation;
	for (int i = 0; i < 1; i++)
	{
		Image* pImg = new Image;
		pImg->Load(_T("2P_Sit.bmp"), Rect(100*i,100,100 + 100*i,200));
		pImg->SetTransparent(RGB(255,0,255));
		pAni->AddShot(pImg);
	}

	pAni->SetLoop();
	pAni->SetDelay(60);
}
CS_L_Sit::~CS_L_Sit()
{
}

void CS_L_Sit::Enter()
{
	if (pAni)
		pAni->Reset();
}
void CS_L_Sit::Input(DWORD tick)
{
	if ((::GetAsyncKeyState(VK_DOWN) & 0x8000) != 0x8000)
	{
		m_pMachine->transition(L_IDLE);
	}
	else if (keydepot.KeyDownAction(VK_SPACE))
	{
		m_pMachine->transition(L_SIT_ATTACK);
	}
}
void CS_L_Sit::Update(DWORD tick)
{
	if (pAni)
	{
		pAni->Update(tick);
	}

	//*pos = *pos + Point(+1,0);
}
void CS_L_Sit::Draw(HDC hdc)
{
	if (pAni)
	{
		pAni->SetRect(Rect(*pos, Size(100,100)));
		pAni->Draw(hdc);
	}
}
void CS_L_Sit::Leave()
{
}