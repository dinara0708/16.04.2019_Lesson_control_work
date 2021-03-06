﻿#pragma once
#include<iostream>
#include <iomanip>
#include<Windows.h>
#include<ctime>
#include<cstring>
#include<fstream>
using namespace std;


//	Необходимо создать класс для работы с массивом целых чисел.
//	Программа будет заполнять объекты данного класса определенными значениями.
//	В нашей программе мы предполагаем, что один объект – это один студент, а значение массива в данном объекте –это оценки студента за 12 месяцев.
//	В функции main() :
//	• Создаем минимум шесть объектов класса «массив».Размер массива в каждом объекте равен 12.Соответственно наши шесть объектов будут содержать оценки студентов за 12 месяцев.
//	• Для каждого объекта вызываем метод для заполнения массива случайными числами.
//	* Выводим значения всех объектов на консоль;
//	• Выполняем заданные в задаче задачи;
//	Программа должна выдавать следующие задачи:
//	  1. Найти объект(студента), которому лучшие оценки и вывести информацию о данном объекте на консоль;
//	  2. Найти объект(студента) в, которого худшие оценки и вывести информацию о данном объекте на консоль;
//	  3. Для каждого объекта вывести месяц в котором студента имел лучшую оценку
//	  4. Для каждого объекта вывести месяц в котором студента имел наихудшую оценку.
//	  5. Создать объект в который записать сумму всех остальных объектов;
//	  6. Создать объект в который записать разницу объекта у которого самые высокие оценки и объекта у которого самые низкие оценки.

//	Ход решения задачи :
//	  1. Необходимо создать класс «массив»
//		 который должен содержать следующие поля :
//	  а) Указатель на тип int(которому будет выделяться динамическая память заданного размера);
//	  б) Размер массива;
//	  который должен содержать следующие методы :
//	  • Конструктор по умолчанию;
//	  • Конструктор с параметрами;
//	  • Конструктор копирования;
//	  • Деструктор;
//	  • Методы для установки значений в поля класса(set - методы);
//	  • Методы для получения значений полей класса(get - методы);
//	  • Метод для вывода полей класса на консоль(информации о поезд).
//	  • Метод для поиска максимального элемента массива;
//	  • Метод для поиска минимального элемента минимального;
//	  * Метод для поиска суммы значений элементов массива;
//	  • Метод поиска среднеарифметического значения элементов массива;
//	  • Метод для заполнения массива случайными значениями в диапазоне[0 - 12](оценка).

//	2. Необходимо перегрузить следующие операторы, как методы класса «массив» :
//	  • Оператор(= ) присвоения;
//	  • Оператор(+) добавление;
//	  • Оператор(-) вычитание;
//	  • Оператор([]) индексации;
//	  • Оператор(> ) больше;
//	  • Оператор(< ) меньше;
//	  • Оператор(== ) равенство;
//	  • Оператор(!= ) не равенство.
//	Операторы условия(<, >, ==, != ) должны сравнивать среднеарифметическому значению всех элементов массива объекта.


class Array {
private:
	int *els;
	int size;
public:
	Array();
	Array(int size);
	Array(int size, int value);
	Array(const Array& obj);
	~Array();

	void setSize(int size);
	int getSize();

	void print();
	int max_el();
	int min_el();
	int sum();
	double average();
	Array random();//to the vector?

	Array operator=(const Array& obj);
	Array operator+(Array obj);
	Array operator+=(Array obj);
	Array operator-(Array obj);
	int operator[](int index);
	bool operator>(Array obj);
	bool operator<(Array obj);
	bool operator==(Array obj);
	bool operator!=(Array obj);
	
	friend istream& operator>>(istream& is, Array & obj);
	friend ostream& operator<<(ostream& os, Array obj);
};

istream& operator>>(istream& is, Array & obj);
ostream& operator<<(ostream& os, Array obj);