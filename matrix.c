#include<stdio.h>
#include<conio.h>
int main(){
    int r1,c1,r2,c2,i,j,k,sum=0;
    printf("Enter the row and column of first matrix:\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the elements of first matrix:\n");
    int mat1[r1][c1];
    for(i=0;i<r1;i++)
    {
    	for(j=0;j<c1;j++)
    	{
    		scanf("%d",&mat1[i][j]);
    	}
    }
    printf("Enter the row and columns of second matrix:\n");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2)
    printf("Matrices with entered orders can't be multiplied with each other .\n");
    else
    {
        int mat2[r2][c2];
    	printf("Enter the elements of second matrix:\n");
    	for(i=0;i<r2;i++)
    	{
    		for (j=0;j<c2;j++)
    		{
    			scanf("%d",&mat2[i][j]);
    		}
    	}
        int mat3[50][50];
    	for(i=0;i<r1;i++)
    	{
    		for(j=0;j<c2;j++)
    		{
    			for(k=0;k<r1;k++)
    			{
    				sum+=mat1[i][k]*mat2[k][j];
    			}
    			mat3[i][j]=sum;
    			sum=0;
    		}
    	}
    	printf("product of entered Matrices :-\n");
    	for(i=0;i<r1;i++)
    	{
    		for(j=0;j<c2;j++)
    		{
    			printf("| %d |",mat3[i][j]);
    		}
    		printf("\n");
    	}
    }
    return 0;
}