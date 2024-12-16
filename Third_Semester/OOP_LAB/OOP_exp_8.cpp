#include <iostream>
using namespace std;

class Float {
private:
    float number;
public:
    Float(float n = 0.0) : number(n) {}
    void get() {
        cout << "Enter the number: ";
        cin >> number;
    }
    Float operator+(Float &obj) {
        return Float(number + obj.number);
    }
    Float operator-(Float &obj) {
        return Float(number - obj.number);
    }
    Float operator*(Float &obj) {
        return Float(number * obj.number);
    }
    Float operator/(Float &obj) {
        if (obj.number == 0) {
            cout << "Error: Division by zero!" << endl;
            return Float(0);
        }
        return Float(number / obj.number);
    }
    void display() {
        cout << number << endl;
    }
};

int main() {
    Float f1, f2;
    f1.get();
    f2.get();
    Float sum = f1 + f2;
    Float difference = f1 - f2;
    Float product = f1 * f2;
    Float division = f1 / f2;

    cout << "\nSum: ";
    sum.display();
    cout << "Difference: ";
    difference.display();
    cout << "Product: ";
    product.display();
    cout << "Division: ";
    division.display();

    return 0;
}
