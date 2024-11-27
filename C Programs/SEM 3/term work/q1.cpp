//  WRITE

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream outFile1("output1.txt",ios::binary | ios::out);
   
    outFile1<<"i am manas joshi"<<endl;
    outFile1<<"haalowww";
   

// READ

ifstream inputFile1("output1.txt");
string line;
while(getline(inputFile1, line))
{
cout <<line<<endl;    
}


return(0);
}
