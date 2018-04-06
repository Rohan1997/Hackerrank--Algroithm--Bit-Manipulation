#include <bits/stdc++.h>

using namespace std;

int maximizingXor(int l, int r) {
    // Complete this function
    int max=0,temp=0;
    for (int i = l; i < r+1; ++i)
    {
    	for (int j = l; j < r+1; ++j)
    	{
    		temp = i^j;
    		if (temp>max)
    		{
    			max = temp;
    		}
    	}
    }
    return max;
}

int main() {
    int l;
    cin >> l;
    int r;
    cin >> r;
    int result = maximizingXor(l, r);
    cout << result << endl;
    return 0;
}