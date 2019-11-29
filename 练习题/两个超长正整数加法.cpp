//#include<iostream>
//#include<string>
//using namespace std;
//
//
//string AddLongInteger(string& addend, string& augend)
//{
//	string LongInter;
//	string ShortInter;
//	//1.用较短的去加较长的
//	if (addend.size() < augend.size())
//	{
//		LongInter = augend;
//		ShortInter = addend;
//	}
//	else
//	{
//		LongInter = addend;
//		ShortInter = augend;
//	}
//	//2.设置进位值carry,进行尾插
//	int carry = 0;
//	string tmp;
//	//3.直到遍历完较短的，且carry为0，再进行逆置；
//	for (int i = 0; ShortInter.size(); i++)
//	{
//		int sig = (ShortInter[i] - '0' + LongInter[i] - '0' + carry)%10;
//		carry = sig / 10;
//		tmp.push_back(char(sig + '0'));
//	}
//	string sum;
//	sum.assign(tmp.rbegin(), tmp.rend());
//	return sum;
//}
//int main()
//{
//	string str1, str2;
//	cin >> str1 >> str2;
//	cout << AddLongInteger(str1, str2);
//}