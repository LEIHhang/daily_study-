//��Ŀ������
//�������������������
//xcopy / s c : \ d : \��
//
//�����������£�
//
//����1��������xcopy
//
//����2���ַ��� / s
//
//����3���ַ���c : \
//
//����4 : �ַ���d : \
//
//���дһ��������������ʵ�ֽ������и�����������������
//˼·:
//1.ͨ��getline��ȡһ������
//2.����һ��vector<string>�����ÿո�ֿ����ַ���
//3.ͨ��ѭ����vectotr�������
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int main()
//{
//	string s;
//	getline(cin, s);
//	vector<string> v;
//	auto start = s.begin();
//	auto end = s.begin();
//	while (start != s.end())
//	{
//		while (end != s.end() && *end != ' ')
//		{
//			end++;
//		}
//		string tmp(start, end);
//		v.push_back(tmp);
//		if (end != s.end())
//		{
//			end++;
//		}
//		start = end;
//	}
//	cout << v.size() << endl;
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << endl;
//	}
//}