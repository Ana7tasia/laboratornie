// Шумайлова П-30 2 задачав в15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
using namespace std;
double return3(int x)
{ return 45*x*x+5; }
double return4(int x)
{ return 5*x/(10*sqrt(x)+1); }
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x;
    cout << "Введите число х: ";
    cin >> x;
    if (x>3,6)
    { cout << return3(x)<<endl; }
    else if (x<=3,6)
    { cout << return4(x)<<endl; }
    return 0;
}

