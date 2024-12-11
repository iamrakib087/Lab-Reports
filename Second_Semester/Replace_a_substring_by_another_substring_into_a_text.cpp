#include<iostream>
#include<string>
using namespace std;
int main(){
string text, pattern, pattern2;
cout<<"Enter the text:";
getline(cin,text);
cout<<"Enter the pattern:";
getline(cin,pattern);
cout<<"Enter the 2nd pattern:";
getline(cin,pattern2);
int k = text.find(pattern);
int y = pattern.length();
while(k!=string::npos){
    text.replace(k,y,pattern2);
    k = text.find(pattern);
}
cout<<endl<<text<<endl;
return 0;
}
