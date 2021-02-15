#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

bool isPrime(int n)
{
    if(n == 0 || n == 1)
        return false;
    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int findNextPrime(int n)
{
    int found = 1, nextPrime = n;
    while(found)
    {
        nextPrime++;
        if(isPrime(nextPrime))
        {
            found = 0;
            return nextPrime;
        }
    }
    return nextPrime;
}

int main()
{
    int n,m,x,y;
    cin >> n >> m >> x >> y;
    int arr1[m][n],arr2[y][x];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr1[i][j];
        }
    }
    for(int i = 0; i < y; i++)
    {
        for(int j = 0; j < x; j++)
        {
            cin >> arr2[i][j];
        }
    }

    int sumArr1Row;
    queue <int> rowSum1;
    for(int i = 0; i < m; i++)
    {
        sumArr1Row = 0;
        for(int j = 0; j < n; j++)
        {
            sumArr1Row += arr1[i][j];
        }
        rowSum1.push(sumArr1Row);
    }
    queue <int> tempQueue(rowSum1);
    while(!tempQueue.empty()){
        for(int i = 0; i < y; i++)
        {
            for(int j = 0; j < x; j++)
            {
                cout << tempQueue.front() + arr2[i][j] << " ";
            }
        }
        tempQueue.pop();
        cout << endl;
    }

    while(!rowSum1.empty()){
        for(int i = 0; i < y; i++)
        {
            for(int j = 0; j < x; j++)
            {
                if(!isPrime(rowSum1.front() + arr2[i][j])){
                    cout << findNextPrime(rowSum1.front() + arr2[i][j]) << " ";
                }else{
                    cout << rowSum1.front() + arr2[i][j] << " ";
                }
            }
        }
        rowSum1.pop();
        cout << endl;
    }
    return 0;
}
