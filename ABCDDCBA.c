#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,k=0,s=2,num;
    printf("Enter the number of rwo:\n");
    scanf("%d",&num);
    for(i=num;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%c",j+64);
        }
        if(i!=num){
            for(k=1;k<=s;k++){
                printf(" ");
            }
            s+=2;
        }
        for(j=i;j>=1;j--){
            printf("%c",j+64);
        }
        printf("\n");
    }
    return 0;
}