#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,n;
    printf("Enter number of rwo:\n");
    scanf("%d",&n);
    printf("Pattern:-\n");
    for(i=1;i<=n+1;i++){
        for(j=n+1;j>i;j--){
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}