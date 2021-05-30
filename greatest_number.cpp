//greatest amoung three numbers.
#include<iostream>
using namespace std;
class greatest{
    int x,y,z;
    public:
    void input(){
        cout<<"Enter three numbers=";
        cin>>x>>y>>z;
    }
    void compare(){
        if(x>y){
            if(x>z){
                cout<<x<<" is greatest number."<<endl;
            }
            else
            cout<<z<<" is greatest number."<<endl;
        }
        else if(y>z){
            cout<<y<<" is greatest number."<<endl;
        }
        else
        cout<<z<<" is greatest number."<<endl;
    }
};
int main(){
    greatest gr;
    gr.input();
    gr.compare();
    return 0;
}