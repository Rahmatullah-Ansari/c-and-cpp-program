#include <stdio.h> 
#include <stdlib.h>
int main() 
{ 
	FILE *f1, *f2,*f3;
	char file[100],c,d,fi[100]; 
	printf("Enter first filename:\n"); 
	scanf("%s",&file); 
	f1 = fopen(file, "r"); 
	if(f1 == NULL) 
	{ 
		printf("Can't open file %s.\n",file); 
		exit(0); 
	} 
	printf("Enter second filename:\n"); 
	scanf("%s",&fi);
	f2 = fopen(fi,"a"); 
	if(f2 == NULL) 
	{ 
		printf("Can't open file %s.\n",fi); 
		exit(0); 
	}
	c = fgetc(f1); 
	while (c != EOF) 
	{ 
		fputc(c,f2); 
		c = fgetc(f1); 
	}
	printf("Contents copied to %s.",fi); 
	fclose(f1); 
	fclose(f2);
    printf("\nEnter third filename:\n"); 
	scanf("%s",&file); 
	f3 = fopen(file, "w"); 
	if(f3 == NULL) 
	{ 
		printf("Can't open file %s.\n",file); 
		exit(0); 
	}
    f2=fopen(fi,"r");
    d=fgetc(f2);
    while (d != EOF) 
	{ 
		fputc(d,f3); 
		d = fgetc(f2); 
	}
    printf("Contents are save in %s.\n",file);
    fclose(f3);
	return 0; 
}
