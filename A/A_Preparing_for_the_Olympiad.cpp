#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define its0mar ios::sync_with_stdio(false); cin.tie(nullptr)
#define loop(start, end) for (int i = (start); i < (end); ++i)
using namespace  std;

void potato() {

    short n;
    cin >> n;
    vector<short> v1(n);
    vector<short> v2(n);
    for (int i = 0; i < n; i++) cin >> v1[i];
    for (int i = 0; i < n; i++) cin >> v2[i];
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += max(v1[i] - v2[i+1], 0);
    }
    cout << sum + v1[n-1] << "\n";
}



int main() {
    its0mar;
    int n;
    cin >> n;

    loop(0, n) {
        potato();
    }

    return 0;
}