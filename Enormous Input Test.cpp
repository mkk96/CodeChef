#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k,count=0;
	cin>>n;
	cin>>k;
	while(n-->0)
	{
		long long int a;
		cin>>a;
		if(a%k==0)
		{
			count++;
		}
	}
	cout<<count;
	return 0;
}
