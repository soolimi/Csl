#include "Character.h"

Character::Character()
:Jumppower(0)
{

	// Idle
	CS_Idle* pIdle = new CS_Idle;
	pIdle->SetPositionLink(pos);
	AddEntry(IDLE, pIdle);

	CS_L_Idle* pL_Idle = new CS_L_Idle;
	pL_Idle->SetPositionLink(pos);
	AddEntry(L_IDLE, pL_Idle);

	// Keyup
	CS_Keyup* pKeyup = new CS_Keyup;
	pKeyup->SetPositionLink(pos);
	AddEntry(KEY_UP, pKeyup);

	CS_L_Keyup* pL_Keyup = new CS_L_Keyup;
	pL_Keyup->SetPositionLink(pos);
	AddEntry(L_KEY_UP, pL_Keyup);

	CS_Keyup_Attack* pKeyup_Attack = new CS_Keyup_Attack;
	pKeyup_Attack->SetPositionLink(pos);
	AddEntry(KEY_UP_ATTACK, pKeyup_Attack);

	CS_L_Keyup_Attack* pL_Keyup_Attack = new CS_L_Keyup_Attack;
	pL_Keyup_Attack->SetPositionLink(pos);
	AddEntry(L_KEY_UP_ATTACK, pL_Keyup_Attack);

	// Jump
	CS_Jumpup* pJumpup = new CS_Jumpup;
	pJumpup->SetPositionLink(pos);
	pJumpup->SetJumpPowerLink(Jumppower);
	AddEntry(JUMPUP, pJumpup);

	CS_L_Jumpup* pL_Jumpup = new CS_L_Jumpup;
	pL_Jumpup->SetPositionLink(pos);
	pL_Jumpup->SetJumpPowerLink(Jumppower);
	AddEntry(L_JUMPUP, pL_Jumpup);

	CS_Jumpup_Attack* pJumpup_Attack = new CS_Jumpup_Attack;
	pJumpup_Attack->SetPositionLink(pos);
	AddEntry(JUMPUP_ATTACK, pJumpup_Attack);

	CS_L_Jumpup_Attack* pL_Jumpup_Attack = new CS_L_Jumpup_Attack;
	pL_Jumpup_Attack->SetPositionLink(pos);
	AddEntry(L_JUMPUP_ATTACK, pL_Jumpup_Attack);

	CS_Jumptop* pJumptop = new CS_Jumptop;
	pJumptop->SetPositionLink(pos);
	pJumptop->SetJumpPowerLink(Jumppower);
	AddEntry(JUMPTOP, pJumptop);

	CS_L_Jumptop* pL_Jumptop = new CS_L_Jumptop;
	pL_Jumptop->SetPositionLink(pos);
	pL_Jumptop->SetJumpPowerLink(Jumppower);
	AddEntry(L_JUMPTOP, pL_Jumptop);

	CS_Jumpfall* pJumpfall = new CS_Jumpfall;
	pJumpfall->SetPositionLink(pos);
	pJumpfall->SetJumpPowerLink(Jumppower);
	AddEntry(JUMPFALL, pJumpfall);

	CS_L_Jumpfall* pL_Jumpfall = new CS_L_Jumpfall;
	pL_Jumpfall->SetPositionLink(pos);
	pL_Jumpfall->SetJumpPowerLink(Jumppower);
	AddEntry(L_JUMPFALL, pL_Jumpfall);

	CS_Jumpfall_Attack* pJumpfall_Attack = new CS_Jumpfall_Attack;
	pJumpfall_Attack->SetPositionLink(pos);
	pJumpfall_Attack->SetJumpPowerLink(Jumppower);
	AddEntry(JUMPFALL_ATTACK, pJumpfall_Attack);

	CS_L_Jumpfall_Attack* pL_Jumpfall_Attack = new CS_L_Jumpfall_Attack;
	pL_Jumpfall_Attack->SetPositionLink(pos);
	pL_Jumpfall_Attack->SetJumpPowerLink(Jumppower);
	AddEntry(L_JUMPFALL_ATTACK, pL_Jumpfall_Attack);

	CS_Jumpend* pJumpend = new CS_Jumpend;
	pJumpend->SetPositionLink(pos);
	pJumpend->SetJumpPowerLink(Jumppower);
	AddEntry(JUMPEND, pJumpend);

	// Attack
	CS_Attack* pAttack = new CS_Attack;
	pAttack->SetPositionLink(pos);
	AddEntry(ATTACK, pAttack);

	CS_L_Attack* pL_Attack = new CS_L_Attack;
	pL_Attack->SetPositionLink(pos);
	AddEntry(L_ATTACK, pL_Attack);


	// Sit
	CS_Sit* pSit = new CS_Sit;
	pSit->SetPositionLink(pos);
	AddEntry(SIT, pSit);

	CS_L_Sit* pL_Sit = new CS_L_Sit;
	pL_Sit->SetPositionLink(pos);
	AddEntry(L_SIT, pL_Sit);

	CS_Sit_Attack* pSit_Attack = new CS_Sit_Attack;
	pSit_Attack->SetPositionLink(pos);
	AddEntry(SIT_ATTACK, pSit_Attack);

	CS_L_Sit_Attack* pL_Sit_Attack = new CS_L_Sit_Attack;
	pL_Sit_Attack->SetPositionLink(pos);
	AddEntry(L_SIT_ATTACK, pL_Sit_Attack);


	// Move
	CS_Go_Forward* pGoF = new CS_Go_Forward;
	pGoF->SetPositionLink(pos);
	AddEntry(GO_FORWARD, pGoF);

	CS_L_Go_Forward* pL_GoF = new CS_L_Go_Forward;
	pL_GoF->SetPositionLink(pos);
	AddEntry(L_GO_FORWARD, pL_GoF);

	transition(IDLE);
}
Character::~Character()
{}

void Character::SetImageSize(const Size& s)
{
	ImageSize.cx=s.cx;
	ImageSize.cy=s.cy;
}

void Character::SetPosition(const Point& p)
{
	pos = p;
}
Point Character::GetPosition() const
{
	return pos;
}
