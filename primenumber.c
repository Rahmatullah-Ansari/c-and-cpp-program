#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,flag,j;
    printf("Prime number between 1 to 100:-");
    for(i=2;i<=100;i++){
        flag=0;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("\t%d",i);
        }
    }
}