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
    int n = 4;
    
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int i = 0;
    do {

        // check if its beautiful
        if (v[0] < v[1] && v[2] < v[3] && v[0] < v[2] && v[1] < v[3]) {
            cout << "YES\n";
            return;
        }  
        
        vector<int> v_temp(n);
        for (int i = 0; i < n; i++) {
            v_temp[i] = v[i];
        }

        v[0] = v_temp[2];
        v[1] = v_temp[0];
        v[2] = v_temp[3];
        v[3] = v_temp[1];

        

        
                   

    } while(i++ < 3);

    cout << "NO\n"; return;
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