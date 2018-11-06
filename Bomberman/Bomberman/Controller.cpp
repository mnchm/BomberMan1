#include "Controller.h"

#include <sstream> 
#include <string>
#include <fstream>
#include <cstdlib>

std::ifstream file;

Controller::Controller()
{
	file.open("Board.txt");
}


Controller::~Controller()
{
}

void Controller::readText()
{
	std::string line;

	std::istringstream iss;
	int size, steps;
	while (!file.eof()) {
		std::getline(file, line);
		iss.str(line);
		iss >> size >> steps;
	}
}