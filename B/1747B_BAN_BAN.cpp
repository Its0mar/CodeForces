#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <numeric>
#include <set>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define its0mar ios::sync_with_stdio(false); cin.tie(nullptr)
#define loop(start, end) for (int i = (start); i < (end); ++i)
using namespace  std;


void potato() {
    
    int n;
    cin >> n;

    if (n==1) {
        cout << 1 << endl;
        cout << 1 << " " << 2 << endl;
        return;
    }

    cout << ceil(n*1.0 / 2) << endl;
    for (int i = 0 ; i < n/2; i++) {
        cout << (i * 3) + 1 << " " << (3*n) - (3 * i) << endl;
    }
    if (n % 2 != 0) {
        int temp = (n/2) * 3 + 1;
        cout << temp << " " << temp + 2 << "\n";
    }

}




int main() {
    its0mar;

    //potato();
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        potato();
    }







    return 0;
}
