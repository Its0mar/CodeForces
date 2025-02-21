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
    set<int> used, free, output;
    vector<int> input(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> input[i];
        used.insert(input[i]);
    }

    // since the range [1 to n]
    for (int i = 1; i <= n; i++) {
        if (used.count(i) == 0)
            free.insert(i);
    }

    auto s = free.begin();
    for (int i = 1; i <= n; i++) {
        if (output.count(input[i]) == 0) {
            cout << input[i] << " ";
            output.insert(input[i]);
        }
        else {
            cout << *s << " ";
            output.insert(*s);
            s++;
        }
    }
}




int main() {
    its0mar;


    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        potato();
        cout << "\n";
    }






    return 0;
}