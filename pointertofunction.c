#include<stdio.h>
#include<conio.h>
int sum(int*,int*);
int main(){
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("sum of %d and %d = %d",a,b,sum(&a,&b));
    return 0;
}
int sum(int*x,int*y){
    return *x+*y;
}