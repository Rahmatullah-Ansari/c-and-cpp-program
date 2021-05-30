#include<stdio.h>
#include<conio.h>
int find(int x,int y){
    int l;
    for(int i=2;i<=x&&i<=y;i++){
        if(x%i==0&&y%i==0){
            return i;
            break;
        }
    }
}
int main(){
    int a,b;
    printf("Enter two number:\n");
    scanf("%d%d",&a,&b);
    printf("Least common divisor of %d and %d = %d",a,b,find(a,b));
    return 0;
}