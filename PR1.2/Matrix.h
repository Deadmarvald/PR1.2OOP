#pragma once

using namespace std;

class Matrix
{
private:
	unsigned int n;
	unsigned int k;
	float** Arr;

public:
	int GetN() const { return n; }
	int GetK() const { return k; }
	void SetN(int value);
	void SetK(int value);

	bool Init(int a, int b);
	void Display() const;
	void Read();

	void Create();
	float Min();
	float Max();
	float Summa(int Row1, int Row2, int Col1, int  Col2);
};