#include<iostream>
using namespace std;

class sai {
private:
    int num1, res;
public:
    void get(int);
    void disp();
    friend sai operator+(const sai&, const sai&); // Declaration of the friend function
};

void sai::get(int a) {
    num1 = a;
}

void sai::disp() {
    cout << res;
}

sai operator+(const sai& obj1, const sai& obj2) {
    sai obj4;
    obj4.res = obj1.num1 + obj2.num1;
    return obj4;
}

int main() {
    sai obj1, obj2, obj3;
    obj1.get(5);
    obj2.get(9);
    obj3 = obj1 + obj2;
    obj3.disp();
}

