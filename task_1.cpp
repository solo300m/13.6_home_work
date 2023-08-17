#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int length = 0;
    cout << "Ввести размер вектора: ";
    cin >> length;
    cout << "Input vector size: " << length << endl;
    vector<int> vec(length);
    vector<int>::iterator iter;
    char menu = ' ';
    while (true)
    {
        cout << "Ввести пункт меню: ";
        cin >> menu;
        if (menu == 'a')
        {
            cout << "Ввод данных в вектор размером: " << vec.size() << endl;
            for (int i = 0; i < length; i++)
            {
                cout << "Ввести " << i << "-й элемент->";
                cin >> vec[i];
            }
            cout << "Input numbers: ";
            for (int i : vec)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else if (menu == 'd')
        {
            int temp = 0;
            cout << "Ввести значение, которое надо удалить из вектора: ";
            cin >> temp;
            if (!vec.empty())
            {
                for (iter = vec.begin(); iter != vec.end(); iter++)
                {
                    if (*iter == temp)
                    {
                        vec.erase(iter);
                    }
                }
                cout << "Input number to delete: " << temp << endl;
                cout << "Result: ";
                for (iter = vec.begin(); iter != vec.end(); iter++)
                {
                    cout << *iter << " ";
                }
                cout << endl;
            }
            else
            {
                cout << "Вектор пуст!" << endl;
            }
        }
        else if (menu == 'c')
        {
            cout << "Программа завершила свою работу" << endl;
            break;
        }
    }
}
