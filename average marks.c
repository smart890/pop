#include <stdio.h>
struct student
{
char usn[50];
char name[50];
int marks;
} s[10];
void main()
{
int i,n,countav=0,countbv=0;
float sum,average;
printf("\n Enter number of Students\n");
scanf("%d",&n);
printf("\n Enter information of students:\n");
// storing information
for(i=0; i<n;i++)
{
printf("\n Enter USN ofstudent %d: ",i+1);
scanf("%s",s[i].usn);
printf("\n Enter name of student %d: ",i+1);
scanf("%s",s[i].name);
printf("\n Enter marks ofstudent %d: ",i+1);
scanf("%d",&s[i].marks);
printf("\n");
}
printf("Displaying Information:\n\n");
// displaying information 
for(i=0; i<n; i++)
{
printf("\nUSN of student %d is : %s\n",i+1,s[i].usn);
printf("Name of student %d is : ",i+1);
puts(s[i].name);
printf("Marks of student %d is : %d",i+1, s[i].marks);
printf("\n");
}
for(i=0;i<n;i++)
{
sum=sum+s[i].marks;
}
average=sum/n;
printf("\nAverage marks is : %f",average);
countav=0;
countbv=0;
for(i=0;i<n;i++)
{
if(s[i].marks>=average)
countav++;
else
countbv++;
}
printf("\nTotal No of students scored above average= %d",countav);
printf("\nTotal No of students scored below average= %d",countbv);
}

