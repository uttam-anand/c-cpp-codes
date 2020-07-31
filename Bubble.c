#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{ 
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif


  FILE *fp;
clock_t   s, t;
 int a[10000],i,j,n,temp,c=0;
 printf("enter the no. of  elements");
 scanf("%d",&n);
  fp=fopen("cases.txt","w");
  for(i=0;i<n;i++)
  fprintf(fp,"\t%d",rand());
  fclose(fp);
  fp=fopen("output.txt","r");
  for(i=0;i<n;i++)
  fscanf(fp,"%d",&a[i]);
  fclose(fp);
s=clock();
 for(i=0; i<n-1;i++)
       { 	for(j=0;j<n-1-i;j++)
 		{    if(a[j]>a[j+1])
   			{   temp=a[j];
   			    a[j]=a[j+1];
   			   a[j+1]=temp;  }  }  }
t=clock();
printf("time= %f",(t-s)/(double)CLOCKS_PER_SEC);
fp= fopen("output.txt","w");
 for(i=0;i<n;i++)
 fprintf(fp,"\t%d",a[i]);
  fclose(fp);
printf("total number of steps= %d",c);
     }                                                                                                                                                                                                                                                                                                                                              

