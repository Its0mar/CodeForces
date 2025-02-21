#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define its0mar ios::sync_with_stdio(false); cin.tie(nullptr)
#define loop(start, end) for (int i = (start); i < (end); ++i)
using namespace  std;



void potato() {
    int n, m, sum = 0,total = 0;
    cin >> n >> m;
    vector<string> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i].length();
        if (sum <= m)
            total++;
    }

    cout << total << "\n";
    
    
}




int main() {
    its0mar;


    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        potato();
    }






    return 0;
}