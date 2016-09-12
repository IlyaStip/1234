#include "stdafx.h"
#include <iostream>
using namespace std;

class CppStudio // им€ класса
{
public: // спецификатор доступа
    void message() // функци€ (метод класса) вывод€ща€ сообщение на экран
    {
        cout << "Test /n";
		cout << "Test2 /n";

    }
}; // конец объ€влени€ класса CppStudio
 
int main(int argc, char* argv[])
{
    CppStudio objMessage; // объ€вление объекта
    objMessage.message(); // вызов функции класса message
    system("pause");
    return 0;
}