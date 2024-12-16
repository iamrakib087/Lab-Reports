#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ifstream source("file.txt",ios::in);
    ofstream destination("file2.txt",ios::out|ios::app);
    if(!source.is_open()){
        cout<<"Source file not found"<<endl;
        return 1;
    }
    if(!destination.is_open()){
        cout<<"Unable to open destination file"<<endl;
        return 1;
    }
    destination<<source.rdbuf();
    source.close();
    destination.close();
    return 0;
}
