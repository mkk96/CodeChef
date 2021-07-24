#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n=0,m,l;
		cin>>n>>m>>l;
		vector<long long int> color(n+2,-2);
		for(long long int i=0;i<m;i++)
		{
			long long int k;
			cin>>k;
			for(long long int j=0;j<k;j++)
			{
				long long int a;
				cin>>a;
				color[a]=i;
			}
		}
		long long int temp,count=1;;
		cin>>temp;
		for(long long int i=1;i<l;i++)
		{
			long long int a;
			cin>>a;
			if(color[a]!=color[temp])
				count++;
			temp=a;
		}
		cout<<count<<endl;
	}
	return 0;
}
