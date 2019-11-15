//#include<iostream>
//#include<string>
//using namespace std;
//bool judge_mos(string &s)
//{
//	int sz = s.size();
//	for (int i = 0; i < sz / 2; i++)
//	{
//		if (s[i] != s[sz - i - 1])
//			return false;
//	}
//	return true;
//}
//int main()
//{
//	string s;
//	getline(cin, s);
//	string s2;
//	getline(cin, s2);
//	int sum = 0;
//	for (int i = 0; i <= s.size(); i++)//Ç°²å
//	{
//		string tmp(s);
//		tmp.insert(i, s2);
//		if (judge_mos(tmp))
//		{
//			sum++;
//		}
//	}
//	cout << sum << endl;
//}