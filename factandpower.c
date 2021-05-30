#include<stdio.h>
#include<conio.h>
#include<math.h>
int find(int num){
    int f=1;
    for(int i=1;i<=num;i++){
        f*=i;
    }
    return f;
}
int main(){
    int num;
    float sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    int fact=find(num);
    printf("\nFactorial of %d = %d\n",num,fact);
    printf("power x^i/x! = ");
    int i=0;
    while(i<num){
        sum+=(pow(num,i)/fact);
        i++;
    }
    printf("%f",sum);
}