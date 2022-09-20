// лаб4 Шумайлова П-30.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
using namespace std;
int getInteger()
{
    cout << "Enter an integer: ";
    int a;
    cin >> a;
    return a;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a = getInteger();
    if (a % 10>a/10%10)
    {
        cout << "Последняя";
    }
    else 
    {
        cout << "Вторая";
    }
    
}
