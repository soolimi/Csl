#pragma once

#include "FSM.h"
#include "BaseType.h"
#include "Animation.h"
#include "KeyManager.h"

enum Character_State_id
{
	IDLE,
	L_IDLE,
	KEY_UP,
	L_KEY_UP,
	KEY_UP_ATTACK,
	L_KEY_UP_ATTACK,
	JUMPUP,
	L_JUMPUP,
	JUMPUP_ATTACK,
	L_JUMPUP_ATTACK,
	JUMPTOP,
	L_JUMPTOP,
	JUMPFALL,
	L_JUMPFALL,
	JUMPFALL_ATTACK,
	L_JUMPFALL_ATTACK,
	JUMPEND,
	L_JUMPEND,
	ATTACK,
	L_ATTACK,
	SIT,
	L_SIT,
	SIT_ATTACK,
	L_SIT_ATTACK,
	GO_FORWARD,
	L_GO_FORWARD,
	
};


class CharacterState : public State
{
public :
	CharacterState();
	virtual ~CharacterState();

	virtual void Enter() = 0;
	virtual void Input(DWORD tick) = 0;
	virtual void Update(DWORD tick) = 0;
	virtual void Draw(HDC hdc) = 0;
	virtual void Leave() = 0;

	void SetPositionLink(Point& p);
	void SetImageSize(const Size& s);
	void SetJumpPowerLink(int& pow);
protected :
	Size ImageSize;
	Point* pos;
	Animation* pAni;
	int *Jumppower;
	int Jumpmaxpower;
};

class Character : public StateMachine
{
public :
	Character();
	virtual ~Character();

	void SetImageSize(const Size& s);
	void SetPosition(const Point& p);
	Point GetPosition() const;
protected :
	Size ImageSize;
	Point pos;
	int Jumppower;
	
};

/////////////////////////////////////////////////
// CS_Idle Impl
/////////////////////////////////////////////////

class CS_Idle : public CharacterState
{
public :
	CS_Idle();
	virtual ~CS_Idle();

	virtual void Enter();
	virtual void Input(DWORD tick);
	virtual void Update(DWORD tick);
	virtual void Draw(HDC hdc);
	virtual void Leave();
};

class CS_L_Idle : public CharacterState
{
public :
	CS_L_Idle();
	virtual ~CS_L_Idle();

	virtual void Enter();
	virtual void Input(DWORD tick);
	virtual void Update(DWORD tick);
	virtual void Draw(HDC hdc);
	virtual void Leave();
};

/////////////////////////////////////////////////
// CS_Key_up Impl
/////////////////////////////////////////////////
class CS_Keyup : public CharacterState
{
public :
	CS_Keyup();
	virtual ~CS_Keyup();

	virtual void Enter();
	virtual void Input(DWORD tick);
	virtual void Update(DWORD tick);
	virtual void Draw(HDC hdc);
	virtual void Leave();
};

class CS_L_Keyup : public CharacterState
{
public :
	CS_L_Keyup();
	virtual ~CS_L_Keyup();

	virtual void Enter();
	virtual void Input(DWORD tick);
	virtual void Update(DWORD tick);
	virtual void Draw(HDC hdc);
	virtual void Leave();
};

/////////////////////////////////////////////////
// CS_Jump Impl
/////////////////////////////////////////////////

class CS_Jumpup : public CharacterState
{
public :
	CS_Jumpup();
	virtual ~CS_Jumpup();

	virtual void Enter();
	virtual void Input(DWORD tick);
	virtual void Update(DWORD tick);
	virtual void Draw(HDC hdc);
	virtual void Leave();
};

class CS_L_Jumpup : public CharacterState
{
public :
	CS_L_Jumpup();
	virtual ~CS_L_Jumpup();

	virtual void Enter();
	virtual void Input(DWORD tick);
	virtual void Update(DWORD tick);
	virtual void Draw(HDC hdc);
	virtual void Leave();
};


class CS_Jumptop : public CharacterState
{
public :
	CS_Jumptop();
	virtual ~CS_Jumptop();

	virtual void Enter();
	virtual void Input(DWORD tick);
	virtual void Update(DWORD tick);
	virtual void Draw(HDC hdc);
	virtual void Leave();
};

class CS_L_Jumptop : public CharacterState
{
public :
	CS_L_Jumptop();
	virtual ~CS_L_Jumptop();

	virtual void Enter();
	virtual void Input(DWORD tick);
	virtual void Update(DWORD tick);
	virtual void Draw(HDC hdc);
	virtual void Leave();
};

class CS_Jumpfall : public CharacterState
{
public :
	CS_Jumpfall();
	virtual ~CS_Jumpfall();

	virtual void Enter();
	virtual void Input(DWORD tick);
	virtual void Update(DWORD tick);
	virtual void Draw(HDC hdc);
	virtual void Leave();
};

class CS_L_Jumpfall : public CharacterState
{
public :
	CS_L_Jumpfall();
	virtual ~CS_L_Jumpfall();

	virtual void Enter();
	virtual void Input(DWORD tick);
	virtual void Update(DWORD tick);
	virtual void Draw(HDC hdc);
	virtual void Leave();
};

class CS_Jumpend : public CharacterState
{
public :
	CS_Jumpend();
	virtual ~CS_Jumpend();

	virtual void Enter();
	virtual void Input(DWORD tick);
	virtual void Update(DWORD tick);
	virtual void Draw(HDC hdc);
	virtual void Leave();
};

class CS_L_Jumpend : public CharacterState
{
public :
	CS_L_Jumpend();
	virtual ~CS_L_Jumpend();

	virtual void Enter();
	virtual void Input(DWORD tick);
	virtual void Update(DWORD tick);
	virtual void Draw(HDC hdc);
	virtual void Leave();
};


/////////////////////////////////////////////////
// CS_Attack Impl
/////////////////////////////////////////////////

class CS_Attack : public CharacterState
{
public :
	CS_Attack();
	virtual ~CS_Attack();

	virtual void Enter();
	virtual void Input(DWORD tick);
	virtual void Update(DWORD tick);
	virtual void Draw(HDC hdc);
	virtual void Leave();
};

class CS_L_Attack : public CharacterState
{
public :
	CS_L_Attack();
	virtual ~CS_L_Attack();

	virtual void Enter();
	virtual void Input(DWORD tick);
	virtual void Update(DWORD tick);
	virtual void Draw(HDC hdc);
	virtual void Leave();
};

class CS_Keyup_Attack : public CharacterState
{
public :
	CS_Keyup_Attack();
	virtual ~CS_Keyup_Attack();

	virtual void Enter();
	virtual void Input(DWORD tick);
	virtual void Update(DWORD tick);
	virtual void Draw(HDC hdc);
	virtual void Leave();
};

class CS_L_Keyup_Attack : public CharacterState
{
public :
	CS_L_Keyup_Attack();
	virtual ~CS_L_Keyup_Attack();

	virtual void Enter();
	virtual void Input(DWORD tick);
	virtual void Update(DWORD tick);
	virtual void Draw(HDC hdc);
	virtual void Leave();
};

class CS_Sit_Attack : public CharacterState
{
public :
	CS_Sit_Attack();
	virtual ~CS_Sit_Attack();

	virtual void Enter();
	virtual void Input(DWORD tick);
	virtual void Update(DWORD tick);
	virtual void Draw(HDC hdc);
	virtual void Leave();
};

class CS_L_Sit_Attack : public CharacterState
{
public :
	CS_L_Sit_Attack();
	virtual ~CS_L_Sit_Attack();

	virtual void Enter();
	virtual void Input(DWORD tick);
	virtual void Update(DWORD tick);
	virtual void Draw(HDC hdc);
	virtual void Leave();
};


class CS_Jumpup_Attack : public CharacterState
{
public :
	CS_Jumpup_Attack();
	virtual ~CS_Jumpup_Attack();

	virtual void Enter();
	virtual void Input(DWORD tick);
	virtual void Update(DWORD tick);
	virtual void Draw(HDC hdc);
	virtual void Leave();
};

class CS_L_Jumpup_Attack : public CharacterState
{
public :
	CS_L_Jumpup_Attack();
	virtual ~CS_L_Jumpup_Attack();

	virtual void Enter();
	virtual void Input(DWORD tick);
	virtual void Update(DWORD tick);
	virtual void Draw(HDC hdc);
	virtual void Leave();
};

class CS_Jumpfall_Attack : public CharacterState
{
public :
	CS_Jumpfall_Attack();
	virtual ~CS_Jumpfall_Attack();

	virtual void Enter();
	virtual void Input(DWORD tick);
	virtual void Update(DWORD tick);
	virtual void Draw(HDC hdc);
	virtual void Leave();
};

class CS_L_Jumpfall_Attack : public CharacterState
{
public :
	CS_L_Jumpfall_Attack();
	virtual ~CS_L_Jumpfall_Attack();

	virtual void Enter();
	virtual void Input(DWORD tick);
	virtual void Update(DWORD tick);
	virtual void Draw(HDC hdc);
	virtual void Leave();
};

/////////////////////////////////////////////////
// CS_Move Impl
/////////////////////////////////////////////////

class CS_Go_Forward : public CharacterState
{
public :
	CS_Go_Forward();
	virtual ~CS_Go_Forward();

	virtual void Enter();
	virtual void Input(DWORD tick);
	virtual void Update(DWORD tick);
	virtual void Draw(HDC hdc);
	virtual void Leave();
};

class CS_L_Go_Forward : public CharacterState
{
public :
	CS_L_Go_Forward();
	virtual ~CS_L_Go_Forward();

	virtual void Enter();
	virtual void Input(DWORD tick);
	virtual void Update(DWORD tick);
	virtual void Draw(HDC hdc);
	virtual void Leave();
};


/////////////////////////////////////////////////
// CS_Sit Impl
/////////////////////////////////////////////////

class CS_Sit : public CharacterState
{
public :
	CS_Sit();
	virtual ~CS_Sit();

	virtual void Enter();
	virtual void Input(DWORD tick);
	virtual void Update(DWORD tick);
	virtual void Draw(HDC hdc);
	virtual void Leave();
};

class CS_L_Sit : public CharacterState
{
public :
	CS_L_Sit();
	virtual ~CS_L_Sit();

	virtual void Enter();
	virtual void Input(DWORD tick);
	virtual void Update(DWORD tick);
	virtual void Draw(HDC hdc);
	virtual void Leave();
};

