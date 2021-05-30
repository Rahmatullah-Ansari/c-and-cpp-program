#include<stdio.h>
#include<conio.h>
int main(){
    int arr[3][2]={{2,3},{4,5},{6,7}};
    int *ptr;
    ptr=*arr;
    printf("Elements of 2D array:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("arr[%d][%d] = %d\n",i+1,j+1,*ptr);
            ptr++;
        }
    }
    return 0;
}