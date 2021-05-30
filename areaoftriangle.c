#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float a,b,c;
    float s=0,A=0,x=0;
    printf("Enter sides of triangle:\n");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    x=s*(s-a)*(s-b)*(s-c);
    A=sqrt(x);
    printf("Area of triangle = %.2f square unit.",A);
    return 0;
}