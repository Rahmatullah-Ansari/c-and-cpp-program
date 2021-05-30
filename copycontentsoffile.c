#include <stdio.h> 
#include <stdlib.h>
int main() 
{ 
	FILE *f1, *f2; 
	char file[100],c; 
	printf("Enter first filename:\n"); 
	scanf("%s",&file); 
	f1 = fopen(file, "r"); 
	if(f1 == NULL) 
	{ 
		printf("Can't open file %s.\n",file); 
		exit(0); 
	} 
	printf("Enter second filename:\n"); 
	scanf("%s",&file); 
	f2 = fopen(file, "w"); 
	if(f2 == NULL) 
	{ 
		printf("Can't open file %s.\n",file); 
		exit(0); 
	}
	c = fgetc(f1); 
	while (c != EOF) 
	{ 
		fputc(c,f2); 
		c = fgetc(f1); 
	} 
	printf("Contents copied to %s.",file); 
	fclose(f1); 
	fclose(f2); 
	return 0; 
}
