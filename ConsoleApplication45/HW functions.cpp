#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#include "Header.h"
#include <conio.h>

using namespace std;

void createAndPrintMyMatrix(int(*mas)[col], int r, int start, int end)
{
	int btw = end - start;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < col; j++)
		{
			mas[i][j] = start + rand() % btw;
			cout << mas[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl << endl;
}

void moduleInColMas(int(*mas)[col])
{
	int newMas[col], maxModule = 0;
	cout << "сформир. одномерный массив из наибольших по модулю чисел из каждого столбца:\n";
	for (int j = 0; j < col; j++)
	{
		for (int i = 0; i < col; i++)
		{
			if (abs(mas[i][j]) > abs(maxModule))
				maxModule = mas[i][j];
		}
		newMas[j] = maxModule;
		cout << newMas[j] << "\t";
		maxModule = 0;
	}
	cout << endl << endl;
}

void moduleInStrMas(int(*mas)[col])
{
	int newMas[col], maxModule = 0;
	cout << "сформир. одномерный массив из наибольших по модулю чисел из каждой строки:\n";
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (abs(mas[i][j]) > abs(maxModule))
				maxModule = mas[i][j];
		}
		newMas[i] = maxModule;
		cout << newMas[i] << "\t";
		maxModule = 0;
	}
	cout << endl << endl;
}

void chetInStrMas(int(*mas)[col])
{
	int newMas[col] = { 0 }, count = 0;
	cout << "сформир. одномерный массив из первых четных чисел из каждой строки:\n";
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (mas[i][j] % 2 == 0&&mas[i][j]!=0)
			{
				newMas[i] = mas[i][j];
				break;
			}
		}
		cout << newMas[i] << "\t";
	}
	cout << endl << endl;
}

void chetInColMas(int(*mas)[col])
{
	int newMas[col] = { 0 }, count = 0;
	cout << "сформир. одномерный массив из первых четных чисел из каждого столбца:\n";
	for (int j = 0; j < col; j++)
	{
		for (int i = 0; i < col; i++)
		{
			if (mas[i][j] % 2 == 0 && mas[i][j] != 0)
			{
				newMas[j] = mas[i][j];
				break;
			}
		}
		cout << newMas[j] << "\t";
	}
	cout << endl << endl;
}

void nOfnGreaterThanUrNumber(int(*mas)[col])
{
	int newMas[col], count = 0, b;
	cout << "введите любое число: ";
	cin >> b;
	cout << "сформир. одномерный массив из кол-ва чисел, которые больше заданного \nиз каждого столбца:\n";
	for (int j = 0; j < col; j++)
	{
		for (int i = 0; i < col; i++)
		{
			if (mas[i][j] > b)
			{
				count++;
			}
		}
		newMas[j] = count;
		cout << newMas[j] << "\t";
		count = 0;
	}
	cout << endl << endl;
}

void sumOfnumbersThatAreLessThanUrNumber(int(*mas)[col])
{
	int newMas[col], sum = 0, b;
	cout << "введите любое число: ";
	cin >> b;
	cout << "сформир. одномерный массив из суммы чисел, которые меньше заданного \nиз каждой строки:\n";
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (mas[i][j] < b)
			{
				sum += mas[i][j];
			}
		}
		newMas[i] = sum;
		cout << newMas[i] << "\t";
		sum = 0;
	}
	cout << endl << endl;
}

void kratnoe3(int(*mas)[col])
{
	int newMas[20], count = 0;
	cout << "сформир. одномерный массив из чисел, кратных трем:\n";

	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (mas[i][j]%3==0&&mas[i][j]!=0)
			{
				newMas[count] = mas[i][j];
				cout << newMas[i] << "\t";
				count++;
			}
		}
	}
	cout << endl << endl;
}

void positiveAndNegative(int(*mas)[col])
{
	int PosMas[20], countP = 0;
	int NegMas[20], countN = 0;
	
	cout << "сформир. одномерный массив из положительных чисел:\n";
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (mas[i][j] > 0)
			{
				PosMas[countP] = mas[i][j];
				cout << PosMas[countP] << "\t";
				countP++;
			}

			else
			{
				NegMas[countN] = mas[i][j];
				countN++;
			}
		}
	}
	cout << endl << endl;

	cout << "сформир. одномерный массив из остальных чисел:\n";
	for (int i = 0; i < countN; i++)
	{
		cout << NegMas[i] << "\t";
	}
	cout << endl << endl;
}