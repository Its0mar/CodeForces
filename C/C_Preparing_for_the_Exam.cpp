#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <numeric>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define its0mar ios::sync_with_stdio(false); cin.tie(nullptr)
#define loop(start, end) for (int i = (start); i < (end); ++i)
using namespace  std;

void betterPotato() {
    int n, m, k;
   cin >> n >> m >> k;
    vector<int> v1(m+1);
    for (int i =1; i <= m; i++) cin >> v1[i];
    int input;
    int mess = 0;
    int last;
    cin >> input;
    
    if (input != 1) {
        mess = 1;
    }
    for (int i =2; i <= k; i++){
        last = input;
        cin >> input;
        if (last + 1 != input)
            mess = last + 1;
    }

    if (mess == 0)
        mess = input + 1;

    if (n - 1 > k)   
    {
        for (int i = 1; i <= m; i++)
            cout << 0;
        cout << "\n";
        return;    
    } 
    if (n - 1 < k)   
    {
        for (int i = 1; i <= m; i++)
            cout << 1;
        cout << "\n";
        return;    
    } 
    if (n- 1 == 1) {
        for (int i = 1;  i <=m; i++) {
            if (mess == i)
                cout << 1;
            else
                cout << 0;    
        }
        cout << "\n";
        return;
    }

    else if (mess != 0) {
        for (int i = 1; i <=m; i++) {
            if (v1[i] == mess)
                cout << 1;
            else
                cout << 0;
        }
        cout << "\n";
    }

}

int main() {
    its0mar;


    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
       betterPotato();
    }

    return 0;
}
