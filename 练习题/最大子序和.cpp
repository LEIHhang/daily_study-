//#include<iostream>
//#include<vector>
//using namespace std;
//int mmax(int a, int b)
//{
//	return a > b ? a : b;
//}
//int getmax(vector<int> &v, int sz)
//{
//	int sum=v[0];
//	int max=v[0];
//	for (int i = 0; i < sz; i++)
//	{
//		sum=mmax(sum + v[i], v[i]);
//		if (sum >= max)
//		{
//			max = sum;
//		}
//	}
//	return max;
//}
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<int> v(n);
//		for (int i = 0; i < n; i++)
//		{
//			int couse;
//			cin >> couse;
//			v[i] = couse;
//		}
//		int max = getmax(v, v.size());
//		cout << max << endl;
//	}
//}