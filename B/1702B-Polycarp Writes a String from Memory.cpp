#include <iostream>
#include <unordered_set>>
typedef long long ll;
using namespace std;
 
void potato() {
 
    int n;
    cin >> n;
    string str;
    
    int letters = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
 
        unordered_set<char> uniqueLetters;
        int days = 1;
 
        for (char c : s) {
            uniqueLetters.insert(c);
            if (uniqueLetters.size() > 3) {
                days++;
                uniqueLetters.clear();
                uniqueLetters.insert(c);
            }
        }
        cout << days << "\n";
    }
}
 
int main() {
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    potato();
 
    return 0;
}

/*
the problem : polycarp can remeber 3 letters every day
in the second day he will forget the day`s before letters
solution : for every day add 3 unique letters , start from day = 1

*/