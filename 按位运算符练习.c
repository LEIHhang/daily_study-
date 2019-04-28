//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值是value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832

#include<math.h>
#include<stdio.h>

unsigned int reverse_bit(unsigned int value)
{
	int ret = 0;
	int a = 0;
	for (int i = 0; i < 31; i++)
	{
		a = value & 1;//取出最低位，保存在a中
		ret = ret | a;
		ret = ret << 1;
		value = value >> 1; 
	}
	return ret;
}
unsigned int reverse_bit2(unsigned int value)
{
	int ret = 0;
	int sum = 0;
	for (int i = 1; i <= 32; i++)
	{
		ret = (value >> (i - 1)) & 1;
		sum += ret*pow(2, 32 - i);
	}
	return sum;
}
unsigned int reverse_bit3(unsigned int value)
{
	unsigned int sum = 0;
	for (int i = 0; i < 31; i++)
	{

		sum |= value & 1;
		value >>= 1;
		sum = sum << 1;
	}
	return sum;
}
int main()
{
	unsigned int value;
	scanf("%u", &value);
	printf("%u", reverse_bit3(value));
}
//2.不使用（a + b） / 2这种方式，求两个数的平均值。

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int ret = (a&b) + ((a^b) >> 1);
	printf("%d", ret);
}
//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
//将所有值进行连续异或，成对出现的二进制位上的1的和为偶数，出现一次的二进制位1之和为奇数，所以连续异或就能得到单独出现的结果。
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };
	int ret = 0;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		ret ^= arr[i];
	}
	printf("%d", ret);
}

//4.
//有一个字符数组的内容为:"student a am i",
//			请你将数组的内容改为"i am a student".
//			要求：
//			不能使用库函数。
//			只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//			student a am i
//			i ma a tneduts
//			i am a student
			int my_strlen(char* ptr)
{
	int len = 0;
	while (*ptr != 0)
	{
		len++;
		ptr += 1;
	}
	return len;
}
void scu_reverse(char* ptr);
void reverse(char* ptr, char* end)
{
	while (ptr < end)
	{
		char temp = *ptr;
		*ptr = *end;
		*end = temp;
		ptr++;
		end--;
	}
}
void scu_reverse(char* ptr)
{
	int len = my_strlen(ptr);
	reverse(ptr, ptr + len - 1);//字符串逆序
	while (*ptr)
	{
		char* start = ptr;
		while (*ptr != ' '&&*ptr != 0)
		{
			ptr++;
		}
		reverse(start, ptr - 1);
		while (*ptr == ' ')
		{
			ptr++;
		}
	}


}

int main()
{
	char arr[] = "student a am i";
	int len = my_strlen(arr);
	reverse(arr, 0, len - 1);
	scu_reverse(arr);
	printf("%s", arr);
	return 0;
}
