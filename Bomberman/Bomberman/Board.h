#pragma once
#include <fstream>
#include <vector>

#include "Player.h"

class Board
{
public:
	Board();
	~Board();
	bool readBoard(Player& player, std::ifstream& file);

private:
	std::vector<std::vector<unsigned char>> m_board;
};

