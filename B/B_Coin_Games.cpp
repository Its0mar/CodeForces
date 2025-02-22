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
    string str;
    cin >> str;
    int u = str.find('U');;
    int counter = 1;
    while (u != -1) {
        
        if (str.length() >= 3) {
            if (u == 0) {
                str[u+1] = str[u+1] == 'U' ? 'D' : 'U';
                str[str.length() - 1] = str[str.length()-1] == 'U' ? 'D' : 'U';
            }
            else if (u == str.length() - 1) {
                str[0] = str[0] == 'U' ? 'D' : 'U';
                str[str.length() - 2] = str[str.length()-2] == 'U' ? 'D' : 'U';
            }
            else {
                str[u-1] = str[u-1] == 'U' ? 'D' : 'U';
                str[u+1] = str[u+1] == 'U' ? 'D' : 'U';
            }
            str.erase(u,1);
        }

        else if (str.length() == 2 || str.length() == 1) {
            str.erase(u,1);
        }

        counter++;
        u = str.find('U');
    }
    
    // means someone won
    // if (str.length() == 0) {
    //     if (counter % 2 == 0)
    //         cout << "YES\n";
    //     else 
    //         cout << "NO\n";
    // } 
    // else 
    //     if 
    if (counter % 2 == 0)
            cout << "YES\n";
        else 
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