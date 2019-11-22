#include<iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		int sum = 0;
		while (n != 0)
		{
			if (n & 1 == 1)
			{
				sum++;
			}
			n >>= 1;
		}
		cout << sum << endl;

	}
}