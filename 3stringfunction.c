#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char st[10];
    char s[10];
    printf("Enter a string:\n");
    scanf("%s",&st);
    strcpy(s,st);
    printf("Reverse of %s = %s",s,strrev(st));
    printf("\nLength of %s = %d",s,strlen(s));
    printf("\nCopy of %s = %s",s,s);
    return 0;
}