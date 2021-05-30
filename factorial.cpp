//factorial using oops concepts.
#include<iostream>
using namespace std;
class factorial_number{
    int i,num,f=1;
    public:
    void input(){
        cout<<"Enter a number=";
        cin>>num;
    }
    void calculate(){
        if(num<=33){
        for(i=1;i<=num;i++){
            f*=i;
        }
        cout<<"Factorial of "<<num<<" is= "<<f<<endl;
        }
        else
        cout<<"Can't find factorial of this number!";
    }
};
int main(){
    factorial_number fact;
    fact.input();
    fact.calculate();
    return 0;
}