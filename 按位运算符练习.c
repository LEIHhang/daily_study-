//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832

#include<math.h>
#include<stdio.h>

unsigned int reverse_bit(unsigned int value)
{
	int ret = 0;
	int a = 0;
	for (int i = 0; i < 31; i++)
	{
		a = value & 1;//ȡ�����λ��������a��
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
//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int ret = (a&b) + ((a^b) >> 1);
	printf("%d", ret);
}
//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
//������ֵ����������򣬳ɶԳ��ֵĶ�����λ�ϵ�1�ĺ�Ϊż��������һ�εĶ�����λ1֮��Ϊ�������������������ܵõ��������ֵĽ����
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
//��һ���ַ����������Ϊ:"student a am i",
//			���㽫��������ݸ�Ϊ"i am a student".
//			Ҫ��
//			����ʹ�ÿ⺯����
//			ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
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
	reverse(ptr, ptr + len - 1);//�ַ�������
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
