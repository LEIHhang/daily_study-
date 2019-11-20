//С��������һ��ʯ��·ǰ��ÿ��ʯ���ϴ�1���ű��Ϊ��1��2��3.......
//����ʯ��·Ҫ��������Ĺ������ǰ��������С�׵�ǰ���ڵı��ΪK�� ʯ�壬С�׵���ֻ����ǰ��K��һ��Լ��(����1��K)����������K + X(XΪK��һ����1�ͱ����Լ��)��λ�á� С�׵�ǰ���ڱ��ΪN��ʯ�壬�����������ǡ��ΪM��ʯ��ȥ��С����֪��������Ҫ��Ծ���ο��Ե��
//���磺
//N = 4��M = 24��
//4->6->8->12->18->24
//����С��������Ҫ��Ծ5�Σ��Ϳ��Դ�4��ʯ������24��ʯ��
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

	arr[0] = 0;//���Լ���Ҫ0��
	for (int i = 0; i < m - n + 1; i++)
	{
		if (arr[i] != INT_MAX)
		{
			//��ȡ��������
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