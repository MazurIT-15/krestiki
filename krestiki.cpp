#include <iostream>
#include <windows.h>

using namespace std;

void print(char mas[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mas[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    char mas[3][3];

    for (int i = 0; i < 3; i++) // заполнение массива
    {
        for (int j = 0; j < 3; j++)
        {
            mas[i][j] = '*';
        }
    }

    return 0;
}