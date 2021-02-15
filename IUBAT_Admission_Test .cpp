#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    float ssc,hsc;
    cin >> ssc>>hsc;
    if((ssc+hsc)/2 >2.755){
        cout << "Average GPA = " << fixed <<setprecision(3) << (ssc+hsc)/2 << " , Eligible for admission test" << endl;
    }else{
        cout << "Average GPA = " << fixed <<setprecision(3) << (ssc+hsc)/2 << ", Not Eligible for admission test" << endl;
    }
    return 0;
}
