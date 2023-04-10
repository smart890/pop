#include<stdio.h>
void main()
{
int n,i,low,high,mid,flag=0;
int key,a[50];
printf("\n Enter the number of elements:\n");
scanf("%d",&n);
printf("\nEnter the elements of array :\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nEnter the key to be searched:\n");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(key==a[mid])
{
printf("\nkey is found at location %d\n",mid+1);
flag=1;
break;
}
else if(key>a[mid])
{
low=mid+1;
}
else
{
high=mid-1;
}
}
if(flag==0)
{
printf("\n key not found in the list \n");
}
}