#include<stdio.h>
#include<conio.h>
int fact(int);
int main(){
    int num;
    printf("Enter a number to find it's factorial:\n");
    scanf("%d",&num);
    printf("Factorial of %d = %d",num,fact(num));
    return 0;
}
int fact(int n){
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
}