#include<stdio.h>
#include<conio.h>
#define size 3
struct student{
    char name[100];
    int roll;
    int per;
};
int main(){
    struct student std[size];
    printf("Enter details of %d student:\n",size);
    for(int i=0;i<size;i++){
        printf("Enter name of %d student:\n",i+1);
        scanf("%s",&std[i].name);
        printf("Enter roll number of %d student:\n",i+1);
        scanf("%d",&std[i].roll);
        printf("Enter percentage of %d student:\n",i+1);
        scanf("%d",&std[i].per);
    }
    printf("Details of %d student are:\nStudent name\t\tStudent roll number\t\tStudent percentage\n",size);
    for(int i=0;i<size;i++){
        printf("%s\t\t\t\t%d\t\t\t\t%d\n",std[i].name,std[i].roll,std[i].per);
    }
    printf("Student of maximum marks:\n");
    int max=std[0].per;
    printf("Student name\t\tStudent roll number\t\tStudent percentage\n");
    for(int k=1;k<=size;k++){
        if(max<std[k].per){
            printf("%s\t\t\t\t%d\t\t\t\t%d\n",std[c].name,std[c].roll,std[c].per);
        }
    }
    return 0;
}