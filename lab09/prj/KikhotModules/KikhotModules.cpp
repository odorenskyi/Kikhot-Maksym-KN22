#include <cmath>
#include <string>
#include <iostream>

using namespace std;



float s_calculation(float x, float z)
{
    return pow(3*sin(sqrt(12*pow(x,2)/log10(x-3))),2)+0.5*z;
}
string function_9_1(int wpb)

{
    switch (wpb) {
        case 0:
            return "�������� ����: <0.3. ��������������: �����.";
        case 1:
            return "�������� ����: 0.3-1.5. ��������������: �����.";
        case 2:
            return "�������� ����: 1.6-9.4. ��������������: ������.";
        case 3:
            return "�������� ����: 9.5-5.4. ��������������: �������.";
        case 4:
            return "�������� ����: 5.5-7.9. ��������������: �������.";
        case 5:
            return "�������� ����: 8.0-10.7. ��������������: �����.";
        case 6:
            return "�������� ����: 10.8-13.8. ��������������: �������.";
        case 7:
            return "�������� ����: 13.9-17.1. ��������������: ̳����.";
        case 8:
            return "�������� ����: 17.2-20.7. ��������������: ���� �����.";
        case 9:
            return "�������� ����: 20.8-24.4. ��������������: �����.";
        case 10:
            return "�������� ����: 24.5-28.4. ��������������: ������� �����.";
        case 11:
            return "�������� ����: 28.5-32.6. ��������������: ��������� �����.";
        case 12:
            return "�������� ����: >32.7. ��������������: ������ \(������\).";
        default:
            return "���������� ��������. ������ ����� �� 0 �� 12.";
    }
}

int function_9_2(int n, int m)
{
    cout << n << " � ������ " << m << " = " << pow(n, m) << endl;
    cout << m << " � ������ " << n << " = " << pow(m, n) << endl;

    if (n < m) {
        cout << "������ ����� �� " << n << " �� " << m << ":" << endl;
        for (int i = n; i <= m; i++) {
            if (i % 2 != 0) {
                cout << i << endl;
            }
        }
    }
    else {
        cout << "n ����� �� m" << endl;
    }

    return 0;
}


string function_9_3(int n)
{
    if (n < 0 || n > 80000)
        return "�������: ����� �� � �������.";
    int bit_of_n = (n >> 2) & 1;
    if (bit_of_n == 0)
    {
        int amount = 0;
        while ((n & 1) == 0)
        {
            amount++;
            n >>= 1;
        }
        string result = "ʳ������ �������� ����: " + to_string(amount);
        return result;
    }
    else
    {
        int amount = 0;
        while(n != 0)
        {
            if (n & 1)
                amount++;
            n >>= 1;
        }
        string result = "ʳ������ �������� �������: " + to_string(amount);
        return result;
    }
}

void function_10_1()
{
    fstream output;
    output.open("D:\\University\\BMTP\\Git\\Kikhot-Maksym-KN22\\lab10\\prj\\output.txt", ios_base::out);
    output << "ʳ���� ������, ����, �������������, ������, 2023" << endl;

void function_10_2(const string& filename) {
    fstream file(filename, ios::in | ios::out);
    if (!file) {
        cerr << "������� �������� �����" << filename << endl;
        return;
    }

    string content;
    getline(file, content, '\0');

    string delimiter = ".!?";
    size_t start = 0, end = 0;
    while ((start = content.find_first_not_of(delimiter, end)) != string::npos) {
        end = content.find_first_of(delimiter, start);
        if (end == string::npos) {
            end = content.length();
        }
        string sentence = content.substr(start, end - start);
        if (count_if(sentence.begin(), sentence.end(), ::isalnum) % 2 == 1) {
            string unpaired_chars;
            for (auto& ch : sentence) {
                if (!isalnum(ch)) {
                    unpaired_chars += ch;
                }
            }
            file.seekp(end);
            file << unpaired_chars << " " << endl;
            time_t t = time(nullptr);
            tm tm = *localtime(&t);
            char buffer[20];
            strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", &tm);
            file << buffer << endl;
        }
    }
}


void function_10_3(float x, float z, int b)
{
    fstream f;
    f.open("D:\\University\\BMTP\\Git\\Kikhot-Maksym-KN-22\\lab10\\prj\\output.txt", ios_base::app);
    f << s_calculation(x,z) << endl;
    for (int i = 31; i >= 0; i--)
    {
        if (b & (1 << i))
            f << "1";
        else
            f << "0";
    }
    f << endl;
    f.close();
}
