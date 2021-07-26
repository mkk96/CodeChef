#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		float a,b;
		cin>>a>>b;
		if((6-a-b)>0)
		{
			cout<<(6-a-b)/6<<endl;
		}
		else
		{
			cout<<"0"<<endl;
		}
	}
	return 0;
}
