#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char str[10];
    printf("Enter a string:");
    scanf("%s",&str);
    printf("Reverse of string %s = ",str);
    for(int i=strlen(str);i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}