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

unsigned short int q;

void main()

{
	setlocale(LC_ALL, "Russian");
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);

	srand(time(NULL));

	unsigned short int nz;

	do
	{
		cout << "Введите номер задания: ";
		cin >> nz;

		cin.get();

		switch (nz)
		{
		case 1:
		{
			cout << "Дан двумерный массив целых чисел" << endl
				<< "a.Сформировать одномерный массив, каждый элемент которого равен " << endl
				<< "наибольшему по модулю элементу соответствующего столбца двумерного массива" << endl
				<< "b.Сформировать одномерный массив, каждый элемент которого равен наибольшему" << endl
				<< "по модулю элементу соответствующей строки двумерного массива\n\n";

			int mas[5][5];
			createAndPrintMyMatrix(mas, 5, -20, 30);
			moduleInColMas(mas);
			moduleInStrMas(mas);

		}break;

		case 2:
		{
			cout << "Дан двумерный массив целых чисел" << endl
				<< "a.Сформировать одномерный массив, каждый элемент которого равен первому " << endl
				<< "четному элементу соответствующего столбца двумерного массива(если такого " << endl
				<< "элемента в столбце нет, то он равен нулю)." << endl
				<< "b.Сформировать одномерный массив, каждый элемент которого равен последнему" << endl
				<< "нечетному элементу соответствующей строки двумерного массива(если такого" << endl
				<< "элемента в строке нет, то он равен нулю).\n\n";
			int mas[5][5];
			createAndPrintMyMatrix(mas, 5, -20, 30);
			chetInStrMas(mas);
			chetInColMas(mas);

		}break;

		case 3:
		{
			cout << "Дан двумерный массив." << endl
				<< "a.Сформировать одномерный массив, каждый элемент которого равен" << endl
				<< "количеству элементов соответствующего столбца двумерного массива, " << endl
				<< "больших данного числа" << endl
				<< "b.Сформировать одномерный массив, каждый элемент которого равен сумме " << endl
				<< "элементов соответствующей строки двумерного массива, меньших данного числа.\n\n";
			int mas[5][5];
			createAndPrintMyMatrix(mas, 5, -20, 30);
			nOfnGreaterThanUrNumber(mas);
			sumOfnumbersThatAreLessThanUrNumber(mas);

		}break;

		case 4:
		{
			cout << "Дан двумерный массив размером N x M, заполненный целыми числами" << endl
				<< "a.Все его элементы, кратные трем, записать в одномерный массив." << endl
				<< "b.Все его положительные элементы записать в один одномерный массив, " << endl
				<< "а остальные — в другой\n\n";
			const int n = 5, m = 5;
			int mas[n][m];
			createAndPrintMyMatrix(mas, 5, -20, 15);
			kratnoe3(mas);
			positiveAndNegative(mas);
		}break;

		case 5:
		{
			cout << "Ввести целые числа.Создать из них массив. Вычислить сумму чётных " << endl
				<< "элементов массива\n\n";
			int n;
			cout << "введите кол-во чисел в массиве: ";
			cin >> n;
			int *mas = NULL;
			mas = (int*)malloc(n * sizeof(int));
			int sum = 0;

			for (int i = 0; i < n; i++)
			{
				mas[i] = 1 + rand() % 20;
				cout << mas[i] << "\t";
				if (mas[i] % 2 == 0 && mas[i] != 0)
					sum += mas[i];
			}
			cout << endl;
			cout << sum << " - сумма четных элементов массива\n\n";
		}break;

		case 6:
		{
			cout << "Ввести целое число N и массив из N вещественных чисел." << endl
				<< "Определить количество отрицательных элементов массива\n\n";
			int n;
			cout << "введите кол-во чисел в массиве: ";
			cin >> n;
			float *mas = NULL;
			mas = (float*)malloc(n * sizeof(float));
			int count = 0;

			for (int i = 0; i < n; i++)
			{
				mas[i] = -20 + rand() % 40;
				cout << mas[i] << "\t";
				if (mas[i] < 0)
					count++;
			}
			cout << endl;
			cout << count << " - кол-во отрицательных элементов массива\n\n";
		}break;

		case 7:
		{
			cout << "Ввести целое число N.Создать массив из N вещественных чисел." << endl
				<< "Вычислить произведение элементов, модуль которых меньше 7.\n\n";
			int n;
			cout << "введите кол-во чисел в массиве: ";
			cin >> n;
			float *mas = NULL;
			mas = (float*)malloc(n * sizeof(float));
			int mult = 1;

			for (int i = 0; i < n; i++)
			{
				mas[i] =-20 + rand() % 40;
				cout << mas[i] << "\t";
				if (abs(mas[i]) < 7)
				mult *= mas[i];
			}
			cout << endl;
			cout << mult << " - произведение элементов, модуль которых меньше 7\n\n";
		}break;

		case 8:
		{
			cout << "Ввести вещественные числа.Создать из них массив определить наибольший" << endl
				<< "элемент массива\n\n";
			int n;
			cout << "введите кол-во чисел в массиве: ";
			cin >> n;
			float *mas = NULL;
			mas = (float*)malloc(n * sizeof(float));
			int max = 0;

			for (int i = 0; i < n; i++)
			{
				mas[i] = 1 + rand() % 20;
				cout << mas[i] << "\t";
				if (mas[i] > max)
					max = mas[i];
			}
			cout << endl;
			cout << max << " - максимальный элемент массива\n\n";
		}break;

		case 9:
		{
			cout << "Ввести целое число N и массив из N целых чисел. Определить" << endl
				<< "наименьший элемент массива\n\n";
			int n;
			cout << "введите кол-во чисел в массиве: ";
			cin >> n;
			int *mas = NULL;
			mas = (int*)malloc(n * sizeof(int));
			int min = 1000;

			for (int i = 0; i < n; i++)
			{
				mas[i] = 1 + rand() % 20;
				cout << mas[i] << "\t";
				if (mas[i] < min)
				min = mas[i];
				
			}
			cout << endl;
			cout << min << " - наименьший элемент массива\n\n";
		}break;

		case 10:
		{
			cout << "Ввести вещественные числа.Создать из них массив. " << endl
				<< "Определить среднее арифметическое элементов массива.\n\n";
			int n;
			cout << "введите кол-во чисел в массиве: ";
			cin >> n;
			float *mas = NULL;
			mas = (float*)malloc(n * sizeof(float));
			int sum = 0;

			for (int i = 0; i < n; i++)
			{
				mas[i] = 1 + rand() % 20;
				cout << mas[i] << "\t";
				sum += mas[i];
			}
			cout << endl;
			cout << sum / n << " - среднее арифметическое массива\n\n";
		}break;

		case 11:
		{
			cout << "Ввести вещественные числа. Создать из них массив." << endl
				<< "Определить количество неотрицательных элементов массива\n\n";
			int n;
			cout << "введите кол-во чисел в массиве: ";
			cin >> n;
			float *mas = NULL;
			mas = (float*)malloc(n * sizeof(float));
			int count = 0;

			for (int i = 0; i < n; i++)
			{
				mas[i] = - 20+ rand() % 40;
				cout << mas[i] << "\t";
				if (mas[i] > 0)
					count++;
			}
			cout << endl;
			cout << count << " - кол-во НЕотрицательных элементов массива\n\n";
		}break;

		case 12:
		{
			cout << "Ввести целое число N и массив из N вещественных чисел." << endl
				<< "Определить индекс последнего отрицательного элемента массива\n\n";
			int n;
			cout << "введите кол-во чисел в массиве: ";
			cin >> n;
			float *mas = NULL;
			mas = (float*)malloc(n * sizeof(float));
			int index;

			for (int i = 0; i < n; i++)
			{
				index = 0;
				mas[i] = -20 + rand() % 40;
				cout << mas[i] << "\t";
				if (mas[i] < 0)
					index = i;
			}
			cout << endl;
			if (index > 0)
				cout << index << " - индекс последнего отрицательного элемента массива\n\n";
			else
				cout << "отрицательного элемента в массиве нет\n\n";
		}break;

		case 13:
		{
			cout << "Ввести целое число N. Создать массив из N вещественных чисел." << endl
				<< "Вычислить сумму минимального и максимального элементов.\n\n";
			int n;
			cout << "введите кол-во чисел в массиве: ";
			cin >> n;
			float *mas = NULL;
			mas = (float*)malloc(n * sizeof(float));
			int max = 0, min = 10000;

			for (int i = 0; i < n; i++)
			{
				mas[i] = 1 + rand() % 20;
				cout << mas[i] << "\t";
				if (mas[i] > max)
					max = mas[i];

				if (mas[i] < min)
					min = mas[i];
			}
			cout << endl;
			cout << max << " - максимальный элемент массива\n\n";
			cout << min << " - минимальный элемент массива\n\n";
		}break;

		case 14:
		{
			cout << "Ввести вещественные числа. Создать из них массив."<<endl
				<<"Вычислить произведение минимального и максимального элементов.\n\n";
			int n;
			cout << "введите кол-во чисел в массиве: ";
			cin >> n;
			float *mas = NULL;
			mas = (float*)malloc(n * sizeof(float));
			int max = 0, min = 10000;

			for (int i = 0; i < n; i++)
			{
				mas[i] = 1 + rand() % 20;
				cout << mas[i] << "\t";
				if (mas[i] > max)
					max = mas[i];

				if (mas[i] < min)
					min = mas[i];
			}
			cout << endl;
			cout << max*min << " - произведение максимального и минимального элементов массива\n\n";
		}break;

		case 15:
		{
			cout << "Ввести целое число N и массив из N целых чисел."<<endl
				<<"Определить, есть ли в массиве число 20.\n\n";
			int n;
			cout << "введите кол-во чисел в массиве: ";
			cin >> n;
			int *mas = NULL;
			mas = (int*)malloc(n * sizeof(int));
			int count = 0;

			for (int i = 0; i < n; i++)
			{
				mas[i] = 1 + rand() % 20;
				cout << mas[i] << "\t";
				if (mas[i] == 20)
					count++;
			}
			cout << endl;
			if (count > 0)
				cout << "число 20 присутствует в массиве: " << count << "раз\n\n";
			else
				cout << "числа 20 нет в массиве\n\n";
		}break;
		}


		cout << "Хотите продолжить 1/0?";
		cin >> q;


		switch (q)
		{
		case 1:
			system("cls");
			break;
		default:
			cout << "ошибка" << endl;
		}
	} while (nz > 0);


}