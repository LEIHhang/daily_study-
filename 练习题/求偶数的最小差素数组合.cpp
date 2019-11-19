#include<iostream>
using namespace std;
bool judge_prim(int k)
{
	if (k == 1)
		return true;
	for (int i = 2; i < k; i++)
	{
		if (k%i == 0)
			return false;
	}
	return true;
}
bool judge_jo(int k)//奇数为真，偶数为假
{
	if (k % 2 == 0)
		return true;
	else
		return false;
}
int main()
{
	int n;//输入偶数
	while (cin >> n)
	{
		int less= n / 2;
		int more = n / 2;
		if (judge_jo(less))
		{
			less -= 1;
			more += 1;
		}
		int flag1 = judge_prim(less);
		int flag2 = judge_prim(more);
		while (flag1 == 0 || flag2 == 0)
		{
			less -= 2;
			more += 2;
			flag1 = judge_prim(less);
			flag2 = judge_prim(more);
		}
		cout << less << endl;
		cout << more << endl;
	}
	return 0;
}