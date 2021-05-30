#include <stdio.h>
long find(int x)
{
    int i;
    long r = 1;
    for( i = 1 ; i <= x ; i++ )
        r *= i;
    return (r);
}
int main()
{
    int i, j, k;
    printf("Enter number of row:\n");
    scanf("%d",&j);
    for ( i = 0 ; i < j ; i++ )
    {
        for ( k = 0 ; k <= ( j - i - 2 ) ; k++ )
            printf(" ");
        for( k = 0 ; k <= i ; k++ )
            printf("%ld ",find(i)/(find(k)*find(i-k)));
        printf("\n");
    }
    return 0;
}