#include "Character.h"

/////////////////////////////////////////////////
// CharacterState Impl
/////////////////////////////////////////////////
CharacterState::CharacterState()
: pos(NULL), pAni(NULL),Jumpmaxpower(15)
{}
CharacterState::~CharacterState()
{
	if (pAni)
	{
		delete pAni;
		pAni = NULL;
	}
}
void CharacterState::SetPositionLink(Point& p)
{
	pos = &p;
}
void CharacterState::SetImageSize(const Size& s)
{
	ImageSize = s;
}

void CharacterState::SetJumpPowerLink(int& pow)
{
	Jumppower=&pow;
}


