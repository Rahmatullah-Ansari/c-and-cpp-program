//creating and writing in a file;
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file("Ashi.txt");//creating file.
    file<<"Good morning sister,have a wonderful day,all the best for exam!!";//writing in a file.
    cout<<"file created.";
    file.close();
    return 0;
}