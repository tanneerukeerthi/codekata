#include<stdio.h>
void main()
{
	int N,a[100000],i,count=0,j;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	scanf("%d",&a[i]);
	for(i=0;i<3;i++)
	{
		if(a[i]%2==0)
		count++;
	}
	if(count>1)
	{
	for(i=0;i<N-1;i++)
	{
		if(a[i]%2!=0)
		{
		printf("%d",a[i]);
		break;
		}
	}
}
else
{
		for(i=0;i<N-1;i++)
	{
		if(a[i]%2==0)
		{
		printf("%d",a[i]);
		break;
		}
	}
}
}
