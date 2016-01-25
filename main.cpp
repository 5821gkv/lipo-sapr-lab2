#include <pcrecpp.h> //библиотека pcre-совместимых регулярных выражений
#include <iostream>
#include "CounterError.h"

using namespace std;
using namespace pcrecpp;

int main() 
{
	CounterError processor;
	cout << "Errors number: " << processor.CountErorrs() << endl;
    	return 0;
}




