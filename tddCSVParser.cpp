#include "CSVParser.h"
#include <iostream>

int main() {
	io::CSVReader<4> in("input.csv");
	in.read_header(io::ignore_extra_column, "first", "second", "third", "fourth");
	int first; int second; int third; int fourth;
	while (in.read_row(first, second, third, fourth)) {
		std::cout << "First  : " << first << std::endl;
		std::cout << "Second : " << second << std::endl;
		std::cout << "Third  : " << third << std::endl;
	}
	std::cin >> first;
}