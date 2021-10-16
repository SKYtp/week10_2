#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
char s[100], * p;
int c;
int big = 0, small = 0;
int main()
{
	p = s;
	printf("Enter string : ");
	scanf("%s", s);
	printf("\n------------------\n");
	while (*p != '\0') {
		p++;
		c++;
	}
	for (int i = 0; i < c; i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
		{
			big++;
		}
		else if (s[i] >= 97 && s[i] <= 122)
		{
			small++;
		}
	}
	printf("Big char : %d \n", big);
	printf("Small char : %d", small);
	return 0;
}