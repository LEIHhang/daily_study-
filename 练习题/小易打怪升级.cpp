////小易经常沉迷于网络游戏.有一次, 他在玩一个打怪升级的游戏, 他的角色的初始能力值为 a.
////在接下来的一段时间内, 他将会依次遇见n个怪物, 每个怪物的防御力为b1, b2, b3...bn.
////如果遇到的怪物防御力bi小于等于小易的当前能力值c, 那么他就能轻松打败怪物, 并
////且使得自己的能力值增加bi; 如果bi大于c, 那他也能打败怪物, 但他的能力值只能增加bi 与c的最大公约数.
////那么问题来了, 在一系列的锻炼后, 小易的最终能力值为多少 ?
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int greatest_common_divisor(int a, int b)
//{
//	//如果a<b,交换a b
//	if (a<b) int tmp = a, a = b, b = tmp;
//	//如果b为0则结束循环,返回0，否则计算b与a%b的gcd
//	return b == 0 ? a : greatest_common_divisor(b, a%b);
//}
//int main()
//{
//		int n;//怪物数量
//		int initval;//小易初始值
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