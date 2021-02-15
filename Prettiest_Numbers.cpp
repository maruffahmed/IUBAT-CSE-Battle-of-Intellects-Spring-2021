#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int t,result = 0;
    cin >> t;
    char str[t];
    scanf("%s",str);
    stack <char> stk;
    int countIndex[10] {0};
    for(int i = 0; i < t; i++)
    {
        if((!stk.empty() && str[i] == stk.top() && str[i] == str[i-1]) || str[i] == str[i+1])
        {
            stk.push(str[i]);
        }
        else if((!stk.empty() && str[i] != stk.top()) || str[i] != str[i+1])
        {
            int num = (int)str[i] - 48;
//            cout << num << endl;
            result += num;
        }
    }
    while(!stk.empty())
    {
        char top = stk.top();
        int topNum = (int)top - 48;
        stk.pop();
        if(countIndex[topNum] <= 5){
            countIndex[topNum] += 1;
        }else{
            result += topNum;
        }

    }

    for(int i = 0; i <= 9; i++)
    {
        stringstream concat;
        int temp;
        for(int j = 0; j < countIndex[i]; j++)
        {
            concat << i;
        }
        string s = concat.str();
        if(s.length() > 0)
        {
            stringstream geek(s);
            geek >> temp;
            result += temp;
        }
//        cout << "index : " << i << " " << countIndex[i] << endl;

    }
    cout << result;
    return 0;
}
