#pragma once

#include "FSM.h"
#include <list>

enum Object_type_id
{
	OBJ_NONE,
	OBJ_CHARACTER,
	OBJ_BULLET,
	OBJ_ITEM,
	OBJ_ENEMY,
};

class ObjectManager : public singleton<ObjectManager>
{
	friend class singleton<ObjectManager>;
private :
	ObjectManager();
	virtual ~ObjectManager();

public :
	void Attach(HWND);

	void Input(DWORD);
	void Update(DWORD);
	void Draw(HDC);

	void push(StateMachine*);
	void pop(StateMachine*);

	void clear();

private :
	void _clean();

private :
	HWND hOwner;

	std::list<StateMachine*> depot;
};

#define ObjectDepot ObjectManager::GetReference()