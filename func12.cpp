#include<iostream>
using namespace std;

class mats {
private:
    int mat[2][2];
    int res[2][2];
public:
    void get();
    void disp();
    friend mats operator*(const mats&, const mats&);
};

void mats::get() {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Enter value : " << i << " " << j << endl;
            cin >> mat[i][j];
        }
    }
}

void mats::disp() {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

mats operator*(const mats& obj1, const mats& obj2) {
    mats obj4;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            obj4.res[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                obj4.res[i][j] += obj1.mat[i][k] * obj2.mat[k][j];
            }
        }
    }
    return obj4;
}

int main() {
    mats obj1, obj2, obj3;
    obj1.get();
    obj2.get();
    obj3 = obj1 * obj2;
    obj3.disp();
}

