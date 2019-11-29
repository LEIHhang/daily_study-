////三个空汽水瓶可以换一个汽水
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
//			tmp = g / 3;//换取饮料个数
//			sum += tmp;///换取的饮料累加
//			g = g % 3;//换的时候不足3但还有剩余的瓶数
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