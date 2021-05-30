#include<stdio.h>
#include<conio.h>
int main(){
    int i=0;
    char x,a[100];
    puts("Enter name:");
    scanf("%s",&a);
    while(a[i] != '\0'){
        x=a[i];
        if(x >= 'A' && x <= 'Z'){
            a[i]=a[i]+32;
        }
        else if(x >= 'a' && x <= 'z'){
            a[i]=a[i]-32;
        }
        i++;
    }
    printf("Alternate order = %s\n",a);
    return 0;
}