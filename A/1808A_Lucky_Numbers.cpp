#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define its0mar ios::sync_with_stdio(false); cin.tie(nullptr)
#define loop(start, end) for (int i = (start); i < (end); ++i)
using namespace  std;



void potato() {
    int l, r;
    cin >> l >> r;
    int ans = l;
    int mx = -1;
    for (int i =r; i >= l; i--) {
        string str = to_string(i);
        sort(str.begin(), str.end());
        int temp = str.back() - str.front();
        if (temp > mx) {
            mx = temp;
            ans = i;
        }
        if (mx == 9) break;
    }

    cout << ans << "\n";
}




int main() {
    its0mar;

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
       potato();
    return 0;
}
