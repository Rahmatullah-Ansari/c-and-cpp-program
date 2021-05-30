#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main ( )
{
    float x, y,z, x1, y1, m, c, Y,A;
    char st[100],ch;
    int choice,s,d,n,i,a,b,flag,j,p,q,s1=0,n1,a1=0,s2=0,z1[100][100],z2[100][100],k,z3[100][100],l,op=0;
    while(op==0){
    printf ("\n\nselect your operation :\n") ;
    printf ("1.Equation of straight line :\t\n2.Average of number till zero:\t\n3.greatest between three numbers:\n") ;
    printf("4.prime number between a given range .\n");
   printf("5.sum of digits of a given number.\n");
   printf("6.Even and odd number:\n");
   printf("7.Normal and trace of a matrix.\n");
   printf("8.symmetric matrix.\n");
   printf("9.sum of all elements of each row and each column of a given matrix:\n");
   printf("10.Multiplication of two matrix:\n");
   printf("11.palindrome string:\n");
   printf("12.Length of a string:\n");
   printf("13.Upper and lower case conversion.\n");
   printf("14.Exit\n");
    printf ("choice :") ;
    scanf ("%d", & choice) ;
    switch (choice) 
    {
    case 1:
    printf ("Enter x1 & y1:") ;
    scanf ("%f%f", & x, & y) ;
    printf ("\n Enter x2 & y2:") ;
    scanf ("%f%f", & x1, & y1) ;
    m=(y1-y) /(x1-x);
    c=y-m*x;
    printf ("\n Equation of straight line passing through the point (%f & %f) and (%f & %f) :\n Y=%fx+%f", x, y, x1, y1, m, c) ;
    break ;
    case 2:
    s=0;
    d=0;
    printf("Enter the number till zero:");
    scanf("%d",&n);
    while(n>0)
    {
    	s+=n;
    	scanf("%d",&n);
    	d++;
    }
    A=s/d;
    printf("\n Average of numbers are:%f",A);
    break;
    case 3:
    printf("Enter three numbers:");
    scanf("%f%f%f",&x,&y,&z);
    if(x>y)
    {
    	if(x>z)
    	printf("\n %f is greatest number.",x);
    	else printf("\n %f is greatest number.",z);
    }
    else 
    {
    	if(y>z)
    	printf("\n %f is greatest number.",y);
    	else 
    	printf("\n %f is greatest number.",z);
    }
    break;
    case 4:
    printf("Enter the limit :");
    scanf("%d%d",&a,&b);
    printf("\n a=%d\n b=%d",a,b);
    printf("\n Prime numbers between %d and %d are:\n",a,b);
    while(a<b)
    {
    	flag=0;
    	for (i=2;i<=a/2;i++)
    	{
    		if(a%i==0)
    		{
    			flag=1;
    			break;
    		}
    	}
    	if(flag==0)
    printf("\n %3d",a);
    a++;
    }
    break;
    case 5:
    printf("Enter a number :");
    scanf("%d",&a);
    flag=0;
    while(a!=0)
    {
    	b=a%10;
    	flag+=b;
    	a/=10;
    }
    printf("\n Sum of digits of the number is :%d",flag) ;
    break ;
    case 6:
    printf("Enter a number to check even and odd :");
    scanf("%d",&n);
    if(n%2==0)
    printf("\n %d is EVEN number.\n",n);
    else printf("%d is ODD number.",n);
    break;
    case 7:
    printf("\n Enter the order of the matrix.\n");
    scanf("%d%d",&p,&q);
    printf("Enter element of the matrix .\n");
    for (i=0;i<p;i++)
    {
    	for (j=0;j<q;j++)
    	{ 
    	scanf("%d",&z1[i][j]);
    	a1=z1[i][j]*z1[i][j];
    	s1+=a1;
    	}
    }
    n1=sqrt(s1);
    printf("\n The normal of the given matrix is:%d\n",n1);
    for(i=0;i<p;i++)
    {
    	s2+=z1[i][i];
    }
    printf("Trace of the given matrix is:%d\n ",s2);
    break;
    case 8:
    printf("Enter order of matrix:\n");
    scanf("%d%d",&p,&q);
    printf("Enter element of the matrix:\n");
    for(i=0;i<p;i++)
    {
    	for(j=0;j<q;j++)
    	{
    		scanf("%d",&z1[i][j]);
    	}
    }
    for(i=0;i<p;i++)
    {
    	for(j=0;j<q;j++)
    	{
    		z2[i][j]=z1[j][i];
    	}
    }
    k=1;
    for(i=0;i<p&&k;i++)
    {
    	for(j=0;j<q;j++)
    	{
    		if(z1[i][j]!=z2[i][j])
    		{
    			k=0;
    			break;
    		}
    	}
    }
    if (k==1)
    {
    	printf("\n The given matrix is symmetric matrix:\n");
    	for(i=0;i<p;i++)
    	{
    		for(j=0;j<q;j++)
    		{
    			printf("%7d",z1[i][j]);
    		}
    		printf("\n");
    	}
    }
    else
    printf("\n The given matrix is not symmetric matrix:");
    break;
    case 9:
    printf("Enter order of matrix:\n");
    scanf("%d%d",&p,&q);
    printf("Enter element of matrix of order %d * %d :\n",p,q);
    for(i=0;i<p;i++)
    {
    	for(j=0;j<q;j++)
    	{
    		scanf("%d",&z1[i][j]);
    	}
    }
    for(i=0;i<p;i++)
    {
    	s1=0;
    	for(j=0;j<q;j++)
    	{
    		s1+=z1[i][j];
    	}
    	printf("\n sum of all elements of row %d  :  %d\n",i+1,s1);
    }
    for(i=0;i<p;i++)
    {
    	s1=0;
    	for(j=0;j<q;j++)
    	{
    		s1+=z1[j][i];
    	}
    	printf("\n sum of all elements of column %d :  %d\n",i+1,s1);
    }
    break;
    case 10:
    printf("Enter the row and column of first matrix:\n");
    scanf("%d%d",&l,&n);
    printf("Enter the elements of first matrix:\n");
    for(i=0;i<l;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		scanf("%d",&z1[i][j]);
    	}
    }
    printf("Enter the row and columns of second matrix:\n");
    scanf("%d%d",&p,&q);
    if(n!=p)
    printf("Matrices with entered orders can't be multiplied with each other .\n");
    else
    {
    	printf("Enter the elements of second matrix:\n");
    	for(i=0;i<p;i++)
    	{
    		for (j=0;j<q;j++)
    		{
    			scanf("%d",&z2[i][j]);
    		}
    	}
    	for(i=0;i<l;i++)
    	{
    		for(j=0;j<q;j++)
    		{
    			for(k=0;k<p;k++)
    			{
    				s1+=z1[i][k]*z2[k][j];
    			}
    			z3[i][j]=s1;
    			s1=0;
    		}
    	}
    	printf("product of entered Matrices :-\n");
    	for(i=0;i<l;i++)
    	{
    		for(j=0;j<q;j++)
    		{
    			printf("%7d",z3[i][j]);
    		}
    		printf("\n");
    	}
    }
    	break;
    	case 11:
    printf("Enter a string:");
    scanf("%s",&st);
    l=strlen(st);
    flag=0;
    for(i=0;i < l ;i++){
        if(st[i] != st[l-i-1]){
            flag= 1;
            break;
   }
}   
    if (flag) {
        printf("\n%s is not PALINDROME", st);
    }    
    else {
        printf("\n%s is PALINDROME", st);
    }
    	break;
    	case 12:
    	printf("Enter a string to calculate it's length:\n");
    	scanf("%s",&st);
    	printf("_________________________\n");
    	l=strlen(st);
    	printf("Length of (%s):%d",st,l);
    	break;
    	case 13:
    	printf("Enter a string:\n");
    	scanf("%s",st);
    	i=0;
   while (st[i] != '\0') {
      ch = st[i];
      if (ch >= 'A' && ch <= 'Z')
         st[i] = st[i] + 32;
      else if (ch >= 'a' && ch <= 'z')
         st[i] = st[i] - 32;  
      i++;  
   }
    	       	printf("\n %s ",st );
    		break;
        case 14:
        op=1;
        break;
    }
    }
    return 0;
}