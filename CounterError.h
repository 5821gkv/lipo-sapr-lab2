#ifndef COUNTERERROR_H_
#define COUNTERERROR_H_

#include <pcrecpp.h> //библиотека pcre-совместимых регулярных выражений

using namespace std;
using namespace pcrecpp;

class CounterError {
public:
	CounterError();
	virtual ~CounterError();
	int CountErorrs();
};

#endif /* COUNTERERROR_H_ */
