#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		double a,b;
		long long int ans=0;
		cin>>a>>b;
		if(a==b)
		{
			ans=0;
		}
		else if(a>b)
		{
			ans=(ceil((b-(a-1))/2)+ceil(((a-1)-a)/2));
		}
		else
		{
			ans=(ceil((b-(a+1))/2)+ceil(((a+1)-a)/2));
		}
		cout<<ans<<endl;
	}
	return 0;
}
