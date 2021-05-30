//count object.
#include<iostream>
using namespace std;
class Count_object{
    public:
    static int count;
    Count_object(){
        cout<<"Constructor called."<<endl;
        count++;
    }
    ~Count_object(){
        cout<<"Destructor called."<<endl;
    }
};
int Count_object::count=0;
int main(){
Count_object c,d,e,f;
cout<<"Number of object created = "<<Count_object::count<<endl;
}