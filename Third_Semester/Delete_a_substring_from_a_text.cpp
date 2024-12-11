#include<iostream>
#include<string>
using namespace std;
int main(){
string text,pattern,pattern2;
cout<<"Enter the text: ";
getline(cin,text);
cout<<"Enter the pattern: ";
getline(cin,pattern);
int k = text.find(pattern);
int y = pattern.length();
while(k!=string::npos){
    text.erase(k,y);
    k = text.find(pattern);
}
cout<<endl<<text<<endl;
return 0;
}
