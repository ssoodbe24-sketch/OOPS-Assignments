#include <iostream>
using namespace std;
class Time {
private:
    int h, m, s;   
public:
    Time(int hours = 0, int minutes = 0, int seconds = 0) {
        h = hours;
        m = minutes;
        s = seconds;
    }
    void show() {
        cout << h << " hrs " << m << " mins " << s << " secs" << endl;
    }
    Time operator+(Time t) {
        Time result;
        result.s = s + t.s;
        result.m = m + t.m + result.s / 60; 
        result.s %= 60;                      
        result.h = h + t.h + result.m / 60; 
        result.m %= 60;                     
        return result;
    }
};
int main() {
    Time t1(5, 15, 34);
    Time t2(9, 53, 58);
    Time t3 = t1 + t2;
    cout << "Sum of times: ";
    t3.show();
    return 0;
}
