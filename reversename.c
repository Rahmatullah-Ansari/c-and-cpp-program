#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char str[20];
    printf("Enter name:\n");
    scanf("%s",&str);
    int l=strlen(str);
    printf("Name in reverse order:\n");
    for(int i=l-1;i>=0;i--){
        printf("%c\n",str[i]);
    }
    return 0;
}