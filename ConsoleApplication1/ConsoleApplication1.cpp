#include "stdafx.h"
#include <iostream>
using namespace std;

class CppStudio // ��� ������
{
public: // ������������ �������
    void message() // ������� (����� ������) ��������� ��������� �� �����
    {
        cout << "Test /n";
		cout << "Test2 /n";

    }
}; // ����� ���������� ������ CppStudio
 
int main(int argc, char* argv[])
{
    CppStudio objMessage; // ���������� �������
    objMessage.message(); // ����� ������� ������ message
    system("pause");
    return 0;
}