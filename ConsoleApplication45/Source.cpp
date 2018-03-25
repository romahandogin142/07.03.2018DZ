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
		cout << "������� ����� �������: ";
		cin >> nz;

		cin.get();

		switch (nz)
		{
		case 1:
		{
			cout << "��� ��������� ������ ����� �����" << endl
				<< "a.������������ ���������� ������, ������ ������� �������� ����� " << endl
				<< "����������� �� ������ �������� ���������������� ������� ���������� �������" << endl
				<< "b.������������ ���������� ������, ������ ������� �������� ����� �����������" << endl
				<< "�� ������ �������� ��������������� ������ ���������� �������\n\n";

			int mas[5][5];
			createAndPrintMyMatrix(mas, 5, -20, 30);
			moduleInColMas(mas);
			moduleInStrMas(mas);

		}break;

		case 2:
		{
			cout << "��� ��������� ������ ����� �����" << endl
				<< "a.������������ ���������� ������, ������ ������� �������� ����� ������� " << endl
				<< "������� �������� ���������������� ������� ���������� �������(���� ������ " << endl
				<< "�������� � ������� ���, �� �� ����� ����)." << endl
				<< "b.������������ ���������� ������, ������ ������� �������� ����� ����������" << endl
				<< "��������� �������� ��������������� ������ ���������� �������(���� ������" << endl
				<< "�������� � ������ ���, �� �� ����� ����).\n\n";
			int mas[5][5];
			createAndPrintMyMatrix(mas, 5, -20, 30);
			chetInStrMas(mas);
			chetInColMas(mas);

		}break;

		case 3:
		{
			cout << "��� ��������� ������." << endl
				<< "a.������������ ���������� ������, ������ ������� �������� �����" << endl
				<< "���������� ��������� ���������������� ������� ���������� �������, " << endl
				<< "������� ������� �����" << endl
				<< "b.������������ ���������� ������, ������ ������� �������� ����� ����� " << endl
				<< "��������� ��������������� ������ ���������� �������, ������� ������� �����.\n\n";
			int mas[5][5];
			createAndPrintMyMatrix(mas, 5, -20, 30);
			nOfnGreaterThanUrNumber(mas);
			sumOfnumbersThatAreLessThanUrNumber(mas);

		}break;

		case 4:
		{
			cout << "��� ��������� ������ �������� N x M, ����������� ������ �������" << endl
				<< "a.��� ��� ��������, ������� ����, �������� � ���������� ������." << endl
				<< "b.��� ��� ������������� �������� �������� � ���� ���������� ������, " << endl
				<< "� ��������� � � ������\n\n";
			const int n = 5, m = 5;
			int mas[n][m];
			createAndPrintMyMatrix(mas, 5, -20, 15);
			kratnoe3(mas);
			positiveAndNegative(mas);
		}break;

		case 5:
		{
			cout << "������ ����� �����.������� �� ��� ������. ��������� ����� ������ " << endl
				<< "��������� �������\n\n";
			int n;
			cout << "������� ���-�� ����� � �������: ";
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
			cout << sum << " - ����� ������ ��������� �������\n\n";
		}break;

		case 6:
		{
			cout << "������ ����� ����� N � ������ �� N ������������ �����." << endl
				<< "���������� ���������� ������������� ��������� �������\n\n";
			int n;
			cout << "������� ���-�� ����� � �������: ";
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
			cout << count << " - ���-�� ������������� ��������� �������\n\n";
		}break;

		case 7:
		{
			cout << "������ ����� ����� N.������� ������ �� N ������������ �����." << endl
				<< "��������� ������������ ���������, ������ ������� ������ 7.\n\n";
			int n;
			cout << "������� ���-�� ����� � �������: ";
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
			cout << mult << " - ������������ ���������, ������ ������� ������ 7\n\n";
		}break;

		case 8:
		{
			cout << "������ ������������ �����.������� �� ��� ������ ���������� ����������" << endl
				<< "������� �������\n\n";
			int n;
			cout << "������� ���-�� ����� � �������: ";
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
			cout << max << " - ������������ ������� �������\n\n";
		}break;

		case 9:
		{
			cout << "������ ����� ����� N � ������ �� N ����� �����. ����������" << endl
				<< "���������� ������� �������\n\n";
			int n;
			cout << "������� ���-�� ����� � �������: ";
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
			cout << min << " - ���������� ������� �������\n\n";
		}break;

		case 10:
		{
			cout << "������ ������������ �����.������� �� ��� ������. " << endl
				<< "���������� ������� �������������� ��������� �������.\n\n";
			int n;
			cout << "������� ���-�� ����� � �������: ";
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
			cout << sum / n << " - ������� �������������� �������\n\n";
		}break;

		case 11:
		{
			cout << "������ ������������ �����. ������� �� ��� ������." << endl
				<< "���������� ���������� ��������������� ��������� �������\n\n";
			int n;
			cout << "������� ���-�� ����� � �������: ";
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
			cout << count << " - ���-�� ��������������� ��������� �������\n\n";
		}break;

		case 12:
		{
			cout << "������ ����� ����� N � ������ �� N ������������ �����." << endl
				<< "���������� ������ ���������� �������������� �������� �������\n\n";
			int n;
			cout << "������� ���-�� ����� � �������: ";
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
				cout << index << " - ������ ���������� �������������� �������� �������\n\n";
			else
				cout << "�������������� �������� � ������� ���\n\n";
		}break;

		case 13:
		{
			cout << "������ ����� ����� N. ������� ������ �� N ������������ �����." << endl
				<< "��������� ����� ������������ � ������������� ���������.\n\n";
			int n;
			cout << "������� ���-�� ����� � �������: ";
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
			cout << max << " - ������������ ������� �������\n\n";
			cout << min << " - ����������� ������� �������\n\n";
		}break;

		case 14:
		{
			cout << "������ ������������ �����. ������� �� ��� ������."<<endl
				<<"��������� ������������ ������������ � ������������� ���������.\n\n";
			int n;
			cout << "������� ���-�� ����� � �������: ";
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
			cout << max*min << " - ������������ ������������� � ������������ ��������� �������\n\n";
		}break;

		case 15:
		{
			cout << "������ ����� ����� N � ������ �� N ����� �����."<<endl
				<<"����������, ���� �� � ������� ����� 20.\n\n";
			int n;
			cout << "������� ���-�� ����� � �������: ";
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
				cout << "����� 20 ������������ � �������: " << count << "���\n\n";
			else
				cout << "����� 20 ��� � �������\n\n";
		}break;
		}


		cout << "������ ���������� 1/0?";
		cin >> q;


		switch (q)
		{
		case 1:
			system("cls");
			break;
		default:
			cout << "������" << endl;
		}
	} while (nz > 0);


}