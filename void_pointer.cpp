//void pointer.
#include<iostream>
using namespace std;
int main(){
    int x=50;
    char y= 'A';
    void *pointer =&x;//void pinter.
    pointer=&y;
    cout<<"Address of x = "<<pointer<<endl<<"Address of y= "<<pointer<<endl;
    return 0;
}