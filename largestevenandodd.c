#include<stdio.h>
#include<conio.h>
int main(){
    int a[100],i,num,j=0,k,even,odd;
    int fl=1;
    printf("Enter number till zero:\n");
    while(fl==1){
        scanf("%d",&num);
        if(num != 0){
            a[j]=num;
            j++;
            k=j;
        }
        else
        fl=0;
    }
    int max=a[0];
    for(i=0;i<k;i++){
        if(a[i]>max&&a[i]%2==0)
        even=a[i];
        else if(a[i]>max&&a[i]%2!=0)
        odd=a[i];
    }
    printf("\nmaximum even number = %d",even);
    printf("\nmaximum odd number = %d",odd);
    return 0;
}