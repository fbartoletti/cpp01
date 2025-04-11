#include "Harl.hpp"

int main() {
	Harl harl;

	std::cout << "Calling DEBUG level:" << std::endl;
	harl.complain("DEBUG");
	std::cout << "Calling INFO level:" << std::endl;
	harl.complain("INFO");
	std::cout << "Calling WARNING level:" << std::endl;
	harl.complain("WARNING");
	std::cout << "Calling ERROR level:" << std::endl;
	harl.complain("ERROR");
	std::cout << "Calling invalid level:" << std::endl;
	harl.complain("INVALID");

	return 0;
}
