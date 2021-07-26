#include<iostream>
#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		int i;
		int array[n+1],a;
		array[0]=0;
		for(i=1;i<=n;i++)
		{
			cin>>a;
			if(a%2==0)
			{
				array[i]=array[i-1]+1;
			}
			else
			{
				array[i]=array[i-1];
			}
		}
		for(i=0;i<q;i++)
		{
			int l,r;
			cin>>l>>r;
			int even=array[r]-array[l-1];
			int tuple=r-l+1;
			int odd=tuple-even;
			int result=(even*(even-1)*(even-2)/6)+(odd*(odd-1)/2)*even;
			cout<<result<<endl;
		}
	}
	return 0;
}
