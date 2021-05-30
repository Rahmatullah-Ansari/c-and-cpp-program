//wild pointer.
#include<iostream>
using namespace std;
int main(){
    int *pointer;//wild pointer.
    *pointer=12;//assigning value to makes it point to unknown memory location and location become corrupted.
    cout<<*pointer<<endl;
    return 0;
}