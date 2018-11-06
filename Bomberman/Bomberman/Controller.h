#pragma once
#include "Board.h"
#include "Player.h"
#include "Guard.h"

#include <vector>
class Controller
{
public:
	Controller();
	~Controller();
	void readText();

private:
	Player m_player;
	std::vector<Guard> m_guards;
	Board m_board;
};

