//#include<iostream>
//#include<string>
//using namespace std;
//struct result
//{
//	int flag;
//	char ch;
//};
//result get_fir_one(string &s)
//{
//	result res = { -1, ' ' };
//	/*if (s.size() <= 0)
//		return res;
//		*/
//	
//	int tableSize = 256;
//	int* hashTable = new int[tableSize]();
//	for (int i = 0; i < s.size(); i++)
//	{
//		hashTable[s[i]]++;
//	}
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (hashTable[s[i]] == 1)
//		{
//			res.flag = 1;
//			res.ch = s[i];
//		}
//	}
//	return res;
//}
//
//int main()
//{
//	string s;
//	result res = get_fir_one(s);
//	while (cin >> s)
//	{
//		if (res.flag == 1)
//		{
//			cout << res.ch << endl;
//		}
//		else
//			cout << res.flag << endl;
//	}
//
//}