#include <iostream>
#include <vector>
using namespace std;


int main() {

    int n;
    cin >> n;
    vector<int> v1(n), v2(n);

    for (int i = 0; i < n; i++) {
        cin >> v1[i];
        v2[v1[i] - 1] = i + 1;
    }


    for (int c : v2) {
        cout << c << " ";
    }
    return 0;
}