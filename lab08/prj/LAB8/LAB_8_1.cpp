#include <iostream>
#include <cmath>
#include <windows.h>
#include "ModulesKikhot.h"

using namespace std;

int main()
{
    system("chcp 1251");
    system("cls");
    cout << "�������� 8.1\n" << endl;
    double x, y, z;
    cout << "����i�� ����� x: ";
    cin >> x;
    cout << "����i�� ����� y: ";
    cin >> y;
    cout << "����i�� ����� z: ";
    cin >> z;
    double S = s_calculation(x, z);
    cout << "����� S: "<< S << endl;
    return 0;

    cout << "\n�������� 8.2.1\n" << endl;
    printAuthorTag();

    cout << "\n�������� 8.2.2\n" << endl;
    if ((a+b)>abs(b-2))
    {
        return true
    }
    else
    {
        return false
    }
    cout << "�������� 8.2.3\n" << endl;
    cout << "x � ���������: " << x << endl;
    cout << "x � ��������������: 0x" << hex << x << endl;
    cout << "y � ���������: " << y << endl;
    cout << "y � ��������������: 0x" << hex << y << endl;
    cout << "z � ���������: " << z << endl;
    cout << "z � ��������������: 0x" << hex << z << endl;
}
