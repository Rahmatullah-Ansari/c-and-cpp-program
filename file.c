#include<stdio.h>
#include<conio.h>
int main(){
    FILE *f;
    char c;
    f=fopen("sneha.txt","w");
    if(f==NULL)
    printf("File not created!");
    else
    printf("File created!");
    putc('s',f);
    putc('n',f);
    putc('e',f);
    putc('h',f);
    putc('a',f);
    printf("\nData written successfully.");
    fclose(f);
    f=fopen("sneha.txt","r");
    if(f==NULL)
    printf("\nCan't open file!");
    else
    printf("\nContent = ");
    printf("%c",getc(f));
    printf("%c",getc(f));
    printf("%c",getc(f));
    printf("%c",getc(f));
    printf("%c",getc(f));
    printf("\nContent read successfully.");
    fclose(f);
    return 0;
}