////С�׾���������������Ϸ.��һ��, ������һ�������������Ϸ, ���Ľ�ɫ�ĳ�ʼ����ֵΪ a.
////�ڽ�������һ��ʱ����, ��������������n������, ÿ������ķ�����Ϊb1, b2, b3...bn.
////��������Ĺ��������biС�ڵ���С�׵ĵ�ǰ����ֵc, ��ô���������ɴ�ܹ���, ��
////��ʹ���Լ�������ֵ����bi; ���bi����c, ����Ҳ�ܴ�ܹ���, ����������ֵֻ������bi ��c�����Լ��.
////��ô��������, ��һϵ�еĶ�����, С�׵���������ֵΪ���� ?
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int greatest_common_divisor(int a, int b)
//{
//	//���a<b,����a b
//	if (a<b) int tmp = a, a = b, b = tmp;
//	//���bΪ0�����ѭ��,����0���������b��a%b��gcd
//	return b == 0 ? a : greatest_common_divisor(b, a%b);
//}
//int main()
//{
//		int n;//��������
//		int initval;//С�׳�ʼֵ
//		while (scanf("%d%d", &n, &initval) != EOF)
//		{
//			vector<int> b;
//			for (int i = 0; i < n; i++)
//			{
//				int bi;
//				cin >> bi;
//				b.push_back(bi);
//			}
//			for (int i = 0; i < b.size(); i++)
//			{
//				if (initval>b[i])
//				{
//					initval += b[i];
//				}
//				else
//				{
//					initval += greatest_common_divisor(initval, b[i]);
//				}
//			}
//			cout << initval << endl;
//		}
//}