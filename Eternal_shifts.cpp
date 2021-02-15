#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

void sortString(string &str)
{
   sort(str.begin(), str.end());
   cout << str << endl;
}

int main()
{
    string s;
    cin >> s;
    int countNum = 0, countChar = 0;
    vector<char>numArr,charArr,unsortedcombArr,sortedCombArr;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            countNum += i;
            numArr.push_back(s[i]);
        }else{
            countChar += i;
            charArr.push_back(s[i]);
        }
    }
    if(countNum > countChar){

        for(int i = 0; i < charArr.size(); i++){
            unsortedcombArr.push_back(charArr[i]);
        }
        for(int i = 0; i < numArr.size(); i++){
            unsortedcombArr.push_back(numArr[i]);
        }
        sort(charArr.begin(),charArr.end());
        sort(numArr.begin(),numArr.end());
        for(int i = 0; i < charArr.size(); i++){
            sortedCombArr.push_back(charArr[i]);
        }
        for(int i = 0; i < numArr.size(); i++){
            sortedCombArr.push_back(numArr[i]);
        }
    }else{
        for(int i = 0; i < numArr.size(); i++){
            unsortedcombArr.push_back(numArr[i]);
        }
        for(int i = 0; i < charArr.size(); i++){
            unsortedcombArr.push_back(charArr[i]);
        }
        sort(charArr.begin(),charArr.end());
        sort(numArr.begin(),numArr.end());
        for(int i = 0; i < numArr.size(); i++){
            sortedCombArr.push_back(numArr[i]);
        }
        for(int i = 0; i < charArr.size(); i++){
            sortedCombArr.push_back(charArr[i]);
        }
    }

    string unSortedResult,sortedResult;
    for(int i = 0; i < unsortedcombArr.size(); i++){
        unSortedResult += unsortedcombArr[i];
    }
    for(int i = 0; i < sortedCombArr.size(); i++){
        sortedResult += sortedCombArr[i];
    }

    cout << countChar << " " << countNum << endl;
    cout << "Unsorted: " << unSortedResult << endl;
    cout << "Sorted: " << sortedResult << endl;
    return 0;
}
