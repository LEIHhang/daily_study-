////求一个byte数字对应的二进制数字中1的最大连续数，例如3的二进制为00000011，最大连续2个1
////我的思路，通过与数字1&，能判断最低位是否为1，遇到0刷新当前累计值，看是否需要更新最大值
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		int max = 0;
//		for (int i = 0; i < 8; i++)
//		{
//			int sum = 0;
//			while ((n & 1) == 1)
//			{
//				sum++;
//				n >>= 1;
//				i++;
//			}
//			if (sum > max)
//			{
//				max = sum;
//			}
//			if ((n & 1) == 0)
//			{
//				n >>= 1;
//			}
//		}
//		cout << max << endl;
//	}
//}