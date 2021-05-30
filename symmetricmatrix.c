#include<stdio.h>
#include<conio.h>
#define size 2
int main(){
    int a[size][size],b[size][size],i,j,k;
    printf("Enter element of matrix of order %d x %d:\n",size,size);
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("Enter a[%d][%d]=",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            b[i][j]=a[j][i];
        }
    }
    k=1;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(a[i][j] != b[i][j]){
                k=0;
                break;
            }
        }
    }
    if(k==1){
        printf("\nThe given matrix is symmetric matrix:\n");
        for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("| %d |",a[i][j]);
        }
        printf("\n");
    }
    }
    else
    printf("\n The given matrix is not symmetric matrix.");
    return 0;
}