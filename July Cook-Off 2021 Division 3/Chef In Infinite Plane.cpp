#include<bits/stdc++.h>
using namespace std;
int findcount(int *array,int n,int x)
{
	vector<int> hash(x+1,0);
	int count=0;
	for(int i=0;i<n;i++)
	{
		hash[array[i]]++;
	}
	for(int i=2;i<=x;i++)
	{
		int temp=hash[i];
		if(temp>i-1)
			count+=(i-1);
		else
			count+=temp;
	}
	return count;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int array[n],i,x=INT_MIN;
		for(i=0;i<n;i++)
		{
			cin>>array[i];
			if(x<array[i])
				x=array[i];
		}
		sort(array,array+n);
		cout<<findcount(array,n,x)<<endl;
	}
	return 0;
}
