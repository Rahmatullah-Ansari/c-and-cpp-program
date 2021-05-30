#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main( )
{
	long int i=0,q,b,h=0;
	char bin[40]=" ",hex[20],s[200],r[200];
	char binnum[100], hexdec[100];
	int choice,ch,j,l,dec,oct,rem,t,p,f,op=0,
	a[200],n[20],c[20],rev[20],x,flag,k,num1,num3,min,max;
	int c1,c3;
	float rem1,num2,num4,d,k1,c2,f1,dis,x1,x2,rl,im,a1,b1,c4,a2,b2,c5,c6,x3,y2;
	while(op==0){
	printf("\n\n1.Code convertor.\t2.Reverse string.\n");
	printf("3.Temperature convertor.\t4.Geometry.\n");
	printf("5.Area of triangle.\t6.Area of circle.\n");
	printf("7.Area of sector of a circle.\n");
	printf("8.Area of polygon.\t9.Area and volume of sphere.\n");
	printf("10.Volume and Area of cylinder.\n");
	printf("11.Volume and Area of Cone.\n");
	printf("12.Volume of pyramid.\n");
	printf("13.Armstrong Number.\n");
	printf("14.Minimum and maximum in an array.\n");
	printf("15.Swapping of two number.\n");
	printf("16.Swapping without using third variable.\n");
	printf("17.Volume and Area of cuboid.\n");
	printf("18.Exit\n");
	printf("Enter your choice:\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		printf("1.Hexadecimal to binary:\t2.Hexadecimal to octal.\n");printf("3.Hexadecimal to decimal number.\n");
		printf("4.Decimal to hexadecimal.\n");
		printf("5.Binary to hexadecimal.\n");
		printf("6.Octal to hexadecimal.\n");
		printf("Enter your choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
	printf("Enter any hexadecimal number : ");
	scanf("%s",hexdec);
	printf("\nEquivalent Binary value is : ");
	while(hexdec[i])
	{
		switch(hexdec[i])
		{
			case '0' : printf("0000");
				break;
			case '1' : printf("0001");
				break;
			case '2' : printf("0010");
				break;
			case '3' : printf("0011");
				break;
			case '4' : printf("0100");
				break;
			case '5' : printf("0101");
				break;
			case '6' : printf("0110");
				break;
			case '7' : printf("0111");
				break;
			case '8' : printf("1000");
				break;
			case '9' : printf("1001");
				break;
			case 'A' : printf("1010");
				break;
			case 'B' : printf("1011");
				break;
			case 'C' : printf("1100");
				break;
			case 'D' : printf("1101");
				break;
			case 'E' : printf("1110");
				break;
			case 'F' : printf("1111");
				break;
			case 'a' : printf("1010");
				break;
			case 'b' : printf("1011");
				break;
			case 'c' : printf("1100");
				break;
			case 'd' : printf("1101");
				break;
			case 'e' : printf("1110");
				break;
			case 'f' : printf("1111");
				break;
			default : printf("\nInvalid hexadecimal digit %c",hexdec[i]);
		}
		i++;
	}
	break;
	case 2:
	printf("Enter a hexadecimal number:\n");
	scanf("%s",&hex);
	dec=0;
	oct=0;
	for(l=0;hex[l] !='\0'; l++);
	{
	for(i=0;hex[j] !='\0'; j++,l--)
	{
		if(hex[j]>='0' && hex[j]<= '9' )
		{
			dec=dec+(hex[j]- '0' )*pow(16,l-1);
		}
		if(hex[j]>= 'A'&& hex[j]<= 'F' )
		{
			dec=dec+(hex[j]-55)*pow(16,l-1);
		}
		if(hex[j]>= 'a' && hex[j]<= 'f')
		{
			dec=dec+(hex[j]-87)*pow(16,l-1);
		}
	}
	}
	j=1;
	while(dec !=0)
	{
		oct=oct+(dec%8)*j;
		dec=dec/8;
		j=j*10;
	}
	printf("Equivalent octal of given hexadecimal number is:%d",oct);
	break;
	case 3:
	printf("Enter a hexadecimal number:\n");
	scanf("%s",&hex);
	dec=0;
	l=0;
	j=0;
	while(hex[j] !='\0')
	{
		l++;
		j++;
	}
	l--;
	j=0;
	while(l>=0)
	{
		rem=hex[l];
		if(rem>=48 && rem<=57)
		rem-=48;
		else if(rem>=65 && rem<=90)
		rem-=55;
		else
		{
			printf("\n Invalid hexadecimal digits entered");
			break;
		}
		dec=dec+(rem*pow(16,j));
		l--;
		j++;
	}
	printf("\n Equivalent Decimal value is:%d",dec);
		break;
		case 4:
		printf("Enter a decimal number:\t");
		scanf("%d",&dec);
		j=0;
		q=dec;
		while(q !=0)
		{
			rem=q%16;
			if(rem<10)
			hex[j++]=48+rem;
			else
			hex[j++]=55+rem;
			q=q/16;
		}
		for(l=j-1;l>=0;l--)
		printf("%c",hex[l]);
		break;
		case 5:
		printf("Enter a binary number:\n");
		scanf("%ld",&b);
		j=1;
		while(b!=0)
		{
			rem=b%10;
			h=h+rem*j;
			j*=2;
			b=b/10;
		}
		printf("Equivalent Hexadecimal:%lX",h);
		break;
		case 6:
		
		    printf("ENTER THE OCTAL NUMBER : ");
    scanf("%s",s);
    x=f=flag=rem=0;
    rem1=0.0;
    for(p=0,j=0,k=0;p<strlen(s);p++)
    {
        if(s[p]=='.')
        {
            flag=1;
        }
        else if(flag==0)
            a[j++]=s[p]-48;
        else if(flag==1)
            n[k++]=s[p]-48;
    }
    x=j;
    f=k;
    for(j=0,p=x-1;j<x;j++,p--)
    {
        rem = rem +(a[j] * pow(8,p));
    }
    for(k=0,p=1;k<f;k++,p++)
    {
        rem1 = rem1 +(n[k] / pow(8,p));
    }
    rem1=rem+rem1;
    d=rem1;
    num1=(int)d;
    num2=d-num1;

    p=0;
    while(num1!=0)
    {
        rem=num1 % 16;
        rev[p] = rem;
        num1=num1 /16;
        p++;
    }
    j=0;
    while(num2!=0.0)
    {
        num2=num2 * 16;
        num3=(int)num2;
        num4=num2-num3;
        num2=num4;
        a[j]=num3;
        j++;
        if(j==4)
        {
            break;
        }
    }
    l=p;
    printf("\nTHE HEXADECIMAL VALUE OF GIVEN OCTAL NO IS : ");
    for(p=l-1;p>=0;p--)
    {
        if(rev[p]==10)
           printf("A");
        else if(rev[p]==11)
           printf("B");
        else if(rev[p]==12)
           printf("C");
        else if(rev[p]==13)
           printf("D");
        else if(rev[p]==14)
           printf("E");
        else if(rev[p]==15)
           printf("F");
        else
        printf("%d",rev[p]);
    }
    t=j;
    printf(".");
    for(k=0;k<t;k++)
    {
        if(a[k]==10)
           printf("A");
        else if(a[k]==11)
           printf("B");
        else if(a[k]==12)
           printf("C");
        else if(a[k]==13)
           printf("D");
        else if(a[k]==14)
           printf("E");
        else if(a[k]==15)
           printf("F");
        else
        printf("%d",a[k]);
    }
    break;
		}
		break;
		case 2:
		printf("Enter any string:\n");
		scanf("%s",&s);
		x=0;
		while(s[x]!= '\0')
		x++;
		k=x-1;
		for(j=0;j<x;j++)
		{
			r[j]=s[k];
			k--;
		}
		r[j]='\0';
		printf("\n Reverse of (%s) is:\t%s",s,r);
		break;
		case 3:
		printf("1. Fahrenheit to celcius:\t2.Celcius to fahrenheit.\n");
		printf("3.Kelvin to celcius.\t4.Celcius to kelvin.\n");
		printf("choice:\n");
		scanf("%d",&c1);
		switch(c1)
		{
			case 1:
			printf("Enter temperature in fahrenheit:\n");
			scanf("%f",&f1);
			c2=f1-(32*0.55);
			printf("\n %f in fahrenheit =%f in Celsius",f1,c2);
			break;
			case 2:
			printf("Enter temperature in Celsius:\n");
			scanf("%f",&c2);
			f1=c2+(32*0.55);
			printf("\n %f in Celsius=%f in fahrenheit.\n",c2,f1);
			break;
			case 3:
			printf("\n Enter temperature in kelvin:\n");
			scanf("%f",&k1);
			c2=(k1-273.15);
			printf("\n %f in kelvin=%f in Celsius.",k1,c2);
			break;
			case 4:
			printf("\n Enter temperature in celcius:\n");
			scanf("%f",&c2);
			k1=(c2+273.15);
			printf("\n %f in Celsius=%f in kelvin.",c2,k1);
			break;
		}
		break;
		case 4:
		printf("1.Roots of quadratic equation.\t2.Linear equation.\n");
		printf("3.Distance between two point.\n");
		printf("Enter choice:\n");
		scanf("%d",&c3);
		switch(c3)
		{
			case 1:
			printf("\n Enter the value of a,b and c:\n");
			scanf("%f%f%f",&a1,&b1,&c4);
			  dis= b1* b1 - 4 * a1 * c4;
    if (dis > 0) {
        x1= (-b1 + sqrt(dis)) / (2 * a1);
        x2= (-b1 - sqrt(dis)) / (2 * a1);
        printf("root1 = %.2f and root2 = %.2f", x1,x2);
    }
    else if (dis== 0) {
        x1= x2 = -b1 / (2 * a1);
        printf("root1 = root2 = %.2f;", x1);
    }
    else {
        rl = -b1 / (2 * a1);
        im= sqrt(-dis) / (2 * a1);
        printf("root1 = %.2f+%.2fi and root2 = %.2f-%.2fi",rl, im, rl, im);
    }
			break;
			case 2:
			printf("Enter the value of (a1,b1) , (a2,b2) and (c1,c2):\n");
			scanf("%f%f%f%f%f%f",&a1,&b1,&a2,&b2,&c5,&c6);
			x3=(c5*b2-c6*b1)/(a1*b2-a2*b1);
			y2=(a1*c6-a2*c5)/(a1*b2-a2*b1);
			printf("Value of X and Y in the equation:\n %fx+%fy=%f \n %fx+%fy=%f\n is:\nX=%f\nY=%f",a1,b1,c5,a2,b2,c6,x3,y2);
			break;
			case 3:			
			printf("Enter X and Y coordinates of first point:\n");
	scanf("%f %f",&a1,&b1);
	printf("Enter X and Y coordinates of Second point:\n");
	scanf("%f %f",&a2,&b2);

	c6=a2-a1;
	y2=b2-b1;
	x3=sqrt((c6*c6)+(y2*y2)); 
	printf("Distance between the points is: %.2f",x3);
			break;
		}
		break;
		case 5:
	printf("\n Enter height and three sides (a,b&c)of triangle:\n");
	scanf("%f%f%f%f",&b1,&a1,&b2,&c4);
	if(b1 !=0)
	{
		x3=(b1*b2)/2;
		printf("Area of trangle is:%f square unit",x3);}
		else
		{
			c6=(a1+b2+c4)/2;
		y2=c6*(c6-a1)*(c6-b2)*(c6-c4);
		x3=sqrt(y2);
			printf("\n Area of trangle is :%f square unit",x3);
		}
		break;
		case 6:
		printf("Enter radius or diameter of circle :\n");
		scanf("%f%f",&b1,&b2);
		if(b1 !=0)
		{
			c6=6.28*b1;
			x3=3.14*b1*b1;
			printf("Perimeter of circle:%f unit",c6);
			printf("\n Area of circle:%f square unit",x3);
		}
		else
		{
			c6=3.14*b2;
			x3=0.785*b2*b2;
			printf("Perimeter of circle:%f unit ",c6);
			printf("\n Area of circle:%f square unit ",x3);
		}
		break;
		case 7:
		printf("Enter the radius and angle of the sector:\n");
		scanf("%f%f",&b1,&a1);
		c6=(3.14*b1*b1*a1)/360;
		x3=(c6*2)/b1;
		printf(" Area of sector is:%f square unit ",c6);
		printf("\n Side of sector is:%f unit ",x3);
		break;
		case 8:
		printf("Enter the radius ,side and number of sides of the polygon:\n");
		scanf("%f%f%f",&a1,&b1,&b2);
		if(a1==0)
		{
			x3=(b1*b1*b2)/(4*tan((180/b2)*(3.14/180)));
			printf("\n Area of polygon is:%.2f square unit ",x3);
		}
		if(b1==0)
		{
			x3=(a1*a1*b2*sin(((360/b2)/2)*(3.14/180)));
			printf("\n Area of polygon:%f square unit ",x3);
		}
			break;
			case 9:
			printf("\n Enter the radius of the sphere:\n");
			scanf("%f",&a1);
			b1=1.333*3.14159*a1*a1*a1;
			b2=4*3.14159*a1*a1;
	printf("\n Volume of sphere:%f cubic unit  \n Area of sphere:%f square unit ",b1,b2);
	break;
	case 10:
	printf("Enter radius and height of cylinder:\n");
	scanf("%f%f",&a1,&a2);
	x3=3.14159*a1*a1*a2;
	y2=2*3.14159*a1*a2;
	printf("\n Volume of cylinder:%f cubic unit  \n Area of cylinder:%f square unit",x3,y2);
	break;
	case 11:
	printf("Enter the radius and height of Cone:\n");
	scanf("%f%f",&a1,&b1);
	c6=(3.14159*a1*a1*b1)/3;
	y2=sqrt(b1*b1+a1*a1);
	x3=3.14159*a1*y2;
	printf("\n Volume of Cone is:%f cubic unit \n Area of Cone is:%f square unit",c6,x3);
	break;
	case 12:
	printf("Enter the base area and height of the pyramid:\n");
	scanf("%f%f",&a1,&b1);
	x3=(a1*b1)/3;
	printf("\n Volume of pyramid V=%f cubic unit",x3);
	break;
	case 13:
	printf("\n Enter a number to check Armstrong:\n");
	scanf("%d",&x);
	t=0;
	p=x;
	while(x>0)
	{
		f=x%10;
		t=t+f*f*f;
		x/=10;
	}
	if(p==t)
	printf("\n %d is an ARMSTRONG NUMBER.",p);
	else
	printf("\n %d is not an ARMSTRONG NUMBER.",p);
	break;
	case 14:
	 printf("Enter size of the array : ");
    scanf("%d",&num1);
 
    printf("\nEnter elements in array : ");
    for(j=0; j<num1; j++)
    {
        scanf("%d",&a[j]);
    }
 
    min=max=a[0];
    for(j=1; j<num1; j++)
    {
         if(min>a[j])
		  min=a[j];   
		   if(max<a[j])
		    max=a[j];       
    }
     printf("\nminimum of array is : %d",min);
          printf("\nmaximum of array is : %d",max);
          break;
          case 15:
             printf ("Enter a&b:\n ");
   scanf ("%d%d",&j,&k);
   l=j;
   j=k;
   k=l;
   printf ("\n a=%d \n b=%d",j,k);
   break;
   case 16:
    printf ("Enter a&b:\n");
   scanf ("%d%d",&j,&k);
   j=j+k;
   k=j-k;
   j=j-k;
   printf ("\n a=%d \n b=%d",j,k);
   break;
   case 17:
   printf("Enter the value of a,b and c:\n");
   scanf("%f%f%f",&a1,&a2,&b1);
   x3=2*(a1*a2+a2*b1+b1*a1);
   c6=a1*a2*b1;
   printf("\n Volume V=%f cubic unit.\n Area A=%f square unit.",x3,c6);
   break;
   case 18:
   op=1;
   break;
		}
	}
	return 0;
}