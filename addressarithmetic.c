#include<stdio.h>
#include<conio.h>
int main(){
    int i,array[3];
    int *ptr;
    printf("Enter three number:\n");
    for(i=0;i<3;i++){
        scanf("%d",&array[i]);
    }
    ptr=array;
    for(i=0;i<3;i++){
        printf("\narray[%d] = %d\n",i,*ptr);
        printf("Address of %d = %d",*ptr,ptr);
        ptr++;
    }
    return 0;
}