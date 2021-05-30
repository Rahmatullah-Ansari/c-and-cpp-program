//constructor.
#include<iostream>
using namespace std;
class constructor{
    public:
    int x;
    constructor();// constructor declared. 
};
constructor::constructor(){
    x=500;
}
int main(){
    constructor cons;
    cout<<"value of x="<<cons.x<<endl;
    return 0;
}
