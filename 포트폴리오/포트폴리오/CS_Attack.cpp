#include "Character.h"

CS_Attack::CS_Attack()
{
	/*htempbitmap = (HBITMAP)LoadImage(NULL,_T("2P_Attack.bmp"),IMAGE_BITMAP,0,0,SRCCOPY);
	BITMAP bm;
	GetObject(htempbitmap,sizeof(BITMAP),&bm);*/
	

	pAni = new Animation;
	for (int i = 0; i < 4; i++)
	{
		Image* pImg = new Image;
		pImg->Load(_T("2P_Attack.bmp"), Rect(100*i,0,100 + 100*i,100));
		pImg->SetTransparent(RGB(255,0,255));
		pAni->AddShot(pImg);
	}

	pAni->SetDelay(60);
	//DeleteObject(htempbitmap);
}
CS_Attack::~CS_Attack()
{
}

void CS_Attack::Enter()
{
	if (pAni)
		pAni->Reset();
}
void CS_Attack::Input(DWORD tick)
{
}
void CS_Attack::Update(DWORD tick)
{
	if (pAni)
	{
		pAni->Update(tick);
		if (!pAni->IsPlaying())
			m_pMachine->transition(IDLE);
	}
}
void CS_Attack::Draw(HDC hdc)
{
	if (pAni)
	{
		pAni->SetRect(Rect(*pos, Size(100,100)));
		pAni->Draw(hdc);
	}
}
void CS_Attack::Leave()
{
}

CS_L_Attack::CS_L_Attack()
{

	pAni = new Animation;
	for (int i = 0; i < 4; i++)
	{
		Image* pImg = new Image;
		pImg->Load(_T("2P_Attack.bmp"), Rect(100*i,100,100 + 100*i,200));
		pImg->SetTransparent(RGB(255,0,255));
		pAni->AddShot(pImg);
	}

	pAni->SetDelay(60);
}
CS_L_Attack::~CS_L_Attack()
{
}

void CS_L_Attack::Enter()
{
	if (pAni)
		pAni->Reset();
}
void CS_L_Attack::Input(DWORD tick)
{
}
void CS_L_Attack::Update(DWORD tick)
{
	if (pAni)
	{
		pAni->Update(tick);
		if (!pAni->IsPlaying())
			m_pMachine->transition(L_IDLE);
	}
}
void CS_L_Attack::Draw(HDC hdc)
{
	if (pAni)
	{
		pAni->SetRect(Rect(*pos, Size(100,100)));
		pAni->Draw(hdc);
	}
}
void CS_L_Attack::Leave()
{
}

///////////////////////////////
//CS_Keyup
///////////////////////////////


CS_Keyup_Attack::CS_Keyup_Attack()
{
	/*htempbitmap = (HBITMAP)LoadImage(NULL,_T("2P_Keyup_Attack.bmp"),IMAGE_BITMAP,0,0,SRCCOPY);
	BITMAP bm;
	GetObject(htempbitmap,sizeof(BITMAP),&bm);*/
	

	pAni = new Animation;
	for (int i = 0; i < 1; i++)
	{
		Image* pImg = new Image;
		pImg->Load(_T("2P_Keyup_Attack.bmp"), Rect(100*i,0,100 + 100*i,100));
		pImg->SetTransparent(RGB(255,0,255));
		pAni->AddShot(pImg);
	}

	pAni->SetDelay(60);
}
CS_Keyup_Attack::~CS_Keyup_Attack()
{
}

void CS_Keyup_Attack::Enter()
{
	if (pAni)
		pAni->Reset();
}
void CS_Keyup_Attack::Input(DWORD tick)
{
}
void CS_Keyup_Attack::Update(DWORD tick)
{
	if (pAni)
	{
		pAni->Update(tick);
		if (!pAni->IsPlaying())
			m_pMachine->transition(KEY_UP);
	}
}
void CS_Keyup_Attack::Draw(HDC hdc)
{
	if (pAni)
	{
		pAni->SetRect(Rect(*pos, Size(100,100)));
		pAni->Draw(hdc);
	}
}
void CS_Keyup_Attack::Leave()
{
}

CS_L_Keyup_Attack::CS_L_Keyup_Attack()
{

	pAni = new Animation;
	for (int i = 0; i < 1; i++)
	{
		Image* pImg = new Image;
		pImg->Load(_T("2P_Keyup_Attack.bmp"), Rect(100*i,100,100 + 100*i,200));
		pImg->SetTransparent(RGB(255,0,255));
		pAni->AddShot(pImg);
	}

	pAni->SetDelay(60);
}
CS_L_Keyup_Attack::~CS_L_Keyup_Attack()
{
}

void CS_L_Keyup_Attack::Enter()
{
	if (pAni)
		pAni->Reset();
}
void CS_L_Keyup_Attack::Input(DWORD tick)
{
}
void CS_L_Keyup_Attack::Update(DWORD tick)
{
	if (pAni)
	{
		pAni->Update(tick);
		if (!pAni->IsPlaying())
			m_pMachine->transition(L_KEY_UP);
	}
}
void CS_L_Keyup_Attack::Draw(HDC hdc)
{
	if (pAni)
	{
		pAni->SetRect(Rect(*pos, Size(100,100)));
		pAni->Draw(hdc);
	}
}
void CS_L_Keyup_Attack::Leave()
{
}

///////////////////////////////////
// CS_Sit
///////////////////////////////////
CS_Sit_Attack::CS_Sit_Attack()
{
	/*htempbitmap = (HBITMAP)LoadImage(NULL,_T("2P_Sit_Attack.bmp"),IMAGE_BITMAP,0,0,SRCCOPY);
	BITMAP bm;
	GetObject(htempbitmap,sizeof(BITMAP),&bm);*/
	

	pAni = new Animation;
	for (int i = 0; i < 1; i++)
	{
		Image* pImg = new Image;
		pImg->Load(_T("2P_Sit_Attack.bmp"), Rect(100*i,0,100 + 100*i,100));
		pImg->SetTransparent(RGB(255,0,255));
		pAni->AddShot(pImg);
	}

	pAni->SetDelay(60);
	//DeleteObject(htempbitmap);
}
CS_Sit_Attack::~CS_Sit_Attack()
{
}

void CS_Sit_Attack::Enter()
{
	if (pAni)
		pAni->Reset();
}
void CS_Sit_Attack::Input(DWORD tick)
{
}
void CS_Sit_Attack::Update(DWORD tick)
{
	if (pAni)
	{
		pAni->Update(tick);
		if (!pAni->IsPlaying())
			m_pMachine->transition(SIT);
	}
}
void CS_Sit_Attack::Draw(HDC hdc)
{
	if (pAni)
	{
		pAni->SetRect(Rect(*pos, Size(100,100)));
		pAni->Draw(hdc);
	}
}
void CS_Sit_Attack::Leave()
{
}

CS_L_Sit_Attack::CS_L_Sit_Attack()
{

	pAni = new Animation;
	for (int i = 0; i < 1; i++)
	{
		Image* pImg = new Image;
		pImg->Load(_T("2P_Sit_Attack.bmp"), Rect(100*i,100,100 + 100*i,200));
		pImg->SetTransparent(RGB(255,0,255));
		pAni->AddShot(pImg);
	}

	pAni->SetDelay(60);
}
CS_L_Sit_Attack::~CS_L_Sit_Attack()
{
}

void CS_L_Sit_Attack::Enter()
{
	if (pAni)
		pAni->Reset();
}
void CS_L_Sit_Attack::Input(DWORD tick)
{
}
void CS_L_Sit_Attack::Update(DWORD tick)
{
	if (pAni)
	{
		pAni->Update(tick);
		if (!pAni->IsPlaying())
			m_pMachine->transition(L_SIT);
	}
}
void CS_L_Sit_Attack::Draw(HDC hdc)
{
	if (pAni)
	{
		pAni->SetRect(Rect(*pos, Size(100,100)));
		pAni->Draw(hdc);
	}
}
void CS_L_Sit_Attack::Leave()
{
}

///////////////////////////////////////
// CS_Jumpup
///////////////////////////////////////
CS_Jumpup_Attack::CS_Jumpup_Attack()
{
	

	pAni = new Animation;
	for (int i = 0; i < 1; i++)
	{
		Image* pImg = new Image;
		pImg->Load(_T("2P_Jumpup_Attack.bmp"), Rect(100*i,0,100 + 100*i,100));
		pImg->SetTransparent(RGB(255,0,255));
		pAni->AddShot(pImg);
	}

	pAni->SetDelay(60);
}
CS_Jumpup_Attack::~CS_Jumpup_Attack()
{
}

void CS_Jumpup_Attack::Enter()
{
	if (pAni)
		pAni->Reset();
}
void CS_Jumpup_Attack::Input(DWORD tick)
{
}
void CS_Jumpup_Attack::Update(DWORD tick)
{
	if (pAni)
	{
		pAni->Update(tick);
		if (!pAni->IsPlaying())
			m_pMachine->transition(JUMPUP);
	}
}
void CS_Jumpup_Attack::Draw(HDC hdc)
{
	if (pAni)
	{
		pAni->SetRect(Rect(*pos, Size(100,100)));
		pAni->Draw(hdc);
	}
}
void CS_Jumpup_Attack::Leave()
{
}

CS_L_Jumpup_Attack::CS_L_Jumpup_Attack()
{

	pAni = new Animation;
	for (int i = 0; i < 1; i++)
	{
		Image* pImg = new Image;
		pImg->Load(_T("2P_Jumpup_Attack.bmp"), Rect(100*i,100,100 + 100*i,200));
		pImg->SetTransparent(RGB(255,0,255));
		pAni->AddShot(pImg);
	}

	pAni->SetDelay(60);
}
CS_L_Jumpup_Attack::~CS_L_Jumpup_Attack()
{
}

void CS_L_Jumpup_Attack::Enter()
{
	if (pAni)
		pAni->Reset();
}
void CS_L_Jumpup_Attack::Input(DWORD tick)
{
}
void CS_L_Jumpup_Attack::Update(DWORD tick)
{
	if (pAni)
	{
		pAni->Update(tick);
		if (!pAni->IsPlaying())
			m_pMachine->transition(L_JUMPUP);
	}
}
void CS_L_Jumpup_Attack::Draw(HDC hdc)
{
	if (pAni)
	{
		pAni->SetRect(Rect(*pos, Size(100,100)));
		pAni->Draw(hdc);
	}
}
void CS_L_Jumpup_Attack::Leave()
{
}

////////////////////////////////////
// CS_Jumpfall
////////////////////////////////////

CS_Jumpfall_Attack::CS_Jumpfall_Attack()
{
	

	pAni = new Animation;
	for (int i = 0; i < 1; i++)
	{
		Image* pImg = new Image;
		pImg->Load(_T("2P_Jumpfall_Attack.bmp"), Rect(100*i,0,100 + 100*i,100));
		pImg->SetTransparent(RGB(255,0,255));
		pAni->AddShot(pImg);
	}

	pAni->SetDelay(60);
	//DeleteObject(htempbitmap);
}
CS_Jumpfall_Attack::~CS_Jumpfall_Attack()
{
}

void CS_Jumpfall_Attack::Enter()
{
	if (pAni)
		pAni->Reset();
}
void CS_Jumpfall_Attack::Input(DWORD tick)
{
}
void CS_Jumpfall_Attack::Update(DWORD tick)
{
	if (pAni)
	{
		pAni->Update(tick);
		if (!pAni->IsPlaying())
			m_pMachine->transition(JUMPFALL);
	}
}
void CS_Jumpfall_Attack::Draw(HDC hdc)
{
	if (pAni)
	{
		pAni->SetRect(Rect(*pos, Size(100,100)));
		pAni->Draw(hdc);
	}
}
void CS_Jumpfall_Attack::Leave()
{
}

CS_L_Jumpfall_Attack::CS_L_Jumpfall_Attack()
{

	pAni = new Animation;
	for (int i = 0; i < 1; i++)
	{
		Image* pImg = new Image;
		pImg->Load(_T("2P_Jumpfall_Attack.bmp"), Rect(100*i,100,100 + 100*i,200));
		pImg->SetTransparent(RGB(255,0,255));
		pAni->AddShot(pImg);
	}

	pAni->SetDelay(60);
}
CS_L_Jumpfall_Attack::~CS_L_Jumpfall_Attack()
{
}

void CS_L_Jumpfall_Attack::Enter()
{
	if (pAni)
		pAni->Reset();
}
void CS_L_Jumpfall_Attack::Input(DWORD tick)
{
}
void CS_L_Jumpfall_Attack::Update(DWORD tick)
{
	if (pAni)
	{
		pAni->Update(tick);
		if (!pAni->IsPlaying())
			m_pMachine->transition(L_JUMPFALL);
	}
}
void CS_L_Jumpfall_Attack::Draw(HDC hdc)
{
	if (pAni)
	{
		pAni->SetRect(Rect(*pos, Size(100,100)));
		pAni->Draw(hdc);
	}
}
void CS_L_Jumpfall_Attack::Leave()
{
}