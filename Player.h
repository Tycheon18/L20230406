#pragma once
#include "Character.h"

class FPlayer : public FCharacter
{
public:
	FPlayer();
	virtual ~FPlayer();

	virtual void Move() override;
};

