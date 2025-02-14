#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
typedef long long ll;
using namespace std;

void meow()
{
    int n;
    cin >> n;

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    ll mini = v[0];
    ll maxi = v[v.size() - 1];
    int counter = 0;
    for (ll c : v)
    {
        if (c > mini && c < maxi)
            counter++;
    }

    cout << counter;
}


int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    meow();

    return 0;
}