#include <iostream>
#include <cmath>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    unsigned int a;
    while (scanf("%d", &a) && a != 0) {
        unsigned int s = sqrt(a);

        (s * s == a) ? printf("yes\n") : printf("no\n");
    

    }

    return 0;
}