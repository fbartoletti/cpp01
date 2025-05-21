#include <iostream>
#include <fstream>
#include <string>

std::string replaceAll(std::string str, const std::string& s1, const std::string& s2) {
	if (s1.empty())
		return str;
	size_t pos = 0;
	while ((pos = str.find(s1, pos)) != std::string::npos) {
		str = str.substr(0, pos) + s2 + str.substr(pos + s1.length());
		pos += s2.length();
	}
	
	return str;
}

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Uso: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (s1.empty()) {
		std::cerr << "La stringa da sostituire non può essere vuota" << std::endl;
		return 1;
	}
	std::ifstream inFile(filename.c_str());
	if (!inFile.is_open()) {
		std::cerr << "Impossibile aprire il file: " << filename << std::endl;
		return 1;
	}
	std::string outFilename = filename + ".replace";
	std::ofstream outFile(outFilename.c_str());
	if (!outFile.is_open()) {
		std::cerr << "Impossibile creare il file: " << outFilename << std::endl;
		inFile.close();
		return 1;
	}
	std::string line;
	while (std::getline(inFile, line)) {
		std::string modifiedLine = replaceAll(line, s1, s2);
		outFile << modifiedLine;
		if (!inFile.eof()) {
			outFile << std::endl;
		}
	}
	inFile.close();
	outFile.close();
	std::cout << "Sostituzione completata. Risultato salvato in: " << outFilename << std::endl;

	return 0;
}
