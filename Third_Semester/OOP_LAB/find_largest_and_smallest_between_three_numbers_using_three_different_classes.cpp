#include<iostream>
using namespace std;

class C;
class B;
class A{
public:
    int a;
    A(int x) : a(x) {}
    friend int maximum(A, B, C);
    friend int minimum(A, B, C);
};

class B{
public:
    int b;
    B(int y): b(y) {}
    friend int maximum(A, B, C);
    friend int minimum(A, B, C);
};

class C{
public:
    int c;
    C(int z): c(z) {}
    friend int maximum(A, B, C);
    friend int minimum(A, B, C);
};

int maximum(A objA, B objB, C objC){
    int large = objA.a;
    if (objB.b > large) large = objB.b;
    if (objC.c > large) large = objC.c;
    return large;
}

int minimum(A objA, B objB, C objC){
    int small = objA.a;
    if (objB.b < small) small = objB.b;
    if (objC.c < small) small = objC.c;
    return small;
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    A objA(a);
    B objB(b);
    C objC(c);

    cout << "a = " << objA.a << endl;
    cout << "b = " << objB.b << endl;
    cout << "c = " << objC.c << endl;

    cout << "Maximum = " << maximum(objA, objB, objC) << endl;
    cout << "Minimum = " << minimum(objA, objB, objC) << endl;

    return 0;
}
