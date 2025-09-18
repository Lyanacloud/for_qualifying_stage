#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    int m;
    int for_m;
    int for_n;
    string line;
    vector<int>nums_1;
    vector<int>nums_2;
    cout << "Введите nums_1 ";
    getline(cin, line);
    istringstream mas(line);
    int k;
    while (mas>>k)
    {
        if (k > (-pow(10, 9)) && k < pow(10, 9))
        {
            nums_1.push_back(k);
        }
    }
    for_m = nums_1.size();
    cout << "Введите m ";
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string second_line;
    cout << "Введите nums_2 ";
    getline(cin, second_line);
    istringstream lmas(second_line);
    int y;
    while (lmas>>y)
    {
        if (y > (-pow(10, 9)) && y < pow(10, 9))
        {
            nums_2.push_back(y);
        }
    }
    cout << "Введите n ";
    cin >> n;
    for_n = nums_2.size();
    if (for_m == (m + n) && for_n == n && (m + n) <= 200 && m >= 0 && m <= 200 && n>0 && n<=200)
    {
        if (nums_1.size() > m)
        {
            nums_1.resize(m);
        }
        for (int i = 0; i < n ; i++)
        {
            nums_1.push_back(nums_2[i]);
        }
        sort(nums_1.begin(), nums_1.end());
        for (int i = 0; i < nums_1.size(); i++)
        {
            cout << nums_1[i] << " ";
        }
    }
    return 0;
}