#include "Matrix.h"
#include <iostream>

using namespace std;

int main()
{
    Matrix x;

    unsigned int rowNo;
    unsigned int colNo;
    int Row1, Row2, Col1, Col2;

    cout << "Row = "; cin >> rowNo;
    cout << "Col = "; cin >> colNo;

    x.Init(rowNo, colNo);
    x.Create();
    x.Display();

    cout << "Min =" << x.Min() << endl;
    cout << "Max =" << x.Max() << endl;

    cout << "Row1 = ";
    cin >> Row1; cout << endl;
    cout << "Col1 = ";
    cin >> Col1; cout << endl;
    cout << "Row2 = ";
    cin >> Row2; cout << endl;
    cout << "Col2 = ";
    cin >> Col2; cout << endl;

    cout << "Summa = " << x.Summa(Row1, Row2, Col1, Col2) << endl;

    system("pause");
    return 0;
}