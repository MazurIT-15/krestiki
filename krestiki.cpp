#include <iostream>
#include <windows.h>

using namespace std;

bool vertical_win(char mas[3][3]) {
    for (int i = 0; i < 3; i++) {
        if (mas[i][0] != '*' && mas[i][1] != '*' && mas[i][2] != '*') {

            if (mas[i][0] == mas[i][1] && mas[i][1] == mas[i][2]) {
                return true;
            }

        }
    }
    return false;
}

bool horizontal_win(char mas[3][3]) {
    for (int i = 0; i < 3; i++) {
        if (mas[i][0] != '*' && mas[i][1] != '*' && mas[i][2] != '*')
        {
            if (mas[0][i] == mas[1][i] && mas[1][i] == mas[2][i])
            {
                return true;
            }
        }
    }
    return false;
}

bool diagonal_win(char mas[3][3]) {

    if (mas[0][0] != '*' && mas[1][1] != '*' && mas[2][2] != '*')
    {
        if (mas[0][0] == mas[1][1] && mas[1][1] == mas[2][2])
        {
            return true;
        }
    }

    if (mas[0][2] != '*' && mas[1][1] != '*' && mas[2][0] != '*') {
        if (mas[0][2] == mas[1][1] && mas[1][1] == mas[2][0])
        {
            return true;
        }

    }
    return false;
}

bool win(char mas[3][3]) {
    if (vertical_win(mas) || horizontal_win(mas) || diagonal_win(mas))
    {
        return true;
    }
    return false;
}

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
            while (f) {

                print(mas);
                cout << "Ход первого игрока, выберите ячейку: ";
                //print(mas);
                cin >> m >> n;
                if (m <= 3 && m >= 1 && n <= 3 && n >= 1) {
                    if (mas[m - 1][n - 1] == '*') {
                        mas[m - 1][n - 1] = 'X';
                        print(mas);
                        f = false;

                        if (win(mas)) {
                            cout << "Первый игрок победил!" << endl;
                            break;
                        }
                    }
                    else {
                        cout << "Ячейка занята" << endl;
                    }
                }
                else {
                    cout << "Ошибка" << endl;
                }

            }

        }
        else if (i % 2 == 0)
        {
            print(mas);
            cout << "Ход второго игрока, выберите ячейку: ";
            cin >> m >> n;

            mas[m - 1][n - 1] = 'O';
            if (win(mas))
            {
                print(mas);
                cout << "Второй игрок победил!" << endl;
                break;
            }

        }
    }

    return 0;
}
