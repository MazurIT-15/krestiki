#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    char mas[3][3];

    for (int i = 0; i < 3; i++) //заполняем массив
    {
        for (int j = 0; j < 3; j++)
        {
            mas[i][j] = '*';
        }
    }

    return 0;
}