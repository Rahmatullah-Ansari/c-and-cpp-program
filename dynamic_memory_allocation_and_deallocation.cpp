//dynamic memory allocation and deallocation.
#include<iostream>
using namespace std;
int main(){
    int sum=0,num;
    cout<<"Enter size of array:"<<endl;
    cin>>num;
    int *marks=new int[num];//dynamic memory allocation using new operator.
    int i=0;
    cout<<"Enter "<<num<<" element of an array:";
    while(num)
    {
        cin>>*(marks+i);
        sum+=*(marks+i);
        num--;
    }
    cout<<"sum of elements of an array= "<<sum<<endl;
    delete marks;//deallocation of memory using delete operator.
}