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
   string str;
   cin >> str;
   int alice = 0;
   int bob = 0;

   if (str.length() == 1) {
        cout << "Bob " << (int)(str[0] - 'a' +1) << "\n";
        return;
   }

   for (int i = 0; i < str.length(); i++) {
        alice += (str[i] - 'a' + 1);
   }

   if (str.length() % 2 == 0) {
        cout << "Alice " << alice << "\n";
   }

   else {
        bob += min(str.front() - 'a'+1, str.back() - 'a' +1);
        cout << "Alice " << alice - (2 * bob) << "\n";
   }

}




int main() {
    its0mar;

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
       potato();
    return 0;
}