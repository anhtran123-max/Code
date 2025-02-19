// https://projecteuler.net/problem=3

#include<bits/stdc++.h>

using namespace std;

int main(){
    unsigned long long x; cin >> x;
    for (unsigned long long factor = 2; factor * factor <= x; factor++)
        while (x % factor == 0 && x != factor)
            x /= factor;

    cout << x << endl;
    return 0;
}