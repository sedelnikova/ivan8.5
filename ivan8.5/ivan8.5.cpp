﻿// ivan8.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Дано целое число. Вывести его строку-описание вида «отрицательное четное число», «нулевое число», «положительное нечетное число» и т. д.

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int A;
	cout << "Введите, пожалуйста, целое число: ";
	cin >> A;
	if (A == 0)
	{
		cout << "Нулевое " << endl;
	}
	if (A > 0)
	{
		cout << "Положительное " << endl;
	}
	else
	{
		cout << "Отрицательное " << endl;
	}
	if ((A % 2) == 0)
	{
		cout << "четное " << endl;
	}
	else
	{
		cout << "нечетное " << endl;
	}
	cout << "число" << endl;
	return 0;
}

