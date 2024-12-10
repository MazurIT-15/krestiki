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

    int m, n;
    for (int i = 1; i < 9; i++) // цикл ходов
    {
        if (i % 2 == 1)
        {
            print(mas);
            cout << "Ход первого игрока, выберите ячейку: ";
            cin >> m >> n;

            mas[m - 1][n - 1] = 'X';
        }
        else if (i % 2 == 0)
        {
            print(mas);
            cout << "Ход второго игрока, выберите ячейку: ";
            cin >> m >> n;

            mas[m - 1][n - 1] = 'O';
        }
    }

    return 0;
}