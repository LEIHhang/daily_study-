#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int l;
	int r;
	cin >> l >> r;
	vector<vector<int>> v;
	v.resize(l);//��������
	//������
	for (int i = 0; i < l; i++)
	{
		v[i].resize(r);
	}
	//һ��һ������
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < r; j++)
		{
			cin >> v[i][j];
		}
	}

	//˼·���ݷ�

	return 0;
}