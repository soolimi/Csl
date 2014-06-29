#include "Map.h"

Map::Map()
{
	imap.Load(_T("map.bmp"),Rect(0,0,640,224));
	Hero.SetPosition(Point(30,120));
}
Map::~Map()
{}

void Map::Attach(HWND hWnd)
{
	hOnwer=hWnd;
}
void Map::Input(DWORD tick)
{
	Hero.Input(tick);
}
void Map::Update(DWORD tick)
{
	Hero.Update(tick);
}
void Map::Draw(HDC hdc)
{
	Rect rc;
	GetClientRect(hOnwer,&rc);
	std::list<StateMachine*>::iterator it;
	imap.Load(_T("map.bmp"),Rect(0+(Hero.GetPosition().x),0,640+(Hero.GetPosition().x),224));
	imap.SetTransparent(RGB(255,0,255));
	imap.SetRect(Rect(rc.center(),Size(640,224)));
	imap.Draw(hdc);
	Hero.Draw(hdc);
}
void Map::Push(StateMachine* obj)
{
	//depot.push_back(obj);
}
void Map::Pop(StateMachine* obj)
{

}