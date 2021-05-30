#include<stdio.h>
#include<conio.h>
int swap(int,int);
int main(){
    int a,b;
    printf("Enter two number:\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping:\n a = %d \n b = %d",a,b);
    swap(a,b);//call by value.
    return 0;
}
int swap(int x,int y){
    x=x+y;
    y=x-y;
    x=x-y;
    printf("\nAfter swapping:\n a = %d \n b = %d",x,y);
    return 0;
}