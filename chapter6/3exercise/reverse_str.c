#include<stdio.h>

void 
reverse_string( char *string);

int 
main()
{
	char string[] = "abcdefg";
	reverse_string(string);
	puts(string);
	return 0;
}

void
reverse_string( char *string)
{
	char * ptr = string;
	while(*ptr++ != '\0')
		;
	//这里用了两次自减1，因为上面的代码，指针指向‘\0’后又加了1，要指向最后一个字符，就得减两次。
	//使用for循环就只自减1次。
	ptr--;
	ptr--;
	while(string < ptr)
	{
		char temp;
		temp = *string;
		*string++ = *ptr;
		*ptr-- = temp;
	}

}
