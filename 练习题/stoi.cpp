//#include<iostream>
//#include<string>
//using namespace std;
//class Solution {
//public:
//	int StrToInt(string str) {
//		int num = 0;
//		int n = 0;
//		for (int i = str.length() - 1; i >= 0; i--)
//		{
//			if (str[i] == '+')
//				return num;
//			if (str[i] == '-')
//				return -num;
//			if (str[i] - '0'>9 || str[i] - '0'<0)
//				return 0;
//			if (str[i] - '0' <= 9 && str[i] - '0' >= 0)
//			{
//
//				num += (str[i] - '0')* (int)pow(10, n);
//				n++;
//			}
//		}
//		return num;
//	}
//};
//int main()
//{
//	Solution a;
//	string s = "123";
//	cout<<a.StrToInt(s);
//}