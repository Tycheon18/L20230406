#pragma once
#include "Character.h"

class FSlime : public FCharacter
{
public:
	FSlime();
	virtual ~FSlime();

	virtual void Move() override;
};