// Tyuiu.GofmanDV.Sprint0.Task7.V3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.GofmanDV.Sprint0.Task7.V3.Lib/Tyuiu.GofmanDV.Sprint0.Task7.V3.Lib.cpp"
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    //Init
    ISprint0Task7* date = new Service();
    cout << "������� 5-��������� �����:" << endl;
    int a;
    int b;
    cin >> a;
    cin >> b;
    bool r;

    //run
    r = date->Rezalt(a, b);

    //Valid
    if (r)
    {
        cout << "������ ����� ������������." << endl;
    }
    else
    {
        cout << "������ ����� �����������." << endl;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
