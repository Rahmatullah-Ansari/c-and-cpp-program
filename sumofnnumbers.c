#include<stdio.h>
#include<conio.h>
int sum(int);
int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("Sum of %d number = %d",n,sum(n));
    return 0;
}
int sum(int x){
    if(x<0)
    printf("Enter positive number!");
    else if(x != 0)
    return x+sum(x-1);
    else
    return x;
}