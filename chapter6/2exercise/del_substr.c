#include<stdio.h>

int
del_substr(char *str, char const *substr);

char *
match(char *str, char const *want);

int 
main()
{
	char str[] = "abcdefg";
	char substr[] = "cdef";

	del_substr(str,substr);

	puts(str);
	puts(substr);
	return 0;
}

int
del_substr(char *str, char const *substr)
{
	char *next;

	while(*str != '\0')
	{
		next = match(str,substr);
		if(next != NULL)
		{
			break;
		}
		str++;
	}

	if(*str == '\0')
	{
		return 0;
	}

	//想清楚这两个指针目前指向的位置。
	while(*str++ = *next++)
		;
	return 1;
}

//判断两个字符串是否匹配。不用想太多，仅仅是判断两个字符串是否相等。
char *
match(char *str, char const *substr)
{
	while(*substr != '\0')				//这里的指针不用自动加一，而是下面的if语句用来判断。
	{
		if(*str++ != *substr++)			//这边进行判断。
		{
			return NULL;
		}
	}
	return str;
}
