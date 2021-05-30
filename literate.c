/*In a town the percentage of men is 52.The
percentage of total literacy is 48.if the total 
percentage of literate men is 35 at the total population
,write a program to find the total number of illiterate
men and women if the population of the town is 
80000*/
#include<stdio.h>
#include<conio.h>
int main(){
    int tpop=80000, tpopmen, tpopwomen, tpoplit, tpoilit, tlitmen, tilitmen, tlitwomen,tilitwomen;
    //population of men
    tpopmen = (52 * tpop) / 100;
    //population of women
    tpopwomen = tpop - tpopmen;
    //literate population
    tpoplit = (48 * tpop) / 100;
    //literate population of men
    tlitmen = (35 * tpop) / 100;
    //literate population of women
    tlitwomen = tpoplit - tlitmen;
    //iliterate population of men
    tilitmen = tpopmen - tlitmen;
    //iliterate population of women
    tilitwomen = tpopwomen - tlitwomen;
    printf("Total population of the town     =%d\n",tpop);
    printf("Total population of men          =%d\n",tpopmen);
    printf("Total population of women        =%d\n",tpopwomen);
    printf("Literate population of men       =%d\n",tlitmen);
    printf("Literate population of women     =%d\n",tlitwomen);
    printf("Illiterate population of men     =%d\n",tilitmen);
    printf("Illiterate population of women   =%d\n",tilitwomen);
    return 0;
}