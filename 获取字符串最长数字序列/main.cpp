#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<char> v;
	char a;
	while ((a = getchar())!='\n')
		v.push_back(a);
	//0-9数字的ascall码对应的是48-57
	int i = 0;
	int max = 0;
	int tmp = 0;
	int start = 0;
	int end = 0;
	while (i < v.size())
	{
		int sum = 0;
		if ('0' <= v[i] && v[i] <= '9')
		{
			tmp = i;
			while (i < v.size() && '0' <= v[i] && v[i] <= '9')
			{
				sum++;
				i++;
			}
			if (sum > max)
			{
				start = tmp;
				end = i;
				max = sum;
			}
		}
		else
			i++;
	}
	while (start<end)
	{
		cout << v[start];
		start++;
	}
}