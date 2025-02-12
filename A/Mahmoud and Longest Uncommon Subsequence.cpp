#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    if (str1 == str2)
        cout << -1;
    else
        cout << max(str1.length(), str2.length());

    return 0;
}

/*
both input are subsequnce for a another string
if str1 == str2 then they are subsqeunce for the same string
if not then they are not common subsequnce and we return the size the the largest string
*/
