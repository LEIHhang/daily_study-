//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
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
		temp = arr[0];//������Ԫ��
		for (int i = 0; i < len - 1; i++)//����Ԫ�ظ�ֵ��ǰһ��Ԫ��
		{
			arr[i] = arr[i + 1];
		}
		arr[len - 1] = temp;//��Ԫ�ظ������
	}
	printf("%s", arr);
}
//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC

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
	char arr3[] = "ABCDEE";//arr3��֤����
	printf("%d", judge(arr1, arr2));//�ж�arr2�Ƿ���arr1�ķ�ת����ַ���
}

