#include<stdio.h>
#include<conio.h>
#define size 3
struct employee{
    char ename[100];
    int ecode;
    int bsal;
};
int main(){
    struct employee emp[size];
    int da,hr,it,net;
    printf("Enter details of %d employies:\n",size);
    for(int i=0;i<size;i++){
        printf("Enter %d employee name:\n",i+1);
        scanf("%s",&emp[i].ename);
        printf("Enter %d employee code:\n",i+1);
        scanf("%d",&emp[i].ecode);
        printf("Enter basic salary of %d employee:\n",i+1);
        scanf("%d",&emp[i].bsal);
    }
    printf("Details of %d employee:\nEmployee Name\tEmployee code\tEmployee basic salary\tEmployee net salary\n",size);
    for(int i=0;i<size;i++){
        da=(emp[i].bsal*20)/100;
        it=(emp[i].bsal*10)/100;
        hr=(emp[i].bsal*40)/100;
        net=emp[i].bsal+da-it-hr;
        printf("%s\t\t\t%d\t\t%d\t\t%d\n",emp[i].ename,emp[i].ecode,emp[i].bsal,net);
    }
    return 0;
}