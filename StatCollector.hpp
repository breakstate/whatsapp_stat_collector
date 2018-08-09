#ifndef STATCOLLECTOR_H
# define STATCOLLECTOR_H

# include <string>
# include <iostream>
# include <fstream>

class StatCollector {
	public:

        StatCollector( void );
        ~StatCollector( void );
		void readLine( std::string filename );
    	void getMessageCount( std::string line ); // will adjust message count per user depending on user
        void printStats( void );

    protected:

    private:

    	std::string AName;
        std::string BName;
        int ALetterCount;
        int BLetterCount;
        int AWordCount;
        int BWordCount;
        int AMessageCount;
        int BMessageCount;

};

#endif