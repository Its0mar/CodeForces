#include <iostream>
using namespace std;

int main() {
	long long n, k;
	cin >> n;
	cin >> k;
	if (n % 2 == 0) {
		if ((n/2)>k) {
			cout << k + k - 1;
		}	
		else {
			cout << ( k - n/2 ) + ( k - n/2 ) ;
		}
	} // even
	else { // index of middlle = n /2 + 1
		if (k > ((n /2) + 1))
			cout << ( k - n/2 ) + ( k - n/2 ) - 2;
		else if (((n /2) + 1) > k)
			cout << k + k - 1;
		else
			cout << n;

	} // odd

	return 0;
}