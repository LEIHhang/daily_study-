//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string n;
//	while (cin >> n)
//	//while (scanf("%d",&n)!=EOF)
//	{
//		//if (n < 1)
//		//{
//		//	return 0;
//		//}
//		//if (n < 10)
//		//{
//		//	cout << n << endl;
//		//	continue;
//		//}
//		while (1)
//		{
//			//while (n > 0)
//			//{
//			//	int m = n % 10;
//			//	v.push_back(m);
//			//	n /= 10;
//			//}
//			int sum = 0;
//			for (int i = 0; i < n.size(); i++)
//			{
//				sum += n[i] - '0';
//			}
//			if (sum < 10)
//			{
//				cout << sum << endl;
//				break;
//			}
//			else
//			{
//				n.resize(0);
//				int i = 0;
//				while (sum > 0)
//				{
//					int m = sum % 10;
//					n.push_back(m + '0');
//					sum /= 10;
//				}
//			}
//		}
//	}
//}