#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    if(a % 2 == 0)
    printf("%d is EVEN.",a);
    else
    printf("%d is ODD.",a);
    return 0;
}