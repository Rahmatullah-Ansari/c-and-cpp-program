//this pointer.
#include<iostream>
using namespace std;
class this_pointer{
    public:
    static void show(){
        cout<<"I am a programmer."<<endl;
    }
};
int main(){
    this_pointer::show();
}