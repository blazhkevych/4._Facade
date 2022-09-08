#pragma once

#include <iostream>

#include "HDD.h"
#include "OpticalDiscReader.h"
#include "PowerSupply.h"
#include "RAM.h"
#include "Sensors.h"
#include "VideoCard.h"

/*
	Facade - фасад:
- Знает, каким классам подсистемы адресовать запрос.
- Делегирует запросы клиентов подходящим объектам внутри подсистемы.
*/
class Facade
{
	VideoCard m_videoCard;					// Видеокарта.							
	RAM m_ram;								// Оперативная память.					
	HDD m_hdd;								// Винчестер.							
	OpticalDiscReader m_opticalDiscReader;	// Устройство чтения оптических дисков.	
	PowerSupply m_powerSupply;				// Блок питания.							
	Sensors m_sensors;						// Датчики.								
public:
	Facade(VideoCard videoCard, RAM ram, HDD hdd, OpticalDiscReader opticalDiscReader, PowerSupply powerSupply, Sensors sensors)
	{
		m_videoCard = videoCard;
		m_ram = ram;
		m_hdd = hdd;
		m_opticalDiscReader = opticalDiscReader;
		m_powerSupply = powerSupply;
		m_sensors = sensors;
	}

	// Запуск всей системы.
	void BeginWork()
	{
		cout << "Запуск всей системы" << endl;
		m_powerSupply.Action_1();
		m_sensors.Action_2();
		m_sensors.Action_3();
		m_sensors.Action_4();
		m_powerSupply.Action_5();
		m_videoCard.Action_6();
		m_videoCard.Action_7();
		m_sensors.Action_8();
		m_powerSupply.Action_9();
		m_ram.Action_10();
		m_ram.Action_11();
		m_videoCard.Action_12();
		m_powerSupply.Action_13();
		m_opticalDiscReader.Action_14();
		m_opticalDiscReader.Action_15();
		m_videoCard.Action_16();
		m_powerSupply.Action_17();
		m_hdd.Action_18();
		m_hdd.Action_19();
		m_videoCard.Action_20();
		m_sensors.Action_21();
	}

	// Остановка всей системы.
	void StopWork()
	{
		cout << "\nОстановка всей системы" << endl
			<< "\n1. Винчестер: остановка устройства."
			<< "\n2. Оперативная память : очистка памяти."
			<< "\n3. Оперативная память : анализ памяти."
			<< "\n4. Видео карта : вывести на монитор данные прощальное сообщение."
			<< "\n5. Устройство чтения дисков : вернуть в исходную позицию."
			<< "\n6. Блок питания : прекратить питание видео карты."
			<< "\n7. Блок питания : прекратить питание оперативной памяти."
			<< "\n8. Блок питания : прекратить питание устройства чтения дисков."
			<< "\n9. Блок питания : прекратить питание винчестера."
			<< "\n10.Датчики проверить напряжение."
			<< "\n11.Блок питания : выключение." << endl;
	}
};