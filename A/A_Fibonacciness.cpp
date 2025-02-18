#include <iostream>
#include <algorithm>
#include <vector>
using namespace  std;

void potato() {
    int a1,a2,a3,a4,a5;
    cin >> a1 >> a2 >> a4>> a5;
    
    a3 = a1 + a2;
    int max = 0;
    int temp = 1;
    if (a2 + a3 == a4) temp++;
    if (a3 + a4 == a5) temp++;
    max = temp;
    if (max == 3) {
        cout << max << "\n";
        return;
    }
    temp = 0;
    a3 = 0;
    if (a2 + a3 == a4) temp++;
    if (a3 + a4 == a5) temp++;
    max = std::max(temp, max);

    a3 = a4 - a2;
    temp = 0;
    if (a2 + a3 == a4) temp++;
    if (a3 + a4 == a5) temp++;
    max = std::max(temp, max);

    cout << max << "\n";
    return ;
    }



int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n-- > 0) 
        potato();


    return 0;
}