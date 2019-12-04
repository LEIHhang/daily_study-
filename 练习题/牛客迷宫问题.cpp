#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int l;
	int r;
	cin >> l >> r;
	vector<vector<int>> v;
	v.resize(l);//设置行数
	//设置列
	for (int i = 0; i < l; i++)
	{
		v[i].resize(r);
	}
	//一行一行输入
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < r; j++)
		{
			cin >> v[i][j];
		}
	}

	//思路回溯法

	return 0;
}