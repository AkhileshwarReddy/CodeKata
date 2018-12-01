#include<stdio.h>
#include<string.h>

int main(){
	int n, res=1, i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		res = res * i;
	}
	printf("%d",res);
	return 0;
}
