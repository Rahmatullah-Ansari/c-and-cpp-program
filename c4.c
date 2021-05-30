#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int c,i,a,b,rev=0, rem, t,op=0;
    float x,y,z, A, m;
    while (op==0){
        printf ("\n\nSelect your operation:\n");
        printf ("1.Addtion \t2.Substraction \t3.multiplication \t4.Division\n");
        printf ("5.square root \t6.x^y\t7.x^2 \t8.x^3\n");
        printf ("9.1/x\t10.x^(1/y) \t11.x^(1/3) \n");
        printf ("12.10^x \t13.x!\t14.percentage\t15.log10(x)\t16.modulus\n");
        printf ("17.sin(x)\t18.cos(x)\t19.tan(x)\t20.cosec(x)\n");
        printf ("21.cot(x)\t22.sec(x)\t23. Palindrome number \n");
        printf ("24.pythagorean triplet\t25.Reverse number\n") ;
        printf ("26.Fibonacci series.\t27. Even and Odd number \n");
        printf ("28.Area of triangle whose sides are a, b, c:\n") ;
        printf("29.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            printf("Enter X and Y:");
            scanf("%f%f",&x,&y);
              z=x+y;
              printf("\nsum of %.2f and %.2f are:%.2f",x,y,z);
              break;
                case 2:
            printf("Enter X and Y:");
            scanf("%f%f",&x,&y);
              z=x-y;
              printf("\nsubstractionof %.2f and %.2f are:%.2f",x,y,z);
              break;
                case 3:
            printf("Enter X and Y:");
            scanf("%f%f",&x,&y);
              z=x*y;
              printf("\nmultiplication of %.2f and %.2f are:%.2f",x,y,z);
              break;
                case 4:
            printf("Enter X and Y:");
            scanf("%f%f",&x,&y);
              z=x/y;
              printf("\ndivisionof %.2f and %.2f are:%.2f",x,y,z);
              break;
              case 5:
              printf("Enter X:");
              scanf("%f",&x);
              z=sqrt(x);
              printf("\nsquare root of %.2f is:%.2f",x,z);
              break;
                case 6:
            printf("Enter X and Y:");
            scanf("%f%f",&x,&y);
              z=pow(x,y);
              printf("\npower of (%.2f ^ %.2f) are:%.2f",x,y,z);
              break;
              case 7:
              printf("Enter X:");
              scanf("%f",&x);
              z=pow(x,2);
              printf("\n squre of(%.2f^2) is:%.2f",x,z);
              break;
                   case 8:
              printf("Enter X:");
              scanf("%f",&x);
              z=pow(x,3);
              printf("\n cube of(%.2f^3) is:%.2f",x,z);
              break;
                   case 9:
              printf("Enter X:");
              scanf("%f",&x);
              z=pow(x,-1);
              printf("\n inverse of(%.2f^-1) is:%.2f",x,z);
              break;
              case 10:
              printf("Enter X and Y:");
              scanf("%f%f",&x,&y);
              z=pow(x,(1/y));
              printf("\n %f root of %.2f is:%.2f",y,x,z);
              break;
              case 11:
              printf("Enter X:");
              scanf("%f",&x);
              y=3;
              z=pow(x,(1/y));
              printf("\n cubic root of %.2f is:%.2f",x,z);
              break;
              case 12:
              printf("Enter X:");
              scanf("%f",&x);
              z=pow(10,x);
              printf("\n (10^%.2f) is:%.2f",x,z);
              break;
              case 13:
              printf("Enter X:");
              scanf("%f",&x);
              z=1;
              for(i=1;i<=x;i++)
              {
                  z*=i;
              }
              printf("\n Factorial of %.2f is:%.2f",x,z);
              break;
              case 14:
              printf("Enter X and Y:");
              scanf("%f%f",&x,&y);
              z=(x*y)/100;
              printf("\npercentage is:%.2f",z);
              break;
              case 15:
              printf("Enter X:");
              scanf("%f",&x);
              z=log10(x);
              printf("\n log of %.2f is:%.2f",x,z);
              break;
              case 16:
              printf("Enter X and Y:");
              scanf("%d%d",&a,&b);
              z=a%b;
              printf("\n modulus division of %d and %d is:%d",a,b,z);
              break;
              case 17: 
              printf("Enter X:");
              scanf("%f",&x);
              z=sin(x*3.14159/180);
              printf("sin(%.2f):%.2f",x,z);
              break;
                  case 18: 
              printf("Enter X:");
              scanf("%f",&x);
              z=cos(x*3.14159/180);
              printf("cos(%.2f):%.2f",x,z);
              break;
                  case 19:
              printf("Enter X:");
              scanf("%f",&x);
              z=tan(x*3.14159/180);
              printf("tan(%.2f):%.2f",x,z);
              break;
                  case 20:
              printf("Enter X:");
              scanf("%f",&x);
              z=1/(sin(x*3.14159/180));
              printf("cosec(%.2f):%.2f",x,z);
              break;
                  case 21:
              printf("Enter X:");
              scanf("%f",&x);
              z=1/(tan(x*3.14159/180));
              printf("cot(%.2f):%.2f",x,z);
              break;
                  case 22: 
              printf("Enter X:");
              scanf("%f",&x);
              z=1/(cos(x*3.14159/180));
              printf("sec(%.2f):%.2f",x,z);
              break;
              case 23:
              printf ("Enter a number :") ;
              scanf ("%d", & a) ;
              t=a;
              while(a!=0)
              {
                  rem=a%10;
                  rev=rev*10+rem;
                  a/=10;
              }
              if(t==rev) 
              {
              printf ("\n%d is palindrome number", t) ;
              }
              else
              {
              printf ("\n%d is not palindrome number", t) ;
              }
              break ;
              case 24:
              printf ("Enter three integers a, b and c:") ;
              scanf ("%d%d%d", & a, & b, & c) ;
              if(c*c==a*a+b*b) 
              {
              printf ("%d, %d and %d are form pythagorean triplet", a, b, c) ;
              }
              else 
              {
              printf ("%d, %d and %d are not form pythagorean triple", a, b,c) ;
              }
              break;
              case 25:
              printf ("Enter a number to reverse :") ;
              scanf ("%d", & a) ;
              if(a>0)
              {
              while(a)
              {
                  rem=a%10;
                  rev=rev*10+rem;
                  a/=10;
              }
              printf("Reverse of the number is:%d",rev);
              break;
              }
              else
              {
              a=a*(-1);
                   while(a)
              {
                  rem=a%10;
                  rev=rev*10+rem;
                  a/=10;
              }
              }
              printf ("\n Reverse of the number is:%d", (-rev) );
              break;
              case 26:
              printf ("Enter number of terms to generate fibonacci series :\n") ;
              scanf("%d", & a) ;
              c=0;
              b=1;
                printf("Fibonacci Series:\n ");
    for (i = 1; i <= a; ++i) {
        printf("\n%d", c);
        t= c + b;
        c= b;
        b= t;
    }
    break ;
    case 27:
    printf ("Enter a number to check even or odd:") ;
    scanf ("%d", & a) ;
    if(a%2==0)
    {
        printf ("\n%d is Even number", a) ;} 
        else
        {
            printf ("\n%d is Odd number", a) ;
        }
        break ;
        case 28:
        printf ("Enter three sides of triangle ie. a, b and c:\n") ;
        scanf("%f%f%f", & x, & y, & z) ;
        m=(x+y+z)/2;
        A=sqrt(m*(m-x) *(m-y) *(m-z));
        printf ("Area of triangle whose sides are %.2f, %.2f and %.2f is=%.2f square unit", x, y, z, A) ;
        break;
        case 29:
        op=1;
        break;
        default:
            printf("\n INVALID INPUT!");
        }
    }
        return 0;
}