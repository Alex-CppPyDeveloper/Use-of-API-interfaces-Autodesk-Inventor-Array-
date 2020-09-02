﻿// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <locale>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int Xsize, Ysize, i, j, pr;
	cin>> Xsize >> Ysize;
	int **mass = new int *[Xsize];
	int **mass1 = new int *[Xsize];
	int **mass2 = new int *[Xsize];
	for(i = 0; i < Xsize; i++)
	{
		mass[i] = new int [Ysize];
		mass1[i] = new int[Ysize];
		mass2[i] = new int[Ysize];
	}

	for (i = 0; i < Xsize; i++)
	{
		for (j = 0; j < Ysize; j++)
		{
			mass[i][j] = rand() % 101;
			mass1[i][j] = rand() % 101;
			mass2[i][j] = 0;
			cout << mass[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;

	for (i = 0; i < Xsize; i++)
	{
		for (j = 0; j < Ysize; j++)
		{

			cout << mass1[i][j] << " ";
		}
		cout << endl;
	}
	for (i = 0; i < Xsize; i++)
	{
		for (j= 0; j < Ysize; j++)
		{

		 for(int k=0; k<Ysize; k++)
			{
				mass2[i][j] = mass2[i][j] + mass[i][k] * mass1[k][j];
			}
		}

	}
	cout << endl;
	for (i = 0; i < Xsize; i++)
	{
		for (j = 0; j < Ysize; j++)
		{

			cout << mass2[i][j] << " ";
		}
		cout << endl;
	}
		delete[] mass;
		system("pause");
		return 0;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
