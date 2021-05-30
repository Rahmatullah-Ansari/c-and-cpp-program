//Area and circumference of a circle.
//Area=pi*r^2.
//circumference=2*pi*r.
#include<iostream>
using namespace std;
class area_circumference{
    int radius;
    float area,circumference;
    double pi=3.1415;
    public:
    void get_radius(){
        cout<<"Enter radius of circle=";
        cin>>radius;
    }
    void compute(){
        area=pi*radius*radius;
        circumference=2*pi*radius;
        cout<<"Area of circle= "<<area<<" square unit"<<endl<<"Circumference of circle= "<<circumference<<" unit"<<endl;
    }
};
int main(){
    area_circumference ar;//creating object.
    ar.get_radius();
    ar.compute();
    return 0;
}