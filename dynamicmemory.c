#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
	int* pt; 
	int num, i; 
	num = 5; 
	printf("Enter %d elements:\n",num); 
	// Dynamically allocate memory using malloc() 
	pt= (int*)malloc(num * sizeof(int)); 
	// Check if the memory has been successfully 
	// allocated by malloc or not 
	if (pt == NULL) { 
		printf("Memory not allocated.\n"); 
		exit(0); 
	} 
	else { 
		printf("Memory successfully allocated using malloc.\n");
		for (i = 0; i < num; ++i) { 
			printf("Enter pt[%d]=\n",i);
            scanf("%d",&pt[i]);
		} 
		printf("\nThe elements of the array are:\n"); 
		for (i = 0; i < num; ++i) { 
			printf("pt[%d]=%d\n",i,pt[i]); 
		} 
	} free(pt);
    printf("Enter %d elements:\n",num); 
	// Dynamically allocate memory using calloc() 
	pt= (int*)calloc(num,sizeof(int)); 
	// Check if the memory has been successfully 
	// allocated by calloc or not 
	if (pt == NULL) { 
		printf("Memory not allocated.\n"); 
		exit(0); 
	} 
	else { 
		printf("Memory successfully allocated using calloc.\n");
		for (i = 0; i < num; ++i) { 
			printf("Enter pt[%d]=\n",i);
            scanf("%d",&pt[i]);
		} 
		printf("\nThe elements of the array are:\n"); 
		for (i = 0; i < num; ++i) { 
			printf("pt[%d]=%d\n",i,pt[i]); 
		} 
	}
    num=7;
    printf("Enter %d elements:\n",num); 
	// Dynamically reallocate memory using realloc() 
	pt=realloc(pt,num*sizeof(int));
	// Check if the memory has been successfully 
	// reallocated by realloc or not 
	if (pt == NULL) { 
		printf("Memory not reallocated.\n"); 
		exit(0); 
	} 
	else { 
		printf("Memory successfully reallocated using realloc.\n");
		for (i = 0; i < num; ++i) { 
			printf("Enter pt[%d]=\n",i);
            scanf("%d",&pt[i]);
		} 
		printf("\nThe elements of the array are:\n"); 
		for (i = 0; i < num; ++i) { 
			printf("pt[%d]=%d\n",i,pt[i]); 
		} 
	}
    free(pt);
	return 0; 
} 
