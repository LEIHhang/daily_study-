//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。
//
#include<stdio.h>
int dverse(int m)
{
	int sum = m;
	int p = m;//瓶数
	int temp = 0;
	while (p != 0 && p != 1)
	{
		temp += p / 2;
		int l = p % 2;
		p = p / 2 + l;
	}
	sum += temp;
	return sum;
}
int main()
{
	int m;
	printf("请输入要花费的钱数 ");
	scanf("%d", &m);
	printf("能买%d瓶汽水\n", dverse(m));
}