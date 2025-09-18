#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    string alphabet = "qwertyuiopasdfghjklzxcvbnm";
    string s;
    string t;
    cin >> s;
    cin >> t;
    for (char x : s) 
    {
        if (alphabet.find(x) == std::string::npos)
        {
            cout << "Неправильный ввод";
            exit(0);
        }
    }
    for (char x : t)
    {
        if (alphabet.find(x) == std::string::npos)
        {
            cout << "Неправильный ввод";
            exit(0);
        }
    }
    if (s.length() < 1 || s.length() > 5 * pow(10, 4) || t.length() < 1 || t.length() > 5 * pow(10, 4))
    {
        cout << "Неправильная длина";
        exit(0);
    }
    reverse(t.begin(), t.end());
    if (s.length() != t.length())
    {
        cout << "false";
        exit(0);
    }
    else 
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i]!=t[i])
            {
                cout << "false";
                exit(0);
            }
        }
        cout << "true";
    }
    return 0;
}
