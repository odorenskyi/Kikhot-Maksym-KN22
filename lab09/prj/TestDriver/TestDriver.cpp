#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <string>
#include "KikhotModules.h"

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    cout << "���� ������� 9_1" << endl;
    int test_in1 [4] = {0, 7, 14, -5};
    string test_out1 [4] =
    {
        "�������� ����: < 0,3 ��/�. ��������������: �����",
        "�������� ����: 13.9 � 17.1 ��/�. ��������������: ̳����",
        "���������� ��������. ������ ����� �� 0 �� 12.",
        "���������� ��������. ������ ����� �� 0 �� 12."
    };
    cout << "����\t" << setw(15) << "�����\t" << setw(15) << "Case Status" << endl;
    for (int i = 0; i < 4; i++)
    {
        if (function_9_1(test_in1[i] != test_out1[i]))
        {
            cout << function_9_1(test_in1[i]) << setw(15) << test_out1 << setw(15) << "Failed" << endl;
        }
        else
        {
            cout << function_9_1(test_in1[i]) << setw(15) << test_out1[i] << setw(15) << "Passed" << endl;
        }
    }

    cout << "���� ������� 9_2" << endl;
int input1[2] = {2, 3};
int input2[2] = {5, 2};
int input3[2] = {10, 8};
int input4[2] = {3, 3};
int output[4] = {0, 0, 0, 0};
string outputStr[4][3] =
{
    {
        "2 � ������ 3 = 8",
        "3 � ������ 2 = 9",
        "������ ����� �� 2 �� 3:"
    },
    {
        "5 � ������ 2 = 25",
        "2 � ������ 5 = 32",
        "������ ����� �� 5 �� 2:"
    },
    {
        "10 � ������ 8 = 100000000",
        "8 � ������ 10 = 1073741824",
        "������ ����� �� 8 �� 10:"
    },
    {
        "3 � ������ 3 = 27",
        "3 � ������ 3 = 27",
        "������ ����� �� 3 �� 3:"
    }
};

cout << "input\t\toutput\t\t\tcase status" << endl;

for (int i = 0; i < 4; i++)
{
    cout << input1[i % 2] << ", " << input2[i % 2] << "\t";
    function_9_2(input1[i % 2], input2[i % 2]);
    if (i == 1) {
        output[i] = -1;
    }
    else {
        output[i] = 0;
    }
    if (outputStr[i][output[i]] != function_9_2(input1[i % 2], input2[i % 2])) {
        cout << "\t\tFailed (������ ����� �� ���������� ����� ��, �� n ����� �� m" << endl;
    }
    else {
        cout << "\t\tPassed" << endl;
    }
}

cout << "Function 9.3 test" << endl;
int input[5] = {-1, 0, 80001, 10, 21};
string output[5] = {
    "�������: ����� �� � �������.",
    "ʳ������ �������� ����: 0",
    "�������: ����� �� � �������.",
    "ʳ������ �������� ����: 1",
    "ʳ������ �������� �������: 3"
};

cout << "input\t\toutput\t\t\tcase status" << endl;

for (int i = 0; i < 5; i++)
{
    cout << input[i] << "\t\t";
    string result = function_9_3(input[i]);
    if (result != output[i]) {
        cout << "\t\tfailed" << endl;
    }
    else {
        cout << "\t\tpassed" << endl;
    }
}


    return 0;
}
