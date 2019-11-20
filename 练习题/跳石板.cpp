//小易来到了一条石板路前，每块石板上从1挨着编号为：1、2、3.......
//这条石板路要根据特殊的规则才能前进：对于小易当前所在的编号为K的 石板，小易单次只能往前跳K的一个约数(不含1和K)步，即跳到K + X(X为K的一个非1和本身的约数)的位置。 小易当前处在编号为N的石板，他想跳到编号恰好为M的石板去，小易想知道最少需要跳跃几次可以到达。
//例如：
//N = 4，M = 24：
//4->6->8->12->18->24
//于是小易最少需要跳跃5次，就可以从4号石板跳到24号石板
#include<iostream>
#include<vector>
#define INT_MAX 0x7fffffff
using namespace std;
bool get_factor(int m,vector<int>& v)
{
	if (m <= 2)
		return true;
	for (int i = 2; i < m; i++)
	{
		if (m%i == 0)
		{
			v.push_back(i);
		}
	}
	return true;
}
int jump(int n, int m)
{
	vector<int> arr(m-n+1,INT_MAX);

	arr[0] = 0;//到自己需要0步
	for (int i = 0; i < m - n + 1; i++)
	{
		if (arr[i] != INT_MAX)
		{
			//获取因数集合
			vector<int> v;
			get_factor(n + i,v);
			for (int j = 0; j < v.size() ; j++)
			{
				if (i + v[j] < m - n + 1 && arr[i] + 1<arr[i + v[j]])
					arr[i + v[j]] = arr[i] + 1;
			}
		}
	}
	if (arr[m - n] != INT_MAX)
		return arr[m - n];
	else
		return -1;
}
int main()
{
	int n, m;
	cin >> n >> m;
	cout << jump(n, m);
}