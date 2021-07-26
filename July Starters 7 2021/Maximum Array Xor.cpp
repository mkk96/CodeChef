#include<iostream>
#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		lli n,k;
		cin>>n>>k;
		lli maxLength=pow(2,n);
		lli len=min(2*k,maxLength)*(maxLength-1);
		cout<<len<<endl;
	}
}
