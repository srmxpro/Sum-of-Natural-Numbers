#include<stdio.h>
int main()
{
	int n,i=1,s=0;
	printf("Enter a positive integer : ");
	scanf("%d",&n);
	while (i<=n)
	{
		s=s+i;
		i++;
	}
	printf("Sum = %d",s);
	return 0;
}