//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�
//
#include<stdio.h>
int dverse(int m)
{
	int sum = m;
	int p = m;//ƿ��
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
	printf("������Ҫ���ѵ�Ǯ�� ");
	scanf("%d", &m);
	printf("����%dƿ��ˮ\n", dverse(m));
}