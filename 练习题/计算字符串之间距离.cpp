#include<iostream>
#include<string>
#include<vector>
using namespace std;

int calStringDistance(string a, string b)
{
	int l = a.size();
	int w = b.size();
	//初始化二维数组
	vector<vector<int>> v;
	v.resize(l + 1);
	for (int i = 0; i < l; i++)
	{
		v[i].assign(0,w+1);
	}
	for (int i = 1; i < l + 1; i++)
	{
		v[0][i] = a[i-1];
	}
	for (int i = 1; i < w + 1; i++)
	{
		v[i][0] = b[i - 1];
	}

	
}

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	cout<< calStringDistance(s1 , s2);
}