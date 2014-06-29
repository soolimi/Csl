#include "KeyManager.h"

KeyManager::KeyManager()
:keydown(false)
{}
KeyManager::~KeyManager()
{}
bool KeyManager::KeyUpAction(const int &key)
{
	if ((::GetAsyncKeyState(key) & 0x8000) == 0x8000)
	{
		keydown=true;
	}
	else if ((::GetAsyncKeyState(key) & 0x8000) != 0x8000&&keydown)
	{
		keydown=false;
		return true;
	}
	return false;
}

bool KeyManager::KeyDownAction(const int &key)
{
	
	if ((::GetAsyncKeyState(key) & 0x8000) != 0x8000)
	{
		keydown=true;
	}
	else if ((::GetAsyncKeyState(key) & 0x8000) == 0x8000&&keydown)
	{
		keydown=false;
		return true;
	}
	return false;
}
