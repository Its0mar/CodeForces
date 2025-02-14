#include <iostream>
#include <string>
#include <vector>
using namespace std;

void meow()
{
	int n;
	cin >> n;
	string str;
	cin >> str;
	vector<bool> v(26, false);
	for (char c : str) {
		v[toupper(c) - 65] = true;
	}

	for (bool c : v)
	{
		if (c == false)
		{
			cout << "NO";
			return;
		}
	}
	cout << "YES";
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	meow();

	return 0;
}