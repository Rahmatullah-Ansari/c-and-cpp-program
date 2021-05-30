#include<stdio.h>
#include<conio.h>
int main(){
    //for loop.
    printf("for loop:\n");
    for(int i=0;i<=10;i++){
        printf("%d\n",i);
    }
    int i=0;
    printf("while loop:\n");//while loop.
    while (i<=10)
    {
        printf("%d\n",i);
        i++;
    }
    i=0;
    printf("do-while loop:\n");//do-while loop.
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<=10);
    
    return 0;
}