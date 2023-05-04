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
            return "Швидкість вітру: <0.3. Характеристика: Штиль.";
        case 1:
            return "Швидкість вітру: 0.3-1.5. Характеристика: Тихий.";
        case 2:
            return "Швидкість вітру: 1.6-9.4. Характеристика: Легкий.";
        case 3:
            return "Швидкість вітру: 9.5-5.4. Характеристика: Слабкий.";
        case 4:
            return "Швидкість вітру: 5.5-7.9. Характеристика: Помірний.";
        case 5:
            return "Швидкість вітру: 8.0-10.7. Характеристика: Свіжий.";
        case 6:
            return "Швидкість вітру: 10.8-13.8. Характеристика: Сильний.";
        case 7:
            return "Швидкість вітру: 13.9-17.1. Характеристика: Міцний.";
        case 8:
            return "Швидкість вітру: 17.2-20.7. Характеристика: Дуже міцний.";
        case 9:
            return "Швидкість вітру: 20.8-24.4. Характеристика: Шторм.";
        case 10:
            return "Швидкість вітру: 24.5-28.4. Характеристика: Сильний шторм.";
        case 11:
            return "Швидкість вітру: 28.5-32.6. Характеристика: Шквальний шторм.";
        case 12:
            return "Швидкість вітру: >32.7. Характеристика: Ураган \(буревій\).";
        default:
            return "Некоректне значення. Введіть число від 0 до 12.";
    }
}

int function_9_2(int n, int m)
{
    cout << n << " в степені " << m << " = " << pow(n, m) << endl;
    cout << m << " в степені " << n << " = " << pow(m, n) << endl;

    if (n < m) {
        cout << "Непарні числа від " << n << " до " << m << ":" << endl;
        for (int i = n; i <= m; i++) {
            if (i % 2 != 0) {
                cout << i << endl;
            }
        }
    }
    else {
        cout << "n більше за m" << endl;
    }

    return 0;
}


string function_9_3(int n)
{
    if (n < 0 || n > 80000)
        return "Помилка: число не в діапазоні.";
    int bit_of_n = (n >> 2) & 1;
    if (bit_of_n == 0)
    {
        int amount = 0;
        while ((n & 1) == 0)
        {
            amount++;
            n >>= 1;
        }
        string result = "Кількість двійкових нулів: " + to_string(amount);
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
        string result = "Кількість двійкових одиниць: " + to_string(amount);
        return result;
    }
}

void function_10_1()
{
    fstream output;
    output.open("D:\\University\\BMTP\\Git\\Kikhot-Maksym-KN22\\lab10\\prj\\output.txt", ios_base::out);
    output << "Кіхоть Максим, ЦНТУ, Кропивницький, Україна, 2023" << endl;

void function_10_2(const string& filename) {
    fstream file(filename, ios::in | ios::out);
    if (!file) {
        cerr << "Помилка відкриття файлу" << filename << endl;
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
