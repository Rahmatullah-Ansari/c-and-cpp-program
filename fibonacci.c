#include<stdio.h>
#include<conio.h>
int main(){
    int num,a=0,b=1,temp;
    printf("Enter number of term to generate fibonacci series:\n");
    scanf("%d",&num);
    printf("Fibonacci series upto %d term:\n",num);
    for(int i=0;i<num;i++){
        printf("%d\n",a);
        temp=a+b;
        a=b;
        b=temp;
    }
    return 0;
}