#include<stdio.h>
#include<conio.h>
#include<string.h>
int check(char string1[50]);
int main(){
    char string1[50];
    int c;
    printf("Enter a string:\n");
    scanf("%s",&string1);
    c=check(string1);
    if(c==1)
    printf("%s is Palindrome string.",string1);
    else
    printf("%s is not Palindrome string.",string1);
    return 0;
}
int check(char string1[50]){
    int i,l,flag=0;
    l=strlen(string1);
    for(i=0;i<l;i++){
        if(string1[i] != string1[l-i-1]){
            flag=1;
            break;
        }
    }
    if(flag == 1)
    return 0;
    else
    return 1;
}