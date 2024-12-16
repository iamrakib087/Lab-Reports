#include<bits/stdc++.h>
using namespace std;
class prime{
    int num;
public:
    prime(int i=0) : num(i){}
    void check_prime(){
        cout<<"Enter the number: ";
        cin>>num;
        if (num<=1){
            cout<<"The given number is not prime.\n";
            return;
        }
        for(int i=2; i<=sqrt(num); i++){
            if(num%i ==0){
                cout<<"The given number is not prime.\n";
                return;
            }
        }
        cout<<"The given number is prime.\n";
    }
};
int main(){
    prime obj;
    obj.check_prime();
return 0;
}

