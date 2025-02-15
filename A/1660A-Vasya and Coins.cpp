#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
typedef long long ll;
using namespace std;
 
void potato() {
 
    int a, b;
    cin >> a >> b;
 
    if (a == 0)
    {
        cout << 1;
    }
    else {
        cout << (2 * b) + 1 + a;
    }
    cout << "\n";
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