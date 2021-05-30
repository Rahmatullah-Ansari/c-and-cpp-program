//implicit and explicit calling a constructor.
#include<iostream>
#include<math.h>
using namespace std;
class construct{
    public:
    construct(int num,int power){
        cout<<"power "<<num<<" ^ "<<power<<" = "<<pow(num,power)<<endl;
    }
};
int main(){
    construct c(2,8);//implicit constructor calling.
    construct d=construct(8,3);//explicit constructor calling.
    return 0;
}