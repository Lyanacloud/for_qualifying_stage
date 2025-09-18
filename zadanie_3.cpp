#include <vector>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    vector<int> for_prices;
    string line;
    getline(cin, line);
    istringstream mas(line);
    for (int i = 0; i < line.length(); i++)
    {
        int k;
        mas >> k;
        if (k<0 || k>pow(10, 4)) 
        {
            cout << "error";
            exit(0);
        }
        else
        {
            for_prices.push_back(k);
        }
    }
    int len = for_prices.size();
    if (len < 1 || len > pow(10, 5)) {
        cout << "error";
        exit(0);
    }
    else
    {
        int max_prib = 0;
        vector<int>prib;
        for (int j = 0; j < len; j++)
        {
            for (int k = j + 1; k < len - 1; k++)
            {
                if ((for_prices[k] - for_prices[j]) > 0)
                {
                    prib.push_back(for_prices[k] - for_prices[j]);
                }
            }
        }
        if (prib.size() == 0)
        {
            cout << "0";
        }
        else
        {
            for (int x = 0; x < prib.size(); x++)
            {
                if (max_prib < prib[x])
                {
                    max_prib = prib[x];
                }
            }
            cout << max_prib;
        }
    }
    
}