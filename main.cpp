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
    cout << "Введите количество треугольников: ";
    cin >> N;
    while (N <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Ошибка ввода количества треугольников. Пожалуйста, введите положительное число: ";
        cin >> N;
    }

    int height;
    cout << "Введите высоту треугольников: ";
    cin >> height;
    while (height <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Ошибка ввода высоты треугольников. Пожалуйста, введите положительное число: ";
        cin >> height;
    }

    for (int i = 0; i < height; i++)
    {
        // Перебираем треугольники в ряду
        for (int j = 0; j < N; j++)
        {
            // Вычисляем количество звездочек в текущей строке треугольника
            int stars = 2 * i + 1;

            // Вычисляем количество пробелов, чтобы выровнять треугольник по центру
            int spaces = (2 * height - 1 - stars) / 2;

            // Выводим пробелы
            cout << string(spaces, ' ');

            // Выводим звездочки
            cout << string(stars, '*');

            // Выводим пробелы после треугольника
            cout << string(spaces, ' ');

            // Добавляем пробелы между треугольниками
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
