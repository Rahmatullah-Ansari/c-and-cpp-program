#include<stdio.h>
#include<conio.h>
#include<math.h>
//normal is the square root of square sum of each element.
int main(){
    int i,j,r,c,a=0,sum=0;
    float n=0;
    printf("Enter row and column of matrix:\n");
    scanf("%d%d",&r,&c);
    int mat[r][c];
    printf("Enter element of matrix of order %d x %d:\n",r,c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter mat[%d][%d]=",i+1,j+1);
            scanf("%d",&mat[i][j]);
            a=mat[i][j]*mat[i][j];
            sum=sum+a;
        }
    }
    printf("Matrix is:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("| %d |",mat[i][j]);
        }
        printf("\n");
    }
    n=sqrt(sum);
    printf("Normal of given matrix = %f",n);
    return 0;
}