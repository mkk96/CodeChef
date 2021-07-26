#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a1,a2,a3,b1,b2,b3;
		cin>>a1>>a2>>a3;
		cin>>b1>>b2>>b3;
		int a=0,b=0;
		if(a1>b1)
		{
			a++;
		}
		else
		{
			b++;
		}
		if(a2>b2)
		{
			a++;
		}
		else
		{
			b++;
		}
		if(a3>b3)
		{
			a++;
		}
		else
		{
			b++;
		}
		if(a>b)
		{
			cout<<"A"<<endl;
		}
		else
		{
			cout<<"B"<<endl;
		}
	}
	return 0;
}
