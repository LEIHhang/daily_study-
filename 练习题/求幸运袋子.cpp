//һ������������n����ÿ�������涼��һ������(ӵ����ͬ����������������)��
//���һ�����������˵ĵ��ҽ���������ĺ���ĺʹ���������ĺ���Ļ��� 
//���磺��������������ĺ�����{ 1, 1, 2, 3 }��������Ӿ������˵ģ�
//��Ϊ1 + 1 + 2 + 3 > 1 * 1 * 2 * 3 
//������ʵ��Ӵ������Ƴ�һЩ��(�����Ƴ�0��, ���Ǳ��Ƴ���)��Ҫʹ�Ƴ���Ĵ��������˵ġ�
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int jud(vector<int> &v)
//{
//	int mul = 1;
//	for (int i = 0; i < v.size(); i++)
//	{
//		mul *= v[i];
//	}
//	int sum = 0;
//	for (int i = 0; i < v.size(); i++)
//	{
//		sum += v[i];
//	}
//	if (sum > mul)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<int> v;
//		v.resize(n);
//		for (int i = 0; i < n; i++)
//		{
//			int num;
//			cin >> num;
//			v[i] = num;
//		}
//		sort(v.begin(), v.end());
//		int sum;//�ۼ�
//		int len = v.size();
//		for (int i = 0; i < len; i++)
//		{
//			sum += jud(v);
//			v.pop_back();
//		}
//		cout << sum << endl;
//	}
//}