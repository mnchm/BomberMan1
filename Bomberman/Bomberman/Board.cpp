#include "Board.h"

#include <sstream> 
#include <string>
#include <fstream>
#include <cstdlib>





bool Board::readBoard(Player& player, std::ifstream& file)
{
	std::string line;
	if (!file.is_open()) return false;
	while
}

//void Board::readText()
//{
//	std::string line;
//	std::ifstream file;
//	std::istringstream iss;
//	file.open("Board.txt");
//	while (!file.eof()) {
//		std::getline(file, line);
//		iss.str(line);
//		iss >>
//	}
//}


Board::Board()
{
}


Board::~Board()
{
}
