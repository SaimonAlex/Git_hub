#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int s;
    int R;
    do
    {
        cout << "������� ����������� ��������: ";
        cin >> R;

        if (R <= 0)
        {
            cout << "������� �������� ������ ���� ������ 0." << endl;
            return 0;
        }

        cout << "���������� ������� ������: " << endl;
        cout << "1 - ������ '�'" << endl;
        cout << "2 - ������ '�'" << endl;
        cout << "3 - ������ '�'" << endl;
        cout << "4 - ������ '�'" << endl;
        cout << "5 - ������ '�'" << endl;
        cout << "6 - ������ '�'" << endl;
        cout << "7 - ������ '�'" << endl;
        cout << "8 - ������ '�'" << endl;
        cout << "9 - ������ '�'" << endl;
        cout << "10 - ������ '�'" << endl;
        cout << "�������� ������� ��� ���������� (1-10). 0 ��� ������.";
        cin >> s;

        for (int i = 1; i <= R; i++)
        {
            for (int j = 1; j <= R; j++)
            {
                switch (s)
                {
                case 0: cout << "�� ����� ������!" << endl;
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
                default: cout << "������������ �����! ����������� ������ ���������!!!" << endl;
                    return 0;
                    break;
                }
            }
            cout << endl;
        }


    } while (s);

    return 0;
}


