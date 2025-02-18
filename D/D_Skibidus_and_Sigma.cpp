#include <iostream>
#include <algorithm>
#include <vector>
using namespace  std;

void potato() {
    int n, m;
    int temp;
    cin >> n >> m;
    vector<vector<int>>v(n,vector<int>(m));
    vector<pair<int,int>> sum(n);
    for (int i = 0; i < n; i++) {
        for (int j =0; j <m; j++) {
            cin >> temp;
            v[i][j] = temp;
            sum[i].first += temp;
        } 
        sum[i].second = i;
    }

    sort(sum.begin(), sum.end());
    reverse(sum.begin(), sum.end());

    temp = n *m;
    long long total  = 0;

    for (auto num : sum) {
        int i = num.second;
        for (int j = 0; j < m; j++) {
            total += (v[i][j] * temp--);
        }
    }
    cout << total;
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