#include "Character.h"

CS_Jumpup::CS_Jumpup()
{
	pAni = new Animation;
	for (int i = 0; i < 1; i++)
	{
		Image* pImg = new Image;
		pImg->Load(_T("2P_Jumpup.bmp"), Rect(100*i,0,100 + 100*i,100));
		pImg->SetTransparent(RGB(255,0,255));

		pAni->AddShot(pImg);
	}

	pAni->SetDelay(60);
	pAni->SetLoop(true);
}
CS_Jumpup::~CS_Jumpup()
{
}

void CS_Jumpup::Enter()
{
	*Jumppower=Jumpmaxpower;
	if (pAni)
		pAni->Reset();
	
}
void CS_Jumpup::Input(DWORD tick)
{
	

	
	if ((::GetAsyncKeyState(VK_RIGHT) & 0x8000) == 0x8000)
	{
		//m_pMachine->transition();
	}
	if ((::GetAsyncKeyState(VK_LEFT) & 0x8000) == 0x8000)
	{
		m_pMachine->transition(L_JUMPUP);
	}
	if (keydepot.KeyDownAction(VK_SPACE))
	{
		m_pMachine->transition(JUMPUP_ATTACK);
	}
}
void CS_Jumpup::Update(DWORD tick)
{
	if (pAni)
		pAni->Update(tick);
	
	pos->y-=*Jumppower;
	--*Jumppower;
	if(*Jumppower<=0)
	{
		m_pMachine->transition(JUMPTOP);
	}
}
void CS_Jumpup::Draw(HDC hdc)
{
	if (pAni)
	{
		pAni->SetRect(Rect(*pos, Size(100,100)));
		pAni->Draw(hdc);
	}
}
void CS_Jumpup::Leave()
{
	//*Jumppower=Jumpmaxpower;
}

CS_L_Jumpup::CS_L_Jumpup()
{


	pAni = new Animation;
	for (int i = 0; i < 1; i++)
	{
		Image* pImg = new Image;
		pImg->Load(_T("2P_Jumpup.bmp"), Rect(100*i,100,100 + 100*i,200));
		pImg->SetTransparent(RGB(255,0,255));

		pAni->AddShot(pImg);
	}

	pAni->SetDelay(60);
	pAni->SetLoop();
}
CS_L_Jumpup::~CS_L_Jumpup()
{
}

void CS_L_Jumpup::Enter()
{
	*Jumppower=Jumpmaxpower;
	if (pAni)
		pAni->Reset();
}
void CS_L_Jumpup::Input(DWORD tick)
{

	if ((::GetAsyncKeyState(VK_RIGHT) & 0x8000) == 0x8000)
	{
		m_pMachine->transition(JUMPUP);
	}
	if ((::GetAsyncKeyState(VK_LEFT) & 0x8000) == 0x8000)
	{
		//m_pMachine->transition(L_JUMPUP);
	}
	if (keydepot.KeyDownAction(VK_SPACE))
	{
		m_pMachine->transition(L_JUMPUP_ATTACK);
	}
}
void CS_L_Jumpup::Update(DWORD tick)
{
	if (pAni)
		pAni->Update(tick);

	if (pAni)
		pAni->Update(tick);

	pos->y-=*Jumppower;
	--*Jumppower;
	if(*Jumppower<=0)
	{
		m_pMachine->transition(L_JUMPTOP);
	}
	
}
void CS_L_Jumpup::Draw(HDC hdc)
{
	if (pAni)
	{
		pAni->SetRect(Rect(*pos, Size(100,100)));
		pAni->Draw(hdc);
	}
}
void CS_L_Jumpup::Leave()
{
}
////////////////////////////////
// Jumptop
////////////////////////////////
CS_Jumptop::CS_Jumptop()
{


	pAni = new Animation;
	for (int i = 0; i < 1; i++)
	{
		Image* pImg = new Image;
		pImg->Load(_T("2P_Jumptop.bmp"), Rect(100*i,0,100 + 100*i,100));
		pImg->SetTransparent(RGB(255,0,255));

		pAni->AddShot(pImg);
	}

	pAni->SetDelay(60);
	pAni->SetLoop(false);
}
CS_Jumptop::~CS_Jumptop()
{
}

void CS_Jumptop::Enter()
{
	if (pAni)
		pAni->Reset();
}
void CS_Jumptop::Input(DWORD tick)
{

	if ((::GetAsyncKeyState(VK_RIGHT) & 0x8000) == 0x8000)
	{
		//m_pMachine->transition();
	}
	if ((::GetAsyncKeyState(VK_LEFT) & 0x8000) == 0x8000)
	{
		m_pMachine->transition(L_JUMPEND);
	}
	if (keydepot.KeyDownAction(VK_SPACE))
	{
		m_pMachine->transition(JUMPUP_ATTACK);
	}
}
void CS_Jumptop::Update(DWORD tick)
{
	if (pAni)
		pAni->Update(tick);

	if(!(pAni->IsPlaying()))
		m_pMachine->transition(JUMPFALL);
}
void CS_Jumptop::Draw(HDC hdc)
{
	if (pAni)
	{
		pAni->SetRect(Rect(*pos, Size(100,100)));
		pAni->Draw(hdc);
	}
}
void CS_Jumptop::Leave()
{
	
}


CS_L_Jumptop::CS_L_Jumptop()
{


	pAni = new Animation;
	for (int i = 0; i < 1; i++)
	{
		Image* pImg = new Image;
		pImg->Load(_T("2P_Jumptop.bmp"), Rect(100*i,100,100 + 100*i,200));
		pImg->SetTransparent(RGB(255,0,255));

		pAni->AddShot(pImg);
	}

	pAni->SetDelay(60);
	pAni->SetLoop(false);
}
CS_L_Jumptop::~CS_L_Jumptop()
{
}

void CS_L_Jumptop::Enter()
{
	if (pAni)
		pAni->Reset();
}
void CS_L_Jumptop::Input(DWORD tick)
{

	if ((::GetAsyncKeyState(VK_RIGHT) & 0x8000) == 0x8000)
	{
		m_pMachine->transition(L_JUMPTOP);
	}
	if ((::GetAsyncKeyState(VK_LEFT) & 0x8000) == 0x8000)
	{
		//m_pMachine->transition(L_JUMPUP);
	}
	if (keydepot.KeyDownAction(VK_SPACE))
	{
		m_pMachine->transition(L_JUMPUP_ATTACK);
	}
}
void CS_L_Jumptop::Update(DWORD tick)
{
	if (pAni)
		pAni->Update(tick);
	if(!(pAni->IsPlaying()))
		m_pMachine->transition(L_JUMPFALL);
}
void CS_L_Jumptop::Draw(HDC hdc)
{
	if (pAni)
	{
		pAni->SetRect(Rect(*pos, Size(100,100)));
		pAni->Draw(hdc);
	}
}
void CS_L_Jumptop::Leave()
{
}
////////////////////////////////
// Jumpfall
////////////////////////////////

CS_Jumpfall::CS_Jumpfall()
{


	pAni = new Animation;
	for (int i = 0; i < 3; i++)
	{
		Image* pImg = new Image;
		pImg->Load(_T("2P_Jumpfall.bmp"), Rect(100*i,0,100 + 100*i,100));
		pImg->SetTransparent(RGB(255,0,255));

		pAni->AddShot(pImg);
	}

	pAni->SetDelay(60);
	pAni->SetLoop(true);
}
CS_Jumpfall::~CS_Jumpfall()
{
}

void CS_Jumpfall::Enter()
{
	if (pAni)
		pAni->Reset();
	*Jumppower=0;
}
void CS_Jumpfall::Input(DWORD tick)
{
	if ((::GetAsyncKeyState(VK_RIGHT) & 0x8000) == 0x8000)
	{
		//m_pMachine->transition();
	}
	if ((::GetAsyncKeyState(VK_LEFT) & 0x8000) == 0x8000)
	{
		m_pMachine->transition(L_JUMPFALL);
	}
	if (keydepot.KeyDownAction(VK_SPACE))
	{
		m_pMachine->transition(JUMPFALL_ATTACK);
	}
}
void CS_Jumpfall::Update(DWORD tick)
{
	if (pAni)
		pAni->Update(tick);
	pos->y+=*Jumppower;
	++*Jumppower;
}
void CS_Jumpfall::Draw(HDC hdc)
{
	if (pAni)
	{
		pAni->SetRect(Rect(*pos, Size(100,100)));
		pAni->Draw(hdc);
	}
}
void CS_Jumpfall::Leave()
{

}


CS_L_Jumpfall::CS_L_Jumpfall()
{


	pAni = new Animation;
	for (int i = 0; i < 3; i++)
	{
		Image* pImg = new Image;
		pImg->Load(_T("2P_Jumpfall.bmp"), Rect(100*i,100,100 + 100*i,200));
		pImg->SetTransparent(RGB(255,0,255));

		pAni->AddShot(pImg);
	}

	pAni->SetDelay(60);
	pAni->SetLoop(true);
}
CS_L_Jumpfall::~CS_L_Jumpfall()
{
}

void CS_L_Jumpfall::Enter()
{
	if (pAni)
		pAni->Reset();
	*Jumppower=0;
}
void CS_L_Jumpfall::Input(DWORD tick)
{
	if ((::GetAsyncKeyState(VK_RIGHT) & 0x8000) == 0x8000)
	{
		m_pMachine->transition(JUMPFALL);
	}
	if ((::GetAsyncKeyState(VK_LEFT) & 0x8000) == 0x8000)
	{
		//m_pMachine->transition(L_JUMPFALL);
	}
	if (keydepot.KeyDownAction(VK_SPACE))
	{
		m_pMachine->transition(L_JUMPFALL_ATTACK);
	}
}
void CS_L_Jumpfall::Update(DWORD tick)
{
	if (pAni)
		pAni->Update(tick);
	pos->y+=*Jumppower;
	++*Jumppower;
}
void CS_L_Jumpfall::Draw(HDC hdc)
{
	if (pAni)
	{
		pAni->SetRect(Rect(*pos, Size(100,100)));
		pAni->Draw(hdc);
	}
}
void CS_L_Jumpfall::Leave()
{

}

////////////////////////////////
// Jumpend
////////////////////////////////

CS_Jumpend::CS_Jumpend()
{


	pAni = new Animation;
	for (int i = 0; i < 1; i++)
	{
		Image* pImg = new Image;
		pImg->Load(_T("2P_Jumpend.bmp"), Rect(100*i,0,100 + 100*i,100));
		pImg->SetTransparent(RGB(255,0,255));

		pAni->AddShot(pImg);
	}

	pAni->SetDelay(60);
	pAni->SetLoop();
}
CS_Jumpend::~CS_Jumpend()
{
}

void CS_Jumpend::Enter()
{
	if (pAni)
		pAni->Reset();
}
void CS_Jumpend::Input(DWORD tick)
{
}
void CS_Jumpend::Update(DWORD tick)
{
	if (pAni)
		pAni->Update(tick);
}
void CS_Jumpend::Draw(HDC hdc)
{
	if (pAni)
	{
		pAni->SetRect(Rect(*pos, Size(100,100)));
		pAni->Draw(hdc);
	}
}
void CS_Jumpend::Leave()
{
}

CS_L_Jumpend::CS_L_Jumpend()
{


	pAni = new Animation;
	for (int i = 0; i < 1; i++)
	{
		Image* pImg = new Image;
		pImg->Load(_T("2P_Jumpend.bmp"), Rect(100*i,100,100 + 100*i,200));
		pImg->SetTransparent(RGB(255,0,255));

		pAni->AddShot(pImg);
	}

	pAni->SetDelay(60);
	pAni->SetLoop();
}
CS_L_Jumpend::~CS_L_Jumpend()
{
}

void CS_L_Jumpend::Enter()
{
	if (pAni)
		pAni->Reset();
}
void CS_L_Jumpend::Input(DWORD tick)
{
	/*if (keydepot.KeyDownAction(VK_SPACE))
	{
		m_pMachine->transition(FIRE);
	}
	if ((::GetAsyncKeyState(VK_RIGHT) & 0x8000) == 0x8000)
	{
		m_pMachine->transition(GO_FORWARD);
	}
	if ((::GetAsyncKeyState(VK_DOWN) & 0x8000) == 0x8000)
	{
		m_pMachine->transition(SIT);
	}*/
}
void CS_L_Jumpend::Update(DWORD tick)
{
	if (pAni)
		pAni->Update(tick);
}
void CS_L_Jumpend::Draw(HDC hdc)
{
	if (pAni)
	{
		pAni->SetRect(Rect(*pos, Size(100,100)));
		pAni->Draw(hdc);
	}
}
void CS_L_Jumpend::Leave()
{
}
