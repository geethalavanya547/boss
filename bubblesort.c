#include<stdio.h>
#define SIZE 7
int main()
{
int i,j,temp;
int array[SIZE];
for(i=0;i<SIZE;i++)
{
printf("enter number");
scanf("%d",&array[i]);
}
for(i=0;i<=SIZE;i++)
{
for(j=0;j<(SIZE-1)-i;j++)
{
if(array[j]>array[j+1])
{
temp=array[j];
array[j]=array[j+1];
array[j+1]=temp;
}
}
printf("%d\t",array[j]);
}
return 0;
}
