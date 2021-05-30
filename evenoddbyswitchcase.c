#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    switch(n%2){
        case 0:
        printf("%d is EVEN Number.",n);
        break;
        case 1:
        printf("%d is ODD Number.",n);
        break;
        default:
        printf("Invalid Input.");
    }
    return 0;
}