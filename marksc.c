#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(int argc,char*argv[]){
    if(argc != 4)
    printf("Please enter number again!");
    else
    printf("Percentage = %d",((atoi(argv[1])+atoi(argv[2])+atoi(argv[3]))*100)/300);
    return 0;
}