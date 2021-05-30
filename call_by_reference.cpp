//swapping of two numbers by call by reference.
#include<iostream>
using namespace std;
int swap(int *,int *);
int main(){
    int a,b;
    cout<<"Enter two numbers:\n";
    cin>>a>>b;
    cout<<"Before swapping:\n a = "<<a<<"\n b = "<<b<<endl;
    swap(&a,&b);
    return 0;
}
int swap(int *x,int *y){
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    cout<<"After swapping:\n a = "<<*x<<"\n b = "<<*y<<endl;
    return 0;
}