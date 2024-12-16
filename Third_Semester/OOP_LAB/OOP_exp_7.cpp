#include <iostream>
using namespace std;
class B;
class A{
    public:
    int a;
    A(int x) : a(x){}
    friend int maximum(A,B);
    friend int minimum(A,B);
};
class B{
    public:
    int b;
    B(int y) : b(y){}
    friend int maximum(A,B);
    friend int minimum(A,B);
};
int maximum(A objA,B objB){
    int large = max (objA.a , objB.b);
    return large;
}
int minimum(A objA,B objB){
    int small = min (objA.a , objB.b);
    return small;
}
int main(){
    int a,b;
    cin >> a >> b;
    A objA(a); B objB(b);
    cout << "Maximum: " << maximum(objA, objB) << endl;
    cout << "Minimum: " << minimum(objA, objB) << endl;
    return 0;
}