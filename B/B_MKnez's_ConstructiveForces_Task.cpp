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
    
    int n;
    cin >> n;
    if (n==1 || n ==3) {
        cout << "NO" << "\n";
        return;
    }
    cout << "YES\n";
    if (n % 2 == 0) {
        for (int i = 0; i <n; i+=2) {
            cout << 1 << " " <<-1 << " ";
        }
        cout << "\n";
        return;    
    }

    int a = 3 - n;
    int b = n-1;
    
    for (int i = 0; i < n-1; i+=2) {
        cout << a << " " << b << " ";
    }
    cout << a << "\n";


    
}




int main() {
    its0mar;

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
       potato();

    return 0;
}