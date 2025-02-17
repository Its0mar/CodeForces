#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void potato() {
	int n,m, b;
	cin >> n >> m;
	vector<int> v(n);
	for (int i= 0; i < n; i++) cin >> v[i];
	cin >> b;
	v[0] = min(v[0], b - v[0]);
	
	for (int i= 1; i < n; i++) {
		int mini = min(v[i], b - v[i]);
		int maxi = max(v[i], b - v[i]);

		if (mini >= v[i-1]) {
		    v[i] = mini;
		}
		else if (maxi >= v[i-1]) {
		    v[i] = maxi;
		}

		else {
		    cout << "NO\n";
		    return;
		}

	}
	cout << "YES\n";
}

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    
    while (n-- != 0) {
    	potato();
    }
	return 0;
}