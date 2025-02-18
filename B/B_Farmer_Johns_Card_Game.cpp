#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#define ll long long
#define all(v) (v).begin(), (v).end()
#define its0mar ios::sync_with_stdio(false); cin.tie(nullptr)
#define loop(start, end) for (int i = (start); i < (end); ++i)
using namespace  std;

bool compare(const pair<vector<int>, int>&a, const pair<vector<int>, int>&b) {
    int sumA = accumulate(all(a.first), 0);
    int sumB = accumulate(all(b.first), 0);
    return sumA == sumB ? a.second < b.second : sumA < sumB;
}


void potato() {
    int n, m;
    cin >> n >> m;
    vector<pair<vector<int>, int>> v(n, make_pair(vector<int>(m), 0));
    vector<int>ans(0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i].first[j];
        }
        v[i].second = i + 1;
    }

    for (auto& inner_vec : v) {
        sort(all(inner_vec.first));
    }
    sort(all(v), compare);

    int last = -1;
    int current = 0;
    
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            current = v[i].first[j];
            if (last > current) {
                cout << -1 << "\n";
                return;
            }
            last = current;
            if (j == 0)
                ans.push_back(v[i].second);
        }
    }
    
    for (auto c : ans)
        cout << c << " ";
    cout << "\n";

}

int main() {
    its0mar;
    int n;
    cin >> n;
    loop(0, n)
    {
        potato();
    }


    return 0;
}