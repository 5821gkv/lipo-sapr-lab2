#include <fstream>
#include <iostream>
#include "CounterErrorTester.h"
#include "CounterError.h"

using namespace std;

CounterErrorTester::CounterErrorTester() {
}

CounterErrorTester::~CounterErrorTester() {
}

int CounterErrorTester::testErrorCounter(ifstream& aInStream, CounterError& bProcessor, const char* cFilename)
{
	aInStream.open(cFilename);		//открываем файл
	cin.rdbuf(aInStream.rdbuf());		//получаем буфер
	int result = bProcessor.CountErorrs();  //вызываем счетчик ошибок
	aInStream.close();			//закрываем файл
	return result;				//отправляем результат
}						

