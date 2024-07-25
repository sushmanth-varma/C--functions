#include <iostream>
#include <string>
using namespace std;

int count_elements(const string &s) {
    return s.size();
}

int main() {
    cout << count_elements("hello world"); // Output: 11
    return 0;
}

