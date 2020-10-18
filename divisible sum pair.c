#include<stdio.h>
int main()
{
	int n,s,i,k,b,j,count=0,a[101];
	scanf("%d %d",&n,&s);
	for(k=0;k<n-1;k++)
	   {
	   	scanf("%d",&a[k]);
		} 
	for(i=0;i<n-1;i++)
	{
		for(j=1;i<j;j++)
		{
            if (i<j)
			 {
			 b=a[i]+a[j];{
			if(b%s==0)
			 count++; 	}}
		}
	}
	printf("%d",count);
	return 0;
}
