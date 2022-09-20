// лаб3 Шумайлова П-30.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

using namespace std;
double getInteger()
{
    cout << "Enter an integer: ";
    double a;
    cin >> a;
    return a;
}

double ploshad(double a, double b, double h)
{
    cout << "Ploshad=  ";
    double ploshad;
    ploshad= (h*(a+b))/2;
    return ploshad;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double a = getInteger();
    double b = getInteger();
    double h = getInteger();
    cout <<ploshad(a,b,h) << '\n';
    return 0;
}

