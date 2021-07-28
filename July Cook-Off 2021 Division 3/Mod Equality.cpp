#include<bits/stdc++.h>
using namespace std;
int findcount(int *array,int n)
{
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int array[n],i;
		for(i=0;i<n;i++)
		{
			cin>>array[i];
		}
		sort(array,array+n);
		cout<<findcount(array,n)<<endl;
	}
	return 0;
}
