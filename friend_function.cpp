//friend function.
#include<iostream>
using namespace std;
class second;
class first{
    int a,b,c;
    public:
    first(){
        cout<<"Enter three numbers= "<<endl;
        cin>>a>>b>>c;
    }
    friend void compare(first);//declaration of friend function. 
};
void compare(first f){//definition of friend function.
    if(f.a>f.b){
        if(f.a>f.c)
        cout<<f.a<<" is greatest."<<endl;
        else
        cout<<f.c<<" is greatest."<<endl;
    }
    else if(f.b>f.c)
    cout<<f.b<<" is greatest."<<endl;
    else
    cout<<f.c<<" is greatest."<<endl;
}
int main(){
    first f;//creating object.
    compare(f);//calling friend function.
    return 0;
}

