//#include<iostream>
//using namespace std;
//int get_max(int &a, int &b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//int get_min(int &a, int &b)
//{
//	if (a <= b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	int max = get_max(a, b);
//	int min = get_min(a, b);
//	int mul = a*b;
//	for (int i = 1; i*max < mul; i++)
//	{
//		if (i*max%min == 0)
//		{
//			cout << i*max;
//			return 0;
//		}
//	}
//	cout << mul;
//	return 0;
//}