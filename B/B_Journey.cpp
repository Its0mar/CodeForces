#include <iostream>
#include <cmath>
#include <vector>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define its0mar ios::sync_with_stdio(false); cin.tie(nullptr)
#define loop(start, end) for (int i = (start); i < (end); ++i)
using namespace  std;

void potato() {

    ll k;
    ll sum = 0;
    ll days = 0;
    cin >> k;
    int arr[3];
    for (int i = 0; i < 3; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    days = (k / sum) * 3;
    ll reminder = (k % sum);
    int index = 0;
    while (reminder > 0) {
        days++;
        reminder -= arr[index++];
    }

    cout << days << "\n";
}

int main() {
    its0mar;
    int t;
    cin >> t;

    loop(0, t) {
        potato();
    }

    return 0;
}