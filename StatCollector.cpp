#include "StatCollector.hpp"

StatCollector::StatCollector( void ){
	std::cout << "constructed" << std::endl; // debug
    this->ALetterCount = 0;
    this->BLetterCount = 0;
    this->AWordCount = 0;
    this->BWordCount = 0;
    this->AMessageCount = 0;
    this->BMessageCount = 0;
}

StatCollector::~StatCollector( void ){
}

void	StatCollector::readLine( std::string filename ){
	std::cout << "reading" << std::endl; // debug

  std::string line;
  std::ifstream myfile (filename.c_str());
  if (myfile.is_open())
  {
    while ( std::getline (myfile,line) )
    {
      //std::cout << line << '\n';
	  this->getMessageCount( line );
    }
    myfile.close();
  }

  else std::cout << "Unable to open file";
}

void	StatCollector::getMessageCount( std::string line ){
	if (line.find( "Brenton" ) != std::string::npos)
		this->BMessageCount++;
	if (line.find( "Chace Green" ) != std::string::npos)
		this->AMessageCount++;
}

void StatCollector::printStats( void ){
	std::cout << "Brenton: " << this->BMessageCount << std::endl;
	std::cout << "Chace: " << this->AMessageCount << std::endl;
}
