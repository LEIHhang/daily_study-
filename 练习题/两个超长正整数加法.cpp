//#include<iostream>
//#include<string>
//using namespace std;
//
//
//string AddLongInteger(string& addend, string& augend)
//{
//	string LongInter;
//	string ShortInter;
//	//1.�ý϶̵�ȥ�ӽϳ���
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
//	//2.���ý�λֵcarry,����β��
//	int carry = 0;
//	string tmp;
//	//3.ֱ��������϶̵ģ���carryΪ0���ٽ������ã�
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