#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int i=0;
	while(n>0)
	{
		int input;
		cin>>input;
		i^=input;			// i = i XOR input
		n--;
	}	
	cout<<i;
	return 0;
}
/*
Logic Used
If x is a number, then (x XOR x = 0) and (x XOR 0 = x)
*/