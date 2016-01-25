#include <iostream>
#include "CounterError.h"
#include <pcrecpp.h> //библиотека pcre-совместимых регулярных выражений

using namespace std;
using namespace pcrecpp;

CounterError::CounterError() {
}

CounterError::~CounterError() {
}

int CounterError::CountErorrs(){
		int counter = 0; 	//Счетчик ошибок
		RE re(".+error:.+");    //Регулярное выражение для поиска строк с ошибками
		string line = ""; 	//Переменная для работы с строкой из файла

					//Чтение из файла построчно и увеличение счетчика
		while( getline (cin,line) )
		{
			if(re.FullMatch(line))
				counter++;
		}

					//Вывод количества ошибок
		return  counter;
}

