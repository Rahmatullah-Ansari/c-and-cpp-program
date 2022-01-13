#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char name[100];
    char str[100];
    printf("Enter name :");
    scanf("%s",&name);
    strcpy(str,name);
    printf("Reverse of %s is = %s",str,strrev(name));
    return 0;
}