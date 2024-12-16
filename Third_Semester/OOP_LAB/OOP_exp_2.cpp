#include<iostream>
using namespace std;
class complex{
    int real,imag;
    public:
    complex(int r=0, int i=0) : real(r),imag(i){}
    void input(){
        cout<<"Enter real and imaginary part: ";
        cin>>real>>imag;
    }
    complex operator + (complex & obj){
        complex result;
        result.real = real + obj.real;
        result.imag = imag + obj.imag;
        return result;
    }
    void show(){
        cout<<"\nThe sum of two complex numbers: "<<real<<"+i"<<imag<<endl;
    }
};
int main(){
    complex c1,c2;
    c1.input();
    c2.input();
    complex ans = c1 + c2;
    ans.show();
    return 0;
}
