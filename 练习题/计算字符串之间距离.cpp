//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//int calStringDistance(const string& a,const string& b)
//{
//	int l = a.size();
//	int w = b.size();
//	//初始化二维数组
//	vector<vector<int>> v;
//	v.resize(l + 2);
//	for (int i = 0; i < l+2; i++)
//	{
//		v[i].assign(w+2,0);
//	}
//	for (int i = 2; i < l + 2; i++)
//	{
//		v[0][i] = a[i-2];
//	}
//	for (int i = 2; i < w + 2; i++)
//	{
//		v[i][0] = b[i - 2];
//	}
//
//	
//	return 0;
//}
//
//int main()
//{
//	string s1, s2;
//	cin >> s1 >> s2;
//	calStringDistance(s1 , s2);
//}