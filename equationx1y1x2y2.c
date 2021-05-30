#include<stdio.h>
#include<conio.h>
int main(){
    float x1,y1,x2,y2,m,c;
    printf("Enter x1 and y1:\n");
    scanf("%f%f",&x1,&y1);
    printf("Enter x2 and y2:\n");
    scanf("%f%f",&x2,&y2);
    m=(y2-y2)/(x2-x1);
    c=y1-(m*x1);//which is similar to c=y2-m*x2;
    printf ("\n Equation of straight line passing through the point (%.2f & %.2f) and (%.2f & %.2f) :\n Y = %.2f X + %.2f", x1, y1, x2, y2, m, c);
    return 0;
}