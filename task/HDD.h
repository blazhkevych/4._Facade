﻿#pragma once

#include <iostream>

using namespace std;

/*	 
	Классы подсистемы:
- реализуют функциональность подсистемы;
- выполняют работу, порученную объектом Facade;
- ничего не знает о существовании фасада, то есть не хранит ссылок на него.
*/
class HDD // Основной узел Винчестер.
{
public:
	void Action_18() // 18.Винчестер: запуск.
	{
		cout << "18.Винчестер: запуск.\n";
	}

	void Action_19() // 19.Винчестер: проверка загрузочного сектора.
	{
		cout << "19.Винчестер: проверка загрузочного сектора.\n";
	}
};