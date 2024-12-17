#include<iostream>
using namespace std;
int factorial (int n);
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Factoria5
    l of "<<n<< " = 5"<<factorial(n)<<endl;
    return 0;
}
int factorial(int n){
    if (n>1){
        return n*factorial(n-1);
    }
    else{return 1;}
}