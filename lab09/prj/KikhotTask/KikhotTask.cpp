#include <iostream>
#include <locale>
#include <windows.h>
#include "KikhotModules.h"

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    while (true)
    {
        char choice;
        cout << "������� ��: 1) s_calculation - ���� 2) ������� 9.1 - 5 3) ������� 9.2 - 4 4) ������� 9.1 - 3: ";
        cin >> choice;

        switch (choice)
        {
        case 'u':
            float x, z;
            cout << "������ x, z: ";
            cin >> x >> z;
            cout << s_calculation(x, z) << endl;
            break;
        case 'o':
            int wbp;
            cout << "������ ��� �������: ";
            cin >> wbp;
            cout << function_9_1(wbp) << endl;
            break;
        case 'p':
            int n, m;
            cout << "������ ����� n: ";
            cin >> n;
            cout << "������ ����� m: ";
            cin >> m;
            cout << function_9_2(n, m) << endl;
            break;
        case 'a':
            int N;
            cout << "������ ���������� ����� N �� 0 �� 80000: ";
            cin >> N;
            cout << function_9_3(N) << endl;
            break;
        default:
            cout << '\a';
        }
        char continue_or_not;
        cout << "��� ���������� ������ s, ��� S, ������ ������ ����� ������: ";
        cin >> continue_or_not;
        if (continue_or_not == 't' || continue_or_not == 'T' || continue_or_not == 'C')
            continue;
        break;
    }
    return 0;
}
