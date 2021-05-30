#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,n,a,b;
    printf("Enter number of row:\n");
    scanf("%d",&n);
    b=n;
    printf("Pattern:-\n");
    for(i=1;i<=n;i++){
        a=i;
        for(j=1;j<=b;j++){
            printf(" ");
        }
        b--;
        for(j=1;j<=i;j++){
            printf("%d",a);
            a++;
        }
        a--;
        a--;
        for(j=1;j<i;j++){
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}