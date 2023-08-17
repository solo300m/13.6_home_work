#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<double> vec = {1.2, 2.5, 5.66, 9.1, 4.25};
    vector<int> beg = {1, 1, 0, 3};
    double sum = 0;
    cout << "Вектор цен: ";
    for (double j : vec)
    {
        cout << j << " ";
    }
    cout << endl;
    cout << "Вектор покупок: ";
    for (int i = 0; i < beg.size(); i++)
    {
        cout << beg[i] << " ";

        sum += vec[beg[i]];
    }
    cout << endl;
    cout << "Суммарная стоимость покупок будет равна: " << sum << endl;
}