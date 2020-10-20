#include<stdio.h>
int main()
{
	int i,n,c=0,d=0,max,min;
	int score[100000];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&score[i]);
	}
	min=score[0];
	max=score[0];
	for(i=0;i<=n-1;i++)
	{
		if(score[i]>max)
		{
			max=score[i];
			c++;
		}
		else if(score[i]<min)
		{
			min=score[i];
			d++;
		}
		else 
		continue;
	}
	printf("%d %d",c,d);
	return 0;	
}
