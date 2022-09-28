#include<stdio.h>
#include<string.h>
int sort(int n,int array[]);
int main(){
    int arr[50],num;
    printf("Enter size :");
    scanf("%d",&num);
    printf("Enter elements of array :");
    int temp;
    for (int i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }
    int n=sort(num,arr);
    if (n==1)
    {
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}
int sort(int n,int array[]){
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; i < n; i++)
        {
            if (array[j] < array[i])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
        
    }
    int flag=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; i < n; i++)
        {
            if ((array[j] - array[i]) == 1)
            {
                flag=1;
            }else{
                flag=0;
            }
            printf("%d",flag);
            
        }
        
    }
    return flag;
    
}