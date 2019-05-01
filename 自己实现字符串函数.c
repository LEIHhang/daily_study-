//1.实现strcpy
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
//2.实现strcat
char* my_strcat(char* dest, const char* sourse)//使用此函数要保证目标字符串足以容纳两个字符串长度和
{
	assert(dest, sourse);
	int sz = strlen(dest);
	char* start = dest;
	char* temp = dest + sz;
	while (*temp++ = *sourse++);
	return start;
}
//3.实现strstr
char* my_strstr(const char* str1, const char* str2)//在str1中找str2，找到就返回str1中和str2中相同位置的地址
{
	assert(str1, str2);
	const char* pstr1 = str1;
	const char* pstr2 = str2;
	while (*pstr1)
	{
		const char* temp = pstr1;//暂存pstr1当前位置
		while (*temp++ == *pstr2++);
		if (*(pstr2 - 1) == '\0')      //判断两个字符串是否相等
			return pstr1;
		pstr2 = str2;           //将第二个字符串指针归位
		pstr1++;                //第一个字符串指向下一个元素
	}
	return NULL;
}
//4.实现strchr
char* my_strchr(const char* des, char c)//在字符串des中查找c第一次出现的位置
{
	assert(des);
	while (*des != c)
	{
		des++;
		if (*des == '\0')//满足此条件说明字符串des已经没有元素，所以返回空值
			return NULL;
	}
	return des;
}
//5.实现strcmp
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
//6.实现memcpy
void* my_memcpy(void* dest, const void* sourse, size_t sz)//sz是字节数，需注意，向dest传sz字节的sourse
{
	assert(dest, sourse);//判断dest和sourse是否是空指针
	void* pstr = dest;
	while (sz--)
	{
		*((char*)dest)++ = *((char*)sourse)++;//按字节赋值
	}
	return pstr;
}
//7.实现memmove
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
			*pdest++ = *psourse++;//按前往后字节赋值
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
			*pdest-- = *psourse--;//从后往前赋值
		}
		return pstr;
	}
}