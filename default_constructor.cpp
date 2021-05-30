//default constructor.
#include<iostream>
#include<math.h>
using namespace std;
class default_constructor{
    public:
    default_constructor(int num,int e=2){//default constructor.
    cout<<"Power "<<num<<" ^ "<<e<<"= "<<pow(num,e)<<endl;
    }
};
int main(){
    default_constructor dc(8);
    default_constructor d(2,8);
    return 0;
}