#include <iostream>
#include <algorithm>
#include <vector>
using namespace  std;

void potato() {
    int n;
    cin >> n;
    int sum = 0; 
    int mySum = 0;
    int counter =0;
    int input;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> input;
        v[i] =  input;
        sum += input;

    }
    sort(v.begin(), v.end());

    while (sum >= mySum) {
        int p = v.back();
        v.pop_back();
        mySum += p;
        sum -= p;
        counter++;
    }
    
    cout << counter;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    potato();


    return 0;
}