#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int cal(int x){
	long r=1;
	for(int i=1;i<=x;i++){
		r*=i;
	}
	return r;
}
int main (  )
{
	int a[100],i,n,x,flag=0,l,h,m,choice,j;
	int z,dec,oct,rem,op=0;
	long long bin,hex;
	while(op==0){
	printf("\n\n1.Binary search.\t 2.Bubble sort.\t 3.selection sort.\n");
	printf("4.Insertion sort.\t5.Pascal Triangle.\n");
	printf("6.Number convertor.\n");
	printf("7.Exit\n");
	printf("select choice:\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
	printf("Enter size of an array:\n");
	scanf("%d",&n);
	printf("Enter %d elements of an array :\n",n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("Enter the number to be search:\n");
	scanf("%d",&x);
	l=0;h=n-1;
	m=(l+h)/2;
	while(l<=h)
	{
		if(a[m]<x)
			l=m+1;
		else if(a[m]==x)
		{
		printf("\n %d is found at position %d.\n",x,m+1);
		break;
		}
		else
		h=m-1;
		m=(l+h)/2;
	}
	if(l>h)
		printf("\n %d is not found in the list.",x);
		break;
		case 2:
		printf("Enter size of array:\n");
		scanf("%d",&n);
		printf("Enter %d integer in an array:\n",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(a[j]>a[j+1])
				{
					m=a[j];
					a[j]=a[j+1];
					a[j+1]=m;
				}
			}
		}
		printf(" sorted list in ascending order :\n");
		for(i=0;i<n;i++)
		{
			printf("\n %d",a[i]);
		}
		break;
		case 3:
		printf("Enter size of an array:");
		scanf("%d",&n);
		printf("Enter %d integer in an array :\n",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			m=i;
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					m=a[i];
					a[i]=a[j];
					a[j]=m;
				}
			}
		}
		printf("\n Sorted list in ascending order:\n");
		for(i=0;i<n;i++)
		{
			printf("\t %d",a[i]);
		}
		break;
		case 4:
		printf("Enter size of an array:\n");
		scanf("%d",&n);
		printf("Enter %d integer in an array:\n",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=1;i<=n-1;i++)
		{
			j=i;
			while (j>0&&a[j-1]>a[j])
			{
				m=a[j];
				a[j]=a[j-1];
				a[j-1]=m;
				j--;
			}
		}
		printf("sorted list in ascending order:\n");
		for(i=0;i<=n-1;i++)
		{
			printf("\t %d ",a[i]);
		}
		break;
		case 5:
		printf("Enter number of rows:\n");
		scanf("%d",&n); 
		for(i=0;i<n;i++)
		{
			for(m=0;m<=(n-i-2);m++)
			printf(" ");
			for(j=0;j<=i;j++)
			{
				printf("%ld",cal(i)/cal(j)*cal(i-j));
			}
			printf("\n");
		}
		break;
		case 6:
		printf("select your choice:\n");
		printf("1.Binary to decimal.\t2.Decimal to Binary.\n");
		printf("3.Binary to octal.\t 4.Octal to binary.\n");
		printf("5.Decimal to Octal.\t6.Octal to decimal.\n");
		printf("Enter choice:");
		scanf("%d",&z);
		switch(z)
		{
			case 1:
			printf("Enter a binary number:");
			scanf("%lld",&bin);
			i=0;
			dec=0;
			while(bin !=0)
			{
				rem=bin%10;
				bin/=10;
				dec=dec+rem*pow(2,i);
				i++;
			}
			printf("\n Equivalent decimal of given Binary number=%d in decimal",dec);
			break;
			case 2:
			printf("Enter decimal number:\n");
			scanf("%d",&dec);
			bin=0;
			i=1;
			while(dec !=0)
			{
				rem=dec%2;
				dec/=2;
				bin=bin+rem*i;
				i*=10;
			}
			printf("Equivalent binary number of given decimal number:%lld",bin);
			break;
			case 3:
			printf("Enter a binary number:\n");
			scanf("%lld",&bin);
			oct=0;
			dec=0;
			i=0;
			while(bin !=0)
			{
				dec=dec+(bin%10)*pow(2,i);
				i++;
				bin/=10;
			}
			i=1;
			while(dec !=0)
			{
				oct=oct+(dec%8)*i;
				dec/=8;
				i*=10;
			}
			printf("\n Equivalent octal number of given binary number is:%d",oct);
			break;
			case 4:
			printf("Enter a octal number :\n");
			scanf("%d",&oct);
			dec=0;
			bin=0;
			i=0;
			while(oct !=0)
			{
				dec=dec+(oct%10)*pow(8,i);
				i++;
				oct/=10;
			}
			i=1;
			while(dec !=0)
			{
				bin=bin+(dec%2)*i;
				dec/=2;
				i*=10;
			}
			printf("Equivalent binary of given octal number:%lld",bin);
			break;
			case 5:
			printf("Enter a decimal number:\n");
			scanf("%d",&dec);
			oct=0;
			i=1;
			while(dec !=0)
			{
				oct=oct+(dec%8)*i;
				dec/=8;
				i*=10;
			}
			printf(" Equivalent octal number of given decimal number is:%d",oct);
			break;
			case 6:
			printf("Enter a octal number:\n");
			scanf("%d",&oct);
			dec=0;
			i=0;
			while(oct !=0)
			{
				dec=dec+(oct%10)*pow(8,i);
				i++;
				oct/=10;
			}
			i=1;
			printf("Equivalent decimal of given octal number is :%d",dec);
			break;
		}
		case 7:
		op=1;
		break;
	}
	}
	return 0;
	}