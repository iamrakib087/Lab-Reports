#include<iostream>
using namespace std;

class time {
    int hour, minute;

public:
    time(int r = 0, int i = 0) : hour(r), minute(i) {}
    void input() {
        cout << "Enter hour and minute: ";
        cin >> hour >> minute;
    }
    time operator+(time &obj) {
        time result;
        result.hour = hour + obj.hour;
        result.minute = minute + obj.minute;
        if (result.minute >= 60) {
            result.hour += result.minute / 60;
            result.minute %= 60;
        }
        return result;
    }
    void show() {
        cout << "\nThe required time is " << hour << " hours : " << minute << " minutes." << endl;
    }
};
int main() {
    time obj1, obj2, obj3;
    obj1.input();
    obj2.input();
    obj3 = obj1 + obj2;
    obj3.show();
    return 0;
}
