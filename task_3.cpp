#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec(20);
    vector<int>::iterator iterTail;
    vector<int>::iterator itTech;
    iterTail = vec.begin();
    int enter = 0;
    int count = 0;
    cout << "Для вывода промежуточных результатов введите -1\nДля выхода из программы введите -2\n";
    while (true)
    {
        cout << "input number-> ";
        cin >> enter;
        if (enter != -1 && enter != -2)
        {
            if (iterTail != vec.end())
            {
                *iterTail = enter;
                iterTail++;
            }
            else
            {
                vec.erase(vec.begin());
                vec.push_back(enter);
            }
        }
        else if (enter == -1)
        {
            if (iterTail == vec.begin())
            {
                cout << "Вектор пуст!\n";
            }
            else
            {
                cout << "output: ";
                for (itTech = vec.begin(); itTech < iterTail; itTech++)
                {

                    cout << *itTech << " ";
                }
                cout << endl;
            }
        }
        else if (enter == -2)
        {
            cout << "Программа завершила работу!" << endl;
            break;
        }
    }
}