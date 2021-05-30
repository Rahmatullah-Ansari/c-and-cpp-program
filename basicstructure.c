/*Author = sneha shaklani.*/ //documentation section.
#include<stdio.h>//link section.
#include<conio.h>
#define n 10 //definition section.
int a=10,b=20;//global declaration.
int sum(int,int);
int main(){
    printf("value of n = %d\n",n);
    printf("value of a = %d\n",a);
    printf("value of b = %d\n",b);
    printf("sum of %d and %d = %d\n",a,b,sum(a,b));
    return 0;
}
//sub program section.
int sum(int a,int b){
    return a+b;
}