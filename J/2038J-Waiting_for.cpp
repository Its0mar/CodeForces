#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
typedef long long ll;
using namespace std;
 
void potato() {
 
    int n;
    cin >> n;
    int people = 0;
    char c;
    int temp;
    for (int i = 0; i < n; i++) {
        cin >> c;
        cin >> temp;
        if (c == 'P') {
            people += temp;
        }
        else if (c == 'B') {
            people -= temp;
            if (people < 0) {
                cout << "YES\n";
                people = 0;
            }
            else {
                cout << "NO\n";
            }
        }
    }
 
}
 
int main() {
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    potato();
 
    return 0;
}