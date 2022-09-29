
#include <iostream>
using namespace std;
int length;
int values[10001];
int DP[10001];
int main()
{
	cin >> length;
	for (int i = 1; i < length+1; i++)
	{
		cin >> values[i];
	}
	DP[1] = values[1];
	DP[2] = DP[1] + values[2];
	for (int i = 3; i < length + 1; i++)
	{
		
		DP[i] = max(DP[i - 2]+values[i], DP[i - 3] + values[i - 1] + values[i]);
		DP[i] = max(DP[i - 1], DP[i]);
	}
	cout << DP[length];
}
