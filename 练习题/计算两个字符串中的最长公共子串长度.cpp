//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s1;
//	string s2;
//	cin >> s1 >> s2;
//	string longS;
//	string shortS;
//	if (s1.size() > s2.size())
//	{
//		longS = s1;
//		shortS = s2;
//	}
//	else
//	{
//		longS = s2;
//		shortS = s1;
//	}
//	int len = 0;//设置保存较长长度
//	auto pl = longS.begin();
//	auto ps = shortS.begin();
//	auto tmps = ps;
//	auto tmpl = pl;
//	while (longS.end() - tmpl >= len)
//	{
//		tmps = ps;
//		while (tmps < shortS.end() )
//		{
//			auto newtmps = tmps;
//			auto newtmpl = tmpl;
//			int sum = 0;
//			while (*newtmps == *newtmpl)
//			{
//				++sum;
//				++newtmps;
//				++newtmpl;
//				if (newtmpl == longS.end() || newtmps == shortS.end())
//					break;
//			}
//			if (sum > len)
//			{
//				len = sum;
//			}
//			tmps++;
//		}
//		tmpl++;
//	}
//	cout << len << endl;
//}