#include <iostream>
#include <string>
#include <limits>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
SetConsoleOutputCP(1251);
    
    int N;
    cout << "������� ���������� �������������: ";
    cin >> N;
    while (N <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "������ ����� ���������� �������������. ����������, ������� ������������� �����: ";
        cin >> N;
    }

    int height;
    cout << "������� ������ �������������: ";
    cin >> height;
    while (height <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "������ ����� ������ �������������. ����������, ������� ������������� �����: ";
        cin >> height;
    }

    for (int i = 0; i < height; i++)
    {
        // ���������� ������������ � ����
        for (int j = 0; j < N; j++)
        {
            // ��������� ���������� ��������� � ������� ������ ������������
            int stars = 2 * i + 1;

            // ��������� ���������� ��������, ����� ��������� ����������� �� ������
            int spaces = (2 * height - 1 - stars) / 2;

            // ������� �������
            cout << string(spaces, ' ');

            // ������� ���������
            cout << string(stars, '*');

            // ������� ������� ����� ������������
            cout << string(spaces, ' ');

            // ��������� ������� ����� ��������������
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
