#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,f;
    printf("Enter range:\n");
    scanf("%d%d",&a,&b);
    printf("Prime numbers between %d and %d:\n",a,b);
    for(int i = a+1;i < b; ++i){
        f=0;
        for(int j = 2;j <= i / 2; ++j){
            if(i % j == 0){
                f=1;
                break;
            }
        }
        if(f == 0)
        printf("%d ",i);
    }
    return 0;
}