//一个袋子里面有n个球，每个球上面都有一个号码(拥有相同号码的球是无区别的)。
//如果一个袋子是幸运的当且仅当所有球的号码的和大于所有球的号码的积。 
//例如：如果袋子里面的球的号码是{ 1, 1, 2, 3 }，这个袋子就是幸运的，
//因为1 + 1 + 2 + 3 > 1 * 1 * 2 * 3 
//你可以适当从袋子里移除一些球(可以移除0个, 但是别移除完)，要使移除后的袋子是幸运的。
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int jud(vector<int> &v)
//{
//	int mul = 1;
//	for (int i = 0; i < v.size(); i++)
//	{
//		mul *= v[i];
//	}
//	int sum = 0;
//	for (int i = 0; i < v.size(); i++)
//	{
//		sum += v[i];
//	}
//	if (sum > mul)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<int> v;
//		v.resize(n);
//		for (int i = 0; i < n; i++)
//		{
//			int num;
//			cin >> num;
//			v[i] = num;
//		}
//		sort(v.begin(), v.end());
//		int sum;//累加
//		int len = v.size();
//		for (int i = 0; i < len; i++)
//		{
//			sum += jud(v);
//			v.pop_back();
//		}
//		cout << sum << endl;
//	}
//}