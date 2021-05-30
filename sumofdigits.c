#include<stdio.h>
#include<conio.h>
int main(){
    int n,s=0,r=0,t,rev=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    t=n;
    while(n>0){
        r=n%10;
        s+=r;
        rev=rev*10+r;
        n/=10;
    }
    printf("Sum of digits of %d = %d",t,s);
    printf("\nReverse of digits of %d = %d",t,rev);
    return 0;
}