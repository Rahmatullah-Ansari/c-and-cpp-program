#include<stdio.h>
#include<conio.h>
#define size 3
struct student
{
    int id;
    char name[25];
    int age;
};
int main()
{
    int i;
    struct student std[size];
    printf("Enter details of %d students:\n",size);
    for(i=0;i<size;i++){
        printf("Enter id of student - %d:\n",i+1);
        scanf("%d",&std[i].id);
        printf("Enter name of student - %d:\n",i+1);
        scanf("%s",&std[i].name);
        printf("Enter age of student - %d:\n",i+1);
        scanf("%d",&std[i].age);
    }
    printf("\nDetails of %d students are as follows:\n Id\t\t\tName\t\t\tAge\n",size);
    for(i=0;i<3;i++){
        printf("%d\t\t\t%s\t\t\t%d\n",std[i].id,std[i].name,std[i].age);
    }

}