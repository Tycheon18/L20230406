#include "Character.h"
#include <iostream>

FCharacter::FCharacter()
{
	std::cout << "캐릭터 생성" << std::endl;
}

FCharacter::~FCharacter()
{
	std::cout << "캐릭터 삭제" << std::endl;
}

void FCharacter::Move()
{
	std::cout << "이동한다." << std::endl;
}

void FCharacter::Attack()
{
}
