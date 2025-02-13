//Snacktower
#include <iostream>
#include <vector>
#define loop(i,n) for(int i = 0; i < n; ++i)

using namespace std;

int main() {
    int n,x;
    cin >> n;
    vector<bool> v(n, false);
    int next = n;

    loop(i, n) {

        cin >> x;
        v[x] = true;

        while (v[next] == true)
        {
            cout << next << " ";
            next--;
        }

        cout << endl;
    }

    return 0;
}

/*
    I created a vector, and initialize it with false 
    n is the first number Im looking for so next will be equal to n
    loop from 0 to n, every iteration lets say the user input was 4, then v[4] = true , thats how we will track the numbers
    then I will check if the next number is in vector I will print it and decrease next , I will continue doing that untill the 
    next number is no longer in the array then I (endl) thats mean i-th day is done 
*/
