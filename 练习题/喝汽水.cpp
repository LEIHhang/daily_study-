////��������ˮƿ���Ի�һ����ˮ
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	int n;
//	vector<int> v;
//	while (cin>>n && n!=0)
//	{
//		v.push_back(n);
//	}
//	vector<int> v2;
//	for (int i = 0; i < v.size(); i++)
//	{
//		int sum = 0;
//		int g = v[i];
//		while (g >= 3)
//		{
//			int tmp = 0;
//			tmp = g / 3;//��ȡ���ϸ���
//			sum += tmp;///��ȡ�������ۼ�
//			g = g % 3;//����ʱ����3������ʣ���ƿ��
//			g = g + tmp;
//		}
//		if (g == 2)
//			sum += 1;
//		v2.push_back(sum);
//	}
//	for (int i = 0; i < v2.size(); i++)
//	{
//		cout << v2[i] << endl;
//	}
//	return 0;
//}