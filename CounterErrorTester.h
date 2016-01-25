#ifndef COUNTERERRORTESTER_H_
#define COUNTERERRORTESTER_H_

#include <fstream>
#include "CounterError.h"

using namespace std;

class CounterErrorTester {
public:
	CounterErrorTester();
	virtual ~CounterErrorTester();
	int testErrorCounter(ifstream& aInStream, CounterError& bProcessor, const char* cFilename);
};

#endif /* COUNTERERRORTESTER_H_ */
