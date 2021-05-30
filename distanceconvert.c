#include<stdio.h>
#include<conio.h>
int main(){
    float dis;
    printf("Enter distance of two cities in kilometer:\n");
    scanf("%f",&dis);
    printf("Distance of two cities in meters = %.3f meters\n",dis*1000);
    printf("Distance of two cities in centimeters = %.3f centimeters\n",dis*100000);
    printf("Distance of two cities in feets = %.3f feets\n",dis*3280.8399);
    printf("Distance of two cities in inches = %.3f inches\n",dis*39370.0787);
    return 0;
}