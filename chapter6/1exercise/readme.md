# C和指针
## 第六章 指针
### 6.18 编程练习
1.解答：

嵌套for循环写成了这样，
	for(ptr2; *ptr2 !='\0'; ptr2++)
		for(ptr1; *ptr1 = '\0'; ptr1)
很显然，外层循环第二次执行时，内层循环的指针已经跑到了字符串之后。所以要改为，
	for(ptr2 = chars; *ptr2 != '\0'; ptr2++)
		for(ptr1 = source; *ptr1 != '\0'; ptr1++)