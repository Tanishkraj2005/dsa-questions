#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file("output.txt");
    if(file.is_open()){
        cout<<"File opened successfully"<<endl;
        file<<"Hello world"<<endl;
        file<<"Programming is fun"<<endl;
    }
    else{
        cout<<"File not opened";
    }
    file.close();
}