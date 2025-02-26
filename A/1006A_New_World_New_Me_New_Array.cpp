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
    
    int n,k,p;
    cin >> n >> k >> p;

    
    double ans =(double) k /p ;
    ans = ((ans < 0) ? ans *= -1 : ans);
    ans = ceil(ans);

    cout << (ans <= n ? ans : -1); 
    cout << "\n";

}




int main() {
    its0mar;

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
       potato();
    return 0;
}