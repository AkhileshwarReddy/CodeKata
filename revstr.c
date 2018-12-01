#include<stdio.h>
#include<string.h>

int main()
{
	int i,j;
	char str[20],rev[20];
	gets(str);
	int len = strlen(str);
	int len1 = len;
	for(i=0;i<len;i++)
	{
		len1--;
		rev[len1] = str[i];
	}
	puts(rev);
	return 0;
}
