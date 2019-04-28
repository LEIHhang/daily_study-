//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "ABCDEFGHIJ";
	int k = 0;
	scanf("%d", &k);
	while (k--)
	{
		char temp;
		int len = strlen(arr);//10
		temp = arr[0];//保留首元素
		for (int i = 0; i < len - 1; i++)//后面元素赋值给前一个元素
		{
			arr[i] = arr[i + 1];
		}
		arr[len - 1] = temp;//首元素赋给最后
	}
	printf("%s", arr);
}
//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC

int judge(char *arr1, char *arr2)
{
	int len = strlen(arr1);
	int j = 0;
	for (j = 0; j < len; j++)
	{
		char temp;
		temp = arr1[0];
		for (int i = 0; i < len - 1; i++)
		{
			arr1[i] = arr1[i + 1];
		}
		arr1[len - 1] = temp;
		if (strcmp(arr1, arr2) == 0)
			return 1;
	}
	return 0;
}

int main()
{
	char arr1[] = "ABCDEF";
	char arr2[] = "CDEFAB";
	char arr3[] = "ABCDEE";//arr3验证作用
	printf("%d", judge(arr1, arr2));//判断arr2是否是arr1的翻转后的字符串
}

