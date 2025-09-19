#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
class RecentCounter 
{
	vector<int> request_time;
	int time = 3000;
public:
	RecentCounter() {}
	int ping(int t) 
	{
		if (t<1 || t>pow(10, 9))
		{
			return 0;
		}
		request_time.push_back(t);
		while (!request_time.empty() && request_time.front() < t - time) 
		{
			request_time.erase(request_time.begin());
		}
		return request_time.size();
	}
};
int main()
{
	RecentCounter counter;
	cout << counter.ping(1) << "\n";
	cout << counter.ping(100) << "\n";
	cout << counter.ping(3001) << "\n";
	cout << counter.ping(3002) << "\n";
	return 0;
}