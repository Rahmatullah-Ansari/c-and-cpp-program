#include<stdio.h>
#include<conio.h>
int main(){
    int i,k,n,item,b,e,m;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements in an array:\n",n);
    for(i=0;i<n;i++){
        printf("Enter array[%d] = \n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be search:\n");
    scanf("%d",&item);
    b=0,e=n-1,m=(b+e)/2;
    while(b<=e && arr[m] != item){
        if(item<arr[m])
        e=m-1;
        else
        b=m+1;
        m=(b+e)/2;
    }
    if(arr[m] == item)
    printf("%d is found at location :%d",item,m+1);
    else
    printf("%d is not found.",item);
}