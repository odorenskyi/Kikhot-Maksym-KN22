#include <iostream>
#include <windows.h>
using namespace std;

// Колесо огляду
class ClassLab12_Kikhot {
private:
    // Це атрибути класу
    double radius;
    double area;
    int cabins;
    bool valuesEntered;

public:
    // Це конструктор класу
    ClassLab12_Kikhot() {
        valuesEntered = false;
    }

    // Це функції-члени для надання значень атрибутів

    //Радіус
    double getRadius() {
        return radius;
    }
    //Площа
    double getArea() {
        return area;
    }
    //Кількість кабін
    int getCabins() {
        return cabins;
    }

    // функція-член для зміни значення атрибута
    void setRadius(double r)
    {
        if (r >= 1)
        {
            radius = r;
            area = 3.14 * r * r;
            valuesEntered = true;
        }
        else
            {
        cout << "Помилка. Радіус повинен бути більше або дорівнює 1." << endl;
            }
    }
    void setCabins(int c)
    {
        if (c >= 1)
        {
            cabins = c;
            valuesEntered = true;
        }
        else
            {
        cout << "Помилка. Кількість кабін повина бути більше або дорівнює 1." << endl;
            }
    }

    // функція-член для введення значень атрибутів
void enterValues() {
    double r;
    int c;

    do {
        cout << "Введіть значення радіуса: ";
        cin >> r;
        if (r < 1) {
            cout << "Помилка. Радіус повинен бути більше або дорівнює 1." << endl;
        }
    } while (r < 1);
    radius = r;
    area = 3.14 * r * r;

    do {
        cout << "Введіть значення кількості кабін: ";
        cin >> c;
        if (c < 1) {
            cout << "Помилка. Кількість кабін повинна бути більше або дорівнює 1." << endl;
        }
    } while (c < 1);
    cabins = c;

    valuesEntered = true;
}


    // Це буде меню для користувача, інтерфейс роботи.
    void showMenu()
    {
        if (valuesEntered)
            {
            cout << "1. Площа колеса." << endl;
            cout << "2. Змінити всі значення." << endl;
            cout << "3. Вивести всі значення." << endl;
            }
        else
            {
            cout << "1. Ввести значення." << endl;
            }
    }

    // Функція-член для отримання значення атрибута valuesEntered
    // Потрібна для того, щоб якщо не введені значення, не повертав площу
    bool getValuesEntered() {
        return valuesEntered;
    }
};

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    ClassLab12_Kikhot ferrisWheel;

    int choice;

    do {
        ferrisWheel.showMenu();
        cout << "Введіть число для дії: ";
        cin >> choice;

        if (ferrisWheel.getValuesEntered())
        {
            switch (choice)
            {
                case 1:
                    cout << "\nПлоща колеса огляду: " << ferrisWheel.getArea() << "\n" << endl;
                    break;
                case 2:
                    double r;
                    int c;

                    cout << "Введіть значення радіуса: ";
                    cin >> r;
                    ferrisWheel.setRadius(r);
                    cout << "Введіть значення кількості кабін: ";
                    cin >> c;
                    ferrisWheel.setCabins(c);
                    break;
                case 3:
                    cout << "\nРадуіс: " << ferrisWheel.getRadius() << "\n" << endl;
                    cout << "\nКількість кабін: " << ferrisWheel.getCabins() << "\n" << endl;
                    break;
                default:
                    cout << "Помилка. Такої дії не існує." << endl;
                    break;
            }
        }
        else
            {
            if (choice == 1)
            {
                ferrisWheel.enterValues();
            }
            else
                {
                cout << "Помилка. Такої дії не існує." << endl;
                }
            }
        } while (true);

    return 0;
}
