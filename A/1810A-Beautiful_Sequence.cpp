#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
typedef long long ll;
using namespace std;
 
void potato() {
 
    int n;
    int temp;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
 
    for (int i = 0; i < n; i++) {
        if (v[i] <= i + 1) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
 }
 
int main() {
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    while (n--) {
        potato();
    }
 
 
    return 0;
}

// focus on the index and a of index and find a relation