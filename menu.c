#include<stdio.h>
#include<conio.h>
int main(){
    int num,i,fl=1,ch,f=1;
    while(fl==1){
        printf("1.Factorial of number.\n2.Prime or not.\n3.Odd or even.\n4.Exit.\nEnter your choice:\n");
        scanf("%d",&ch);
        if(ch==1){
            printf("Enter a number:\n");
            scanf("%d",&num);
            for(i=1;i<=num;i++){
                f*=i;
            }
            printf("Factorial of %d = %d\n",num,f);
            continue;
        }
        else if(ch==2){
            printf("Enter a positive number:\n");
            scanf("%d",&num);
            for(i=2;i<=num/2;++i){
                if(num%i==0){
                    f=0;
                    break;
                }
            }
            if(num==1){
                printf("1 is neither prime nor composite.\n");
            }
            else if(f==1){
                printf("%d is prime number.\n",num);
            }
            else if(f==0){
                printf("%d is not prime.\n",num);
            }
            continue;
        }else if(ch==3){
            printf("Enter a number:\n");
            scanf("%d",&num);
            if(num % 2 == 0)
            printf("%d is EVEN number.\n",num);
            else
            printf("%d is not ODD number.\n",num);
        }else{
            break;
        }
    }
    return 0;
}