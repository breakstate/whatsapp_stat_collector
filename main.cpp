#include <string>
#include <iostream>
#include <fstream>

#include "StatCollector.hpp"

int main (int argc, char** argv) {
	StatCollector stats;

	stats.readLine(argv[1]);
	stats.printStats();
}