#include "CounterError.h"
#include <iostream>
#include <fstream>
#include "CounterErrorTester.h"

using namespace std;

int main()
{
	CounterError processor;
	CounterErrorTester processorTester;
	ifstream inStream;			//создание обектов классов

	int test1 = processorTester.testErrorCounter(inStream, processor, "test_material/with_2_errors.log");
	int test2 = processorTester.testErrorCounter(inStream, processor, "test_material/with_5_errors.log");
	int test3 = processorTester.testErrorCounter(inStream, processor, "test_material/with_21_errors.log");

	if(test1 == 2)
		cout << "Test 1: OK" << endl;  //если количество найденых ошибок совпало с заявленным, то хорошо
	else
		cout << "Test 1: FAIL\n\tОжидаемый результат: 2\n\tПолученный результат: " << test1 << endl;

	if(test2 == 5)
		cout << "Test 2: OK" << endl;
	else
		cout << "Test 2: FAIL\n\tОжидаемый результат: 5\n\tПолученный результат: " << test2 << endl;

	if(test3 == 21)
		cout << "Test 3: OK" << endl;
	else
		cout << "Test 3: FAIL\n\tОжидаемый результат: 21\n\tПолученный результат: " << test3 << endl;

	return 0;
}


