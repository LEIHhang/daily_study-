//1.ʵ��strcpy
#include<stdio.h>
#include<string.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* sourse)
{
	assert(dest, sourse);
	char* start = dest;
	while (*dest++ = *sourse++);
	return start;
}
//2.ʵ��strcat
char* my_strcat(char* dest, const char* sourse)//ʹ�ô˺���Ҫ��֤Ŀ���ַ����������������ַ������Ⱥ�
{
	assert(dest, sourse);
	int sz = strlen(dest);
	char* start = dest;
	char* temp = dest + sz;
	while (*temp++ = *sourse++);
	return start;
}
//3.ʵ��strstr
char* my_strstr(const char* str1, const char* str2)//��str1����str2���ҵ��ͷ���str1�к�str2����ͬλ�õĵ�ַ
{
	assert(str1, str2);
	const char* pstr1 = str1;
	const char* pstr2 = str2;
	while (*pstr1)
	{
		const char* temp = pstr1;//�ݴ�pstr1��ǰλ��
		while (*temp++ == *pstr2++);
		if (*(pstr2 - 1) == '\0')      //�ж������ַ����Ƿ����
			return pstr1;
		pstr2 = str2;           //���ڶ����ַ���ָ���λ
		pstr1++;                //��һ���ַ���ָ����һ��Ԫ��
	}
	return NULL;
}
//4.ʵ��strchr
char* my_strchr(const char* des, char c)//���ַ���des�в���c��һ�γ��ֵ�λ��
{
	assert(des);
	while (*des != c)
	{
		des++;
		if (*des == '\0')//���������˵���ַ���des�Ѿ�û��Ԫ�أ����Է��ؿ�ֵ
			return NULL;
	}
	return des;
}
//5.ʵ��strcmp
int my_strcmp(const char* dest, const char* sourse)
{
	assert(dest, sourse);
	while (1)
	{
		if (*dest > *sourse)
			return 1;
		else if (*dest < *sourse)
			return -1;
		else if (*dest == *sourse)
		{
			if (*dest == '\0'&&*sourse == '\0')
				return 0;
			dest++;
			sourse++;
		}
	}
}
//6.ʵ��memcpy
void* my_memcpy(void* dest, const void* sourse, size_t sz)//sz���ֽ�������ע�⣬��dest��sz�ֽڵ�sourse
{
	assert(dest, sourse);//�ж�dest��sourse�Ƿ��ǿ�ָ��
	void* pstr = dest;
	while (sz--)
	{
		*((char*)dest)++ = *((char*)sourse)++;//���ֽڸ�ֵ
	}
	return pstr;
}
//7.ʵ��memmove
void* my_memmove(void* dest, void* sourse, size_t sz)
{
	assert(dest, sourse);
	char* pdest, *psourse;
	pdest = dest;
	psourse = sourse;
	if (sourse > dest)
	{
		void* pstr = dest;
		while (sz--)
		{
			*pdest++ = *psourse++;//��ǰ�����ֽڸ�ֵ
		}
		return pstr;
	}
	else
	{
		void* pstr = dest;
		pdest += sz - 1;
		psourse += sz - 1;
		while (sz--)
		{
			*pdest-- = *psourse--;//�Ӻ���ǰ��ֵ
		}
		return pstr;
	}
}