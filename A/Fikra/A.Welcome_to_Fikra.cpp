// A. Welcome to Fikra
#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string str;
    scanf("%d", &n);
    while (n-- != 0) {
        scanf("%s", &str);
        if (str[str.length()-1] == 'u'&& str[str.length()-2] == 's') {
            str.erase(str.length() - 3);
            str += 'i';
        }
        else if (str[str.length() - 1] = 'i') {
            str.erase(str.length() - 2);
            str += "us";
        }

    }
    printf("%s\n",str); 
    

    return 0;
}