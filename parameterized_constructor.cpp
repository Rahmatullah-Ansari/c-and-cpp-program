//parameterized constructor.
#include<iostream>
using namespace std;
class square{
    public:
    int side;
    square(int x){
        side=x;
    }
    void compute(){
        cout<<"Area of square= "<<side*side<<" square unit"<<endl;
    }
};
int main(){
    square s(10);
    s.compute();
    square s1(20);
    s1.compute();
    square s2(30);
    s2.compute();
    square s3(40);
    s3.compute();
    square s4(50);
    s4.compute();
    return 0;
}