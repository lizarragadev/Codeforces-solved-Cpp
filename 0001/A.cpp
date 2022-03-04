#include <iostream>
#include <math.h>
/*
    Author  :   Gustavo Lizárraga
    Link    :   http://codeforces.com/problemset/problem/1/A

*/
using namespace std;
int main() {
    unsigned long long n,m,a;
    cin >> n >> m >> a;
    unsigned long long res = ceil((double) m/a ) * ceil((double) n/a );
    cout << res ;
    return 0;
}