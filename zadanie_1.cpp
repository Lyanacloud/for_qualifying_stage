#include <string>
#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int main()
{
    string line;
    string example = "{}[]()";
    stack<char>s;
    getline(cin, line);
    if (line.length() < 1 || line.length() > pow(10, 4))
    {
        cout << "false";
        exit(0);
    }
    for (char x : line)
    {
        if (example.find(x) == std::string::npos)
        {
            cout << "false";
            exit(0);
        }
    }
    for (char i : line) {
        if (i == '(' || i == '[' || i == '{') {
            s.push(i);
        }
        else {
            if (s.empty())
            {
                cout << "false";
                exit(0);
            }
            char top = s.top();
            if ((i == ')' && top != '(') || (i == ']' && top != '[') || (i == '}' && top != '{'))
            {
                cout << "false";
                exit(0);
            }
            s.pop();
        }
    }
    if (!s.empty()) {
        cout << "false";
        exit(0);
    }
    cout << "true";
    return 0;
}