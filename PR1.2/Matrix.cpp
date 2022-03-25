#include "Matrix.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Matrix::SetN(int value)
{
	n = value;
}

void Matrix::SetK(int value)
{
	k = value;
}

bool Matrix::Init(int a, int b)
{
	n = a;
	k = b;

	Arr = new float* [a];
	for (int i = 0; i < a; i++)
	{
		Arr[i] = new float[b];
	}

	return true;
}

void Matrix::Create()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			Arr[i][j] = rand() % 10 + 1;
		}
	}
}

void Matrix::Display() const
{
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cout << setw(4) << Arr[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

void Matrix::Read()
{
	int a, b;

	do {
		cout << "rowNo = "; cin >> a;
		cout << "colNo = ?"; cin >> b;
	} while (!Init(a,b));
}

float Matrix::Min()
{
	float min = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			if (Arr[i][j] < min)
			{
				min = Arr[i][j];
			}
		}
	}

	return min;
}

float Matrix::Max()
{
	float max = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			if (Arr[i][j] > max)
			{
				max = Arr[i][j];
			}
		}
	}

	return max;
}

float Matrix::Summa(int Row1, int Row2, int Col1, int  Col2)
{
	float Summa = 0;

	Summa = Arr[Row1][Col1] + Arr[Row2][Col2];
	
	return Summa;
}