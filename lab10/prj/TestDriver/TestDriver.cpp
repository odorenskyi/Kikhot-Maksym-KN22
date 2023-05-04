#include <iostream>
#include <fstream>
#include <ctime>
#include <locale>
#include <string>
#include <algorithm>
#include <cctype>
#include "../../../lab09/prj/KikhotModules/KikhotModules.h"

using namespace std;

void replace_chars(string& str);

int main()
{
    setlocale(LC_ALL, "ukr");
    function_10_1();
    fstream output;
    output.open("D:\\University\\BMTP\\Git\\Kikhot-Maksym-KN22\\lab10\\prj\\output.txt", ios_base::in);
    fstream input;
    input.open("D:\\University\\BMTP\\Git\\Kikhot-Maksym-KN22\\lab10\\prj\\input.txt", ios_base::in);
    if (!input.is_open() || !output.is_open())
    {
        return 1;
    }
    string line;
    getline(input, line);
    int letters_count = 0;
    for (auto ch : line)
    {
        if (isalpha(ch))
        {
            letters_count++;
        }
    }
    string poem_part;
    if (letters_count % 2 == 0)
    {
        poem_part = "� ��� �������� ������ ����\n"
        "�� ������ ���� � �����\n"
        "��� ���� ������ ����\n"
        "����������� ��� ������.";
    }
    else
    {
        poem_part = "���� ����� �� ������ ���� �� ����/n"
        "��� � �� ������ ����� ����!\n"
        "³� ���� ������� �� ������\n"
        "���� ���� �� ���� �������.";
    }
    output << poem_part << endl;

    function_10_2();

    return 0;
}

void replace_chars(string& str)
{
    for (auto& ch : str)
    {
        if (ch == '�' || ch == '�' || ch == '�' || ch == '�' || ch == '�')
        {
            ch = '?';
        }
    }
}
