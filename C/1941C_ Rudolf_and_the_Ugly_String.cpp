#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <numeric>
#include <set>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define its0mar ios::sync_with_stdio(false); cin.tie(nullptr)
#define loop(start, end) for (int i = (start); i < (end); ++i)
using namespace  std;


void potato() {
    
    int n;
    string str;
    cin >> n;
    cin >> str;
    int counter = 0;

    if (n < 3) {
        cout << 0 << "\n";
        return;
    }
    for (int i = 0; i < str.length() - 2; i++) {
        if (str[i] == 'p' && str[i+1] == 'i' && str[i+2] == 'e') {
            counter++;
            str[i+2] == 'j';
        }
        else if (str[i] == 'm' && str[i+1] == 'a' && str[i+2] == 'p'){
            counter++;
            str[i+2] == 'j';
        }
    }
    cout << counter << "\n";

}




int main() {
    its0mar;

    //potato();
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        potato();
    }







    return 0;
}
