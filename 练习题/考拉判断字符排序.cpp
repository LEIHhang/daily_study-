////��Ŀ��������n���ַ����ַ��������������ַ������ȶ��ǲ�ͬ�ġ��������ѧϰ���������ַ��������򷽷��� 
////1.�����ַ������ֵ����������磺
////"car" < "carriage" < "cats" <"doggies" < "koala"
////2.�����ַ����ĳ����������磺
////"car" < "cats" < "koala" <"doggies" < "carriage"
////������֪���Լ�����Щ�ַ�������˳���Ƿ��������������򷽷�������Ҫæ�ų���Ҷ��������Ҫ������æ��֤
////
////����������
////�����һ��Ϊ�ַ�������n(n �� 100)
////��������n��, ÿ��һ���ַ���, �ַ������Ⱦ�С��100������Сд��ĸ���
////���������
////�����Щ�ַ����Ǹ����ֵ������ж����Ǹ��ݳ����������"lexicographically",
////������ݳ������ж������ֵ����������"lengths",
////������ַ�ʽ���������"both"���������"none"
////ʾ��1:
////����
////3
////a
////aa
////bbb
////���
////both
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//bool is_dic_rank(const vector<string> &v)
//{
//	for (int i = 0; i < v.size()-1; i++)
//	{
//		if (v[i]>v[i + 1])
//			return false;
//	}
//	return true;
//}
//bool is_size_rank(const vector<string> &v)
//{
//	for (int i = 0; i < v.size() - 1; i++)
//	{
//		if (v[i].size() > v[i + 1].size())
//			return false;
//	}
//	return true;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	vector<string> v;
//	v.resize(n);
//	char c =cin.get();//��ȡ������\n
//	for (int i = 0; i < n; i++)
//	{
//		getline(cin, v[i]);
//	}
//	int d=is_dic_rank(v);
//	int s = is_size_rank(v);
//	if (d & s)
//	{
//		cout << "both";
//		return 0;
//	}
//	if (d | s)
//	{
//		if (d == 1)
//		{
//			cout << "lexicographically";
//		}
//		else
//		{
//			cout << "lengths";
//		}
//		return 0;
//	}
//	cout << "none";
//	return 0;
//}