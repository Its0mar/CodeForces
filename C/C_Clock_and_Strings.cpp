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
   int a, b, c, d;
   cin >> a >> b >> c >> d;

   if (a == c || a == d || b == c || b ==d) {
    cout << "YES\n";
    return;
   }

   set<int> up;
   set<int> down;

   int mn = min(a,b);
   int mx = max(a,b);

   for (int i = mn + 1;; i++) {
    if (i == 13)
        i = 1;
    if (i == mx)
        break;    
    up.insert(i);   
   }

   for (int i = mx + 1;; i++) {
    if (i == 13) {
        i = 1;
    }
    if (i == mn)
        break;  
    down.insert(i);   
   }
   bool isUp = false;
   bool isDown = false;

   if (up.count(c) > 0 || up.count(d) > 0) isUp = true;
   if (down.count(c) > 0 || down.count(d) > 0) isDown = true;

   if (isUp && isDown) cout << "YES\n";
   else cout << "NO\n";
}




int main() {
    its0mar;

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
       potato();
   
    
    




    return 0;
}