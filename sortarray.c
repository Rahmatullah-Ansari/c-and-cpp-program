#include<stdio.h>
#include<conio.h>
int main(){
    int num,temp;
    printf("Enter size of array:\n");
    scanf("%d",&num);
    printf("Enter %d elements in array:\n",num);
    int arr[num];
    for(int i=0;i<num;i++){
        printf("Enter arr[%d]:\n",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            if(arr[i]>=arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Sorted array in ascending order:\n");
    for(int i=0;i<num;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }
    printf("Sorted array in desending order:\n");
    for(int i=0;i<num;i++){
        printf("arr[%d]=%d\n",i,arr[num-i-1]);
    }
    return 0;
}