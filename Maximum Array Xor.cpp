#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int findSwap( int n,long long int k)
{
	long long int maxshift=pow(2,n-1);
	if(k>=maxshift)
	return (pow(2,n)-1)*2*maxshift;
	return (pow(2,n)-1)*2*k;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int k;
		int n;
		cin>>n>>k;
		long long int swap=findSwap(n,k);
		cout<<swap<<endl;
	}
	return 0;
}
