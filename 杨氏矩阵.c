//2.
////杨氏矩阵
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9
#include<stdio.h>
#define N 3//设置数组大小

void find_number(int(*arr)[N], int n)
{
	if (n<arr[0][0] || n>arr[N - 1][N - 1])//首先判断数是否在这个二维数组内
	{
		printf("找不到");
		return;
	}
	int i = 0;
	while (i<N)
	{
		if (n < arr[i][N - 1])//和每一行最后的元素比较
		{
			for (int j = N - 1; j >= 0; j--)//遍历这一行所有元素
			{
				if (arr[i][j] == n);
				{
					printf("找到了");
					return;
				}
			}
			printf("找不到");
		}
		++i;
	}
}
int main()
{
	int arr[N][N] = { { 1, 2, 3 }, { 2, 3, 4 }, { 3, 4, 5 } };
	printf("请输入你要查找的数\n");
	int n;
	scanf("%d", &n);
	find_number(arr, n);
}