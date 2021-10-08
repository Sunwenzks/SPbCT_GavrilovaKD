//описание класса
#pragma once
#include <string>
#include <iostream>

using namespace std;
class Car { //конструктор без параметров 
public:
	Car(void);
public: //деструткор 
	~Car(void); //конструктор с параметрами
		Car(string, int, int); //конструктор копирования 
		Car(const Car&); //селекторы
	   string GetmarkHlreturnmark;
      int Getcyl() 
	  { return cyl; } 
	  int Getpower() 
	  { return power; } //модификаторы
	void Setmark(string); 
	void Setcyl(int); 
	void Setpower(int); //перегрузка операции присваивания
	Car& operator=(const Car&); //глобальные операторы-функции ввода-вывода
	friend istream& operator>>(istream& in, Car& c); 
	friend ostream& operator<<(ostream& out, const Car& c); //атрибуты protected:
	string mark; 
	int cyl;
	int power;
};


