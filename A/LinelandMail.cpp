#include <iostream>
#include <algorithm>
#include <vector>
typedef long long ll;
using namespace std;


int main() {

    std::ios::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);
    
    int n;
    cin >> n;
    vector<int> v1(n);

    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    ll min =0;
    ll max = 0;
    ll temp;

    for (int i = 0; i < n; i++) {

        if (i != 0 && i != n-1) {
            min = std::min(abs(v1[i] - v1[i+1]),abs(v1[i] - v1[i-1]));
        }
        if (i == 0) {
            min = abs(v1[0] - v1[1]);
        }
        else if (i == n-1) {
            min = abs(v1[n-1] - v1[n-2]);
        }
        max = std::max(abs(v1[i] - v1[0]), abs(v1[i] - v1[n-1]));
        cout << min << " " << max << "\n";
    }

    return 0;
}