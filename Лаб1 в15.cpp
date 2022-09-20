// Шумайлова задача 15 п-30.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

int returnx(int x)
{
    return 2 * (cos(3 * x) / sin(3 * x)) - (1 / (12 *x*x + 7 * x - 5));
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    using namespace std;
    int x;
    cout << "Введите х" << std::endl;
    cin >> x;
    cout <<returnx(x) << std::endl;
    return 0;
}

