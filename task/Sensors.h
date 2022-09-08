﻿#pragma once

#include <iostream>

using namespace std;

/*	 
	Классы подсистемы:
- реализуют функциональность подсистемы;
- выполняют работу, порученную объектом Facade;
- ничего не знает о существовании фасада, то есть не хранит ссылок на него.
*/
class Sensors // Датчики.
{
public:
	void Action_2() // 2. Датчики: проверить напряжение.	
	{
		cout << "2. Датчики: проверить напряжение.\n";
	}

	void Action_3() // 3. Датчики: проверить температуру в блоке питания.
	{
		cout << "3. Датчики: проверить температуру в блоке питания.\n";
	}

	void Action_4() // 4. Датчики: проверить температуру в видеокарте.
	{
		cout << "4. Датчики: проверить температуру в видеокарте.\n";
	}

	void Action_8() // 8. Датчики: проверить температуру в оперативной памяти.
	{
		cout << "8. Датчики: проверить температуру в оперативной памяти.\n";
	}

	void Action_21() // 21.Датчики: проверить температуру всех систем.
	{
		cout << "21.Датчики: проверить температуру всех систем.\n";
	}
};