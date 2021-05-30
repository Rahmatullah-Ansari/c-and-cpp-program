//count character in text file;
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main () 
{
string word;
const string filenme="Ashi.txt";
ifstream file(filenme); 
int c;
int count=0;
if (file.is_open()) 
{

     while(getline(file,word)){
         for(int i=0;i<word.length();i++){
         cout<<word[i]<<" ";
         count++;
         }
              c++;
  }
  cout<<"\nNumber of character in text file = "<<count<<endl;
    }
    file.close();
   return 0;
}