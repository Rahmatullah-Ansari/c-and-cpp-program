#include<stdio.h>
#include<conio.h>
int main(){
    int i=1,j=1,n,a[50],b[50];
    printf("Enter size of array:\n");
    scanf("%d",&n);
    printf("Enter %d elements in an array:\n",n);
    for(i=1;i<=n;i++){
        printf("Enter a[%d] = \n",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n-1;i++){
        for(j=1;j<=n-i;j++){
            if(a[i+1]<a[i]){
                b[i]=a[i];
                a[i]=a[i+1];
                a[i+1]=b[i];

            }
        }
    }
    printf("sorted array in ascending order:\n");
    for(i=1;i<=n;i++){
        printf("%d\n",a[i]);
    }
    printf("sorted array in decending order:\n");
    for(i=n;i>0;i--){
        printf("%d\n",a[i]);
    }
    return 0;
}