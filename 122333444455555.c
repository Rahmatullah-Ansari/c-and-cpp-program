#include<stdio.h>
#include<conio.h>
int main() {
	int i,j,k,l=0;
	for (i=1; i<=5; i++) {
		for (k=l; k<5; k++) {
			printf(" ");
		}
		for (j=0; j< i; j++) {
			printf("%2d",i);
		}
        l++;
		printf("\n");
	}
	return 0;
}