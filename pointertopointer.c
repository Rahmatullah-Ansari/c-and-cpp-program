#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int *ptr1;
    int **ptr2;
    ptr1=&n;
    ptr2=&ptr1;
    printf("number = %d\n",n);
    printf("value of number using single pointer = %d\n",*ptr1);
    printf("value of number using double pointer = %d\n",**ptr2);
    return 0;
}