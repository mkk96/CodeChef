#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int array[n],i,sum=0,count=0;
		for(i=0;i<n;i++)
		{
			cin>>array[i];
			sum=sum|array[i];
		}
		for(i=0;i<n;i++)
		{
			count=count|(array[i]^sum);
		}
		cout<<sum<<" "<<count<<endl;
	}
	return 0;
}
