#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
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
    vector<ll> v(n);
    set<ll> temp;
    int dist = 0;
    for (int i = 0;i < n; i++){
         cin >> v[i];
         if (dist ==3 ||  temp.count(v[i]) != 0) {
            continue;
         }
         temp.insert(v[i]);
         dist++;         
         
    }

    if (dist > 1) {
        cout << "YES\n";
        
        for (int i = 0; i < n; i++) {
            if (i == 1)
                cout << "B";
            else
                cout << "R";
        }
        cout << "\n";
        return;
    }
    cout << "NO\n";



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