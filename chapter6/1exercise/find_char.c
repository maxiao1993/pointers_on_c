#include<stdio.h>

char *
find_char( char const *source, char const *chars);

int 
main()
{
	char source[] = "abcdef";
	char chars[] = "xrcqef";

	char *a;
	a = find_char(source,chars);
	
	if(a == NULL)
		printf("a == NULL\n");
	else
		printf("%c\n",*a);

	return 0;
}
char *
find_char( char const *source, char const *chars)
{
	
	if(source == NULL || chars == NULL)
	{
		printf("字符串不能为空\n");
		return NULL;
	}
	char *ptr1;
	char *ptr2;
	for (ptr2 = chars ; *ptr2 != '\0'; ptr2++)
	{
		for(ptr1 = source; *ptr1 != '\0'; ptr1++)
		{
			if(*ptr1 == *ptr2)
				return ptr1;
		}
	}

	return NULL;
}
