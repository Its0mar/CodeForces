#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define its0mar ios::sync_with_stdio(false); cin.tie(nullptr)
#define loop(start, end) for (int i = (start); i < (end); ++i)
using namespace  std;



void potato() {
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i <n; i++) cin >> v1[i];
    string str;
    cin >> str;
    
    vector<char> v2(51, '+');
    for (int i = 0; i <n; i++) {
        if (v2[v1[i]] == '+')
            v2[v1[i]]= str[i];
        else if (v2[v1[i]] == str[i]) continue;
        else {
            cout << "NO\n";
            return;
        }    
    }
    
    cout << "YES\n";

}




int main() {
    its0mar;

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
       potato();
   
    
    




    return 0;
}