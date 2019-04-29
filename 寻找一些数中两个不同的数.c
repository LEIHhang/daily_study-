//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个只出现一次的数字，编程实现。
//解决思路：
//分三步
//1、数组中所有元素进行相互异或，得到的结果就是那两个不同的数异或的结果，根据这个结果可以得到那个二进制位他们不一样，为第二步得到条件
//2、将数组分为两组，每一组有一个不一样的数。分组方法：根据步骤一中得到第几位的二进制数为1，进行判断分组，具体方法见代码
//3、因为如果一个数组中只有一个不同的数的话，那么这个数组连续异或的结果就是这个数。
#include<stdio.h>
#include<string.h>
void Find_two_different_number(int *arr, int sz, int *d1, int *d2)
{
	int i;
	*d1 = 0;
	*d2 = 0;
	int temp = 0;//存储两个不同数的异或结果
	for (i = 0; i < sz; i++)
	{
		temp ^= arr[i];
	}
	int p = 0;
	int t = temp;
	while (temp / 2)//求两个不同的数异或结果二进制位不同的位
	{
		if (temp % 2 == 1)
			break;
		p++;
		temp /= 2;
	}
	for (i = 0; i < sz; i++)
	{
		if (arr[i] >> p & 1 == 1)//这样两个不同的数中有一个数就不会参与与运算了
		{
			*d1 ^= arr[i];
		}
	}
	*d2 = t^*d1;
}
int main()
{
	int d1, d2;//设置两个不同数所存储的位置
	int sz;
	int arr[10] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 6 };//设置一个数组
	sz = sizeof(arr) / sizeof(int);
	Find_two_different_number(arr, sz, &d1, &d2);
	printf("%d,%d", d1, d2);
}
