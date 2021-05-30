#include<stdio.h>
#include<conio.h>
struct student
{
       char name[50];
       int age;
};
struct info
{
       int id;
       struct student st;
};
int main()
{
       struct info i;
       printf("\nEnter student name : ");
       scanf("%s",&i.st.name);
       printf("\nEnter student age : ");
       scanf("%d",&i.st.age);
       printf("\nEnter student id : ");
       scanf("%d",&i.id);
       printf("\nStudent name=%s",i.st.name);
       printf("\nStudent age=%d",i.st.age);
       printf("\nStudent id=%d",i.id);
       return 0;
}