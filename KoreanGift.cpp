#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    double n;
    cin >> n;
    while(n >= 2){
        n = n/2.0;
    }
    int result = n*2;
    cout << result << endl;
    return 0;
}
