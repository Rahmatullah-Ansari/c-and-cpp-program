#include<stdio.h>
#include<conio.h>
#define size 3
int main(){
    int i,j,sum,a[size][size];
    printf("Enter element of matrix of order %d x %d:\n",size,size);
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("Enter a[%d][%d]=",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nMatrix is:\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("| %d |",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<size;i++){
        sum=0;
        for(j=0;j<size;j++){
            sum+=a[i][j];
        }
        printf("\nSum of row - %d = %d",i+1,sum);
    }
    for(i=0;i<size;i++){
        sum=0;
        for(j=0;j<size;j++){
            sum+=a[j][i];
        }
        printf("\nSum of column - %d = %d",i+1,sum);
    }
    return 0;
}