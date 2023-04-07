#include "Player.h"
#include <iostream>

FPlayer::FPlayer()
{
	std::cout << "플레이어 생성" << std::endl;
}

FPlayer::~FPlayer()
{
	std::cout << "플레이어 삭제" << std::endl;
}

void FPlayer::Move()
{
	std::cout << "플레이어 이동" << std::endl;
}
