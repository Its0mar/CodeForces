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

    int n, k;
    cin >> n >> k;
    vector<int> v(n + 1, 0);
    int index;
    for (int i = 1; i <= n; i++) {
        cin >> index;
        if (index >= 1 && index <= n) {
            v[index]++;
        }
    }

    
    int counter = 0;
    for (int i = 1; i <= n; i++) {
        int x = k - i;
        if (x < 1 || x > n) continue;
        while (v[i] > 0 && v[x] > 0 && i != x) {
            v[i]--; v[x]--;
            counter++;
        }
        if (i == x && v[i] >= 2) {
            counter += v[i] / 2;
            v[i] = 0;
        }
    }

    cout << counter << "\n";
    return;
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