#include <iostream>
#include <windows.h>
using namespace std;

// ������ ������
class ClassLab12_Kikhot {
private:
    // �� �������� �����
    double radius;
    double area;
    int cabins;
    bool valuesEntered;

public:
    // �� ����������� �����
    ClassLab12_Kikhot() {
        valuesEntered = false;
    }

    // �� �������-����� ��� ������� ������� ��������

    //�����
    double getRadius() {
        return radius;
    }
    //�����
    double getArea() {
        return area;
    }
    //ʳ������ ����
    int getCabins() {
        return cabins;
    }

    // �������-���� ��� ���� �������� ��������
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
        cout << "�������. ����� ������� ���� ����� ��� ������� 1." << endl;
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
        cout << "�������. ʳ������ ���� ������ ���� ����� ��� ������� 1." << endl;
            }
    }

    // �������-���� ��� �������� ������� ��������
void enterValues() {
    double r;
    int c;

    do {
        cout << "������ �������� ������: ";
        cin >> r;
        if (r < 1) {
            cout << "�������. ����� ������� ���� ����� ��� ������� 1." << endl;
        }
    } while (r < 1);
    radius = r;
    area = 3.14 * r * r;

    do {
        cout << "������ �������� ������� ����: ";
        cin >> c;
        if (c < 1) {
            cout << "�������. ʳ������ ���� ������� ���� ����� ��� ������� 1." << endl;
        }
    } while (c < 1);
    cabins = c;

    valuesEntered = true;
}


    // �� ���� ���� ��� �����������, ��������� ������.
    void showMenu()
    {
        if (valuesEntered)
            {
            cout << "1. ����� ������." << endl;
            cout << "2. ������ �� ��������." << endl;
            cout << "3. ������� �� ��������." << endl;
            }
        else
            {
            cout << "1. ������ ��������." << endl;
            }
    }

    // �������-���� ��� ��������� �������� �������� valuesEntered
    // ������� ��� ����, ��� ���� �� ������ ��������, �� �������� �����
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
        cout << "������ ����� ��� 䳿: ";
        cin >> choice;

        if (ferrisWheel.getValuesEntered())
        {
            switch (choice)
            {
                case 1:
                    cout << "\n����� ������ ������: " << ferrisWheel.getArea() << "\n" << endl;
                    break;
                case 2:
                    double r;
                    int c;

                    cout << "������ �������� ������: ";
                    cin >> r;
                    ferrisWheel.setRadius(r);
                    cout << "������ �������� ������� ����: ";
                    cin >> c;
                    ferrisWheel.setCabins(c);
                    break;
                case 3:
                    cout << "\n�����: " << ferrisWheel.getRadius() << "\n" << endl;
                    cout << "\nʳ������ ����: " << ferrisWheel.getCabins() << "\n" << endl;
                    break;
                default:
                    cout << "�������. ���� 䳿 �� ����." << endl;
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
                cout << "�������. ���� 䳿 �� ����." << endl;
                }
            }
        } while (true);

    return 0;
}
