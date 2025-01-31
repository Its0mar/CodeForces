#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
static int* lessFrequent(int n, int* arr);
int main() {

	int n;
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	int* x = lessFrequent(n, arr);
	int teams = *x;
	cout << teams << endl;

	int t1 = 0, t2 = 0, t3 = 0;
	while (teams > 0) {
		for (int i = 0; i < n; i++) {
			if (arr[i] == 1 && t1 == 0) {
				t1 = i + 1;
				arr[i] = 0;
			}
			else if (arr[i] == 2 && t2 == 0) {
				t2 = i + 1;
				arr[i] = 0;
			}
			else if (arr[i] == 3 && t3 == 0) {
				t3 = i + 1;
				arr[i] = 0;
			}
		}
		cout << t1 << " " << t2 << " " << t3 << endl;
		t1 = t2 = t3 = 0;
		teams--;
	}
	

	return 0;
}

static int* lessFrequent(int n, int* arr) {
	int c1 = 0,  c2 = 0, c3 = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] == 1) c1++;
		else if (arr[i] == 2) c2++;
		else c3++;
	}
	int c[] = { c1,c2,c3 };
	//int n = sizeof(c) / sizeof(c[0]);
	auto min = min_element(c, c + (sizeof(c) / sizeof(c[0])));
	return min;
}