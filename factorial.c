#include<stdio.h>
#include<conio.h>
#include<fact.h>
#include<Ashi.h>
int main(){
    int num;
    char name[100];
    // printf("Enter a number:");
    // scanf("%d",&num);
    // printf("\nFactorial of %d = %d",num,fact(num));
    printf("\nEnter your name without space:");
    scanf("%s",&name);
    printf("\nAscii value of each character:\n");
    find_ascii(name);
    return 0;
}