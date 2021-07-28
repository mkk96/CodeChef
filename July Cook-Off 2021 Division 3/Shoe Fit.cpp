#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}
int operation(int n,int m)
{
	if(gcd(n,m)>1)
		return 0;
	if(gcd(n+1,m)>1||gcd(n,m+1)>1)
		return 1;
	return 2;
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		cout<<operation(n,m)<<endl;
	}
	return 0;
}
