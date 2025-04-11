#include "Harl.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Usage: " << argv[0] << " [DEBUG|INFO|WARNING|ERROR]" << std::endl;
		return 1;
	}
	Harl harl;
	std::string level = argv[1];
	int levelIndex = -1;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			levelIndex = i;
			break;
		}
	}
	switch (levelIndex) {
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return 0;
}
