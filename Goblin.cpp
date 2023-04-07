#include "Goblin.h"
#include <iostream>

FGoblin::FGoblin()
{
	std::cout << "고블린 생성" << std::endl;
}

FGoblin::~FGoblin()
{
	std::cout << "고블린 삭제" << std::endl;
}

void FGoblin::Move()
{
	std::cout << "고블린 이동" << std::endl;
}
