#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    short a,b;
    cin >> a >> b;
    cout << ((a + b) % 2 != 0 ? "Rematch" : (a > b ? "First won" : (b > a ? "Second won" : "Rematch")));
    

    return 0;
}