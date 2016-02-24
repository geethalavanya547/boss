#include<stdio.h>
main()
{
int i,j,a,n,number[30];
printf("enter the value of n");
scanf("%d",&n);
printf("enter the number");
for(i=0;i<n;i++)
scanf("%d",&number[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;++j)
{
if(number[i]>number[j])
{
a=number[i];
number[i]=number[j];
number[j]=a;
}
}
}
printf("the numbers arranged in ascending order are given below:");
for(i=0;i<n;i++)
{
printf("%d\n",number[i]);
}
}

