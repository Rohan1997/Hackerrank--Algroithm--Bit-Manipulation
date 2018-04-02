//#include <bits/stdc++.h>
#include <vector>
#include <iostream>

using namespace std;

int lonelyinteger(vector <int> a) {
    // Complete this function
    int n,m;
    n = a.size(); 
    m=(n+1)/2;
    int b1[m] = {-1};                   //To store the integers
    int b2[m] = {0};                    //To store the no of times the integer is repreated
    int count=0,indicator=0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (b1[j]==a[i])
            {
                b2[j]++;
                indicator = 1;
                break;
            }
        }
        if (indicator == 0)
        {
            b1[count]=a[i];
            b2[count]++;
            count++;
        }
        indicator = 0;
    }

    for (int i = 0; i < m; ++i)
    {
        if(b2[i]!=2)
            return b1[i];
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int result = lonelyinteger(a);
    cout << result << endl;
    return 0;
}