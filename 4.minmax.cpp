#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

pair<int, int> find_min_max(const vector<int> &arr) {
    if (arr.empty())
        return {0, 0};
    int min_elem = *min_element(arr.begin(), arr.end());
    int max_elem = *max_element(arr.begin(), arr.end());
    return {min_elem, max_elem};
}

int main() {
    vector<int> arr = {3, 1, 4, 1, 5, 9};
    auto [min_elem, max_elem] = find_min_max(arr);
    cout << "Min: " << min_elem << ", Max: " << max_elem;
    return 0;
}

