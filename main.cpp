#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int s;
    int R;
    do
    {
        cout << "Введите размерность квадрата: ";
        cin >> R;

        if (R <= 0)
        {
            cout << "Сторона квадрата должна быть больше 0." << endl;
            return 0;
        }

        cout << "Необходимо выбрать фигуру: " << endl;
        cout << "1 - фигура 'а'" << endl;
        cout << "2 - фигура 'б'" << endl;
        cout << "3 - фигура 'в'" << endl;
        cout << "4 - фигура 'г'" << endl;
        cout << "5 - фигура 'д'" << endl;
        cout << "6 - фигура 'е'" << endl;
        cout << "7 - фигура 'ж'" << endl;
        cout << "8 - фигура 'з'" << endl;
        cout << "9 - фигура 'и'" << endl;
        cout << "10 - фигура 'к'" << endl;
        cout << "Выберите вариант для построения (1-10). 0 для выхода.";
        cin >> s;

        for (int i = 1; i <= R; i++)
        {
            for (int j = 1; j <= R; j++)
            {
                switch (s)
                {
                case 0: cout << "До новых встреч!" << endl;
                    return 0;
                    break;
                case 1: if (j >= i) cout << "*"; else cout << " ";
                    break;
                case 2: if (j <= i) cout << "*"; else cout << " ";
                    break;
                case 3: if (j >= i && i + j <= R + 1) cout << "*"; else cout << " ";
                    break;
                case 4: if (j <= i && i + j >= R + 1) cout << "*"; else cout << " ";
                    break;
                case 5: if (j >= i && i + j <= R + 1 || j <= i && i + j >= R + 1) cout << "*"; else cout << " ";
                    break;
                case 6: if (j <= i && i + j <= R + 1 || j >= i && i + j >= R + 1) cout << "*"; else cout << " ";
                    break;
                case 7: if (j <= i && i + j <= R + 1) cout << "*"; else cout << " ";
                    break;
                case 8: if (j >= i && i + j >= R + 1) cout << "*"; else cout << " ";
                    break;
                case 9: if (j + i > R + 1) cout << " "; else cout << "*";
                    break;
                case 10: if (j + i < R + 1) cout << " "; else cout << "*";
                    break;
                default: cout << "Неправильный выбор! Прекращение работы программы!!!" << endl;
                    return 0;
                    break;
                }
            }
            cout << endl;
        }


    } while (s);

    return 0;
}


