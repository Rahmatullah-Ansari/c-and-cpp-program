#include<stdio.h>
#include<conio.h>
int main(){
    char str[10];
    int c=0;
    char *ptr;
    printf("Enter a string:\n");
    gets(str);
    ptr=str;
    while(*(ptr++)){
    c++;
    }
    printf("Length of %s = %d",str,c);
    return 0;
}