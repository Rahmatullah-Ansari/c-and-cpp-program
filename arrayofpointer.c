#include<stdio.h>
#include<conio.h>
int main(){
    int *ptr[3];
    int a,b,c;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    ptr[0]=&a;
    ptr[1]=&b;
    ptr[2]=&c;
    printf("values of a,b and c are:\n");
    for(int i=0;i<3;i++){
        printf("ptr[%d] = %d\n",i,*ptr[i]);
    }
    return 0;
}