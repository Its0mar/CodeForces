#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define its0mar ios::sync_with_stdio(false); cin.tie(nullptr)
#define loop(start, end) for (int i = (start); i < (end); ++i)
using namespace  std;



void potato() {
    
    ll n;
    cin >> n;
    string str;
    cin >> str;
    
    ll up = 0, down = 0;
    for (ll i = 0; i <n; i++) {
        if (str[i] == '-') up++;
        else down++;
    }

    ll t1 = ceil(up/2);
    ll t2 = up - t1;
    cout << (t1 *t2 * down) << "\n";
    
}




int main() {
    its0mar;

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
       potato();
    return 0;
}