#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	float m;
	int n;
	cin>>n;
	cin>>m;
	if(n>(m-0.5)||n%5!=0)
	{
		cout<<m;
	}
	else 
	{
		cout<<m-n-.5;
	}
	return 0;
}
