#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if((a&&!b)||(b&&!c)||(c&&!a)||(!a&&b)||(!b&&c)||(!c&&a))
		{
			cout<<"1"<<endl;
		}
		else
		{
			cout<<"0"<<endl;
		}
	}
	return 0;
}
