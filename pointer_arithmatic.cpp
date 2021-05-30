//pointer arithmatic.
#include<iostream>
using namespace std;
int main(){
    int i,num,array[50],*pointer;
    cout<<"Enter size of aaray:"<<endl;
    cin>>num;
    cout<<"Enter "<<num<<" elements in array:"<<endl;
    i=0;
    while(i<num)
    {
        cin>>array[i];
        i++;
    }
    pointer=array;
    cout<<"value of pointer= "<<*pointer<<endl;
    cout<<"address of pointer= "<<&pointer<<endl;
    pointer+=1;
    cout<<"value of pointer= "<<*pointer<<endl;
    cout<<"address of pointer= "<<&pointer<<endl;
    pointer-=1;
    cout<<"value of pointer= "<<*pointer<<endl;
    cout<<"address of pointer= "<<&pointer<<endl;
    pointer+=2;
    cout<<"value of pointer= "<<*pointer<<endl;
    cout<<"address of pointer= "<<&pointer<<endl;
    pointer-=3;
    cout<<"value of pointer= "<<*pointer<<endl;
    cout<<"address of pointer= "<<&pointer<<endl;
}