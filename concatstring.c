#include<stdio.h>
#include<conio.h>
int main(){
    char str1[10],str2[10];
    printf("Enter first string:");
    scanf("%s",&str1);
    printf("\nEnter second string:");
    scanf("%s",&str2);
    char *a=str1;
    char *b=str2;
    while(*(++a));
    while(*(a++) = *(b++));
    printf("\nConcatenation of two string=%s",str1);
    return 0;
}