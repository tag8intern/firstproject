#include <stdio.h>
void main()
{
	int i,r,sum=0,temp;
	printf("Enter a number:");
	scanf("%d",&r);
	temp=r;
	while(r!=0)
	{
		r = r%10;
		r = r/10;
		sum = sum + (r*r*r);
	}

	if (temp==sum)
	{
		printf("%d is a Amstrong number",r);
	}
	else
	{
		printf("%d not a Amstrong Number",r);
	}
}