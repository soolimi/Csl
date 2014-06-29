#pragma once

#include "BaseType.h"
#include "Utility.hpp"
#include "Image.h"
#include "FSM.h"
#include <list>
#include "Character.h"

class Map
{
public:
	Map();
	~Map();
	void Attach(HWND hWnd);
	void Input(DWORD tick);
	void Update(DWORD tick);
	void Draw(HDC hdc);
	void Push(StateMachine* obj);
	void Pop(StateMachine* obj);
	
private:
	HWND hOnwer;
	Image imap;
	Character Hero;
};