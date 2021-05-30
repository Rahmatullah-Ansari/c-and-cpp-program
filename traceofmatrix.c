#include<stdio.h>
#include<conio.h>
#include<math.h>
//trace is the sum of all diagonal element.
int main(){
    int i,j,r,c,sum=0;
    printf("Enter row and column of matrix:\n");
    scanf("%d%d",&r,&c);
    int mat[r][c];
    printf("Enter element of matrix of order %d x %d:\n",r,c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter mat[%d][%d]=",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Matrix is:\n");
    for(i=0;i<r;i++){
        sum+=mat[i][i];
        for(j=0;j<c;j++){
            printf("| %d |",mat[i][j]);
        }
        printf("\n");
    }
    printf("Trace of given matrix = %d",sum);
    return 0;
}