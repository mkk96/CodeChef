#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> nPrime(int n) {
	int k = 2;
	vector<int> v;
	while (k <= n) {
		bool isPrime = true;
		int t = sqrt(k);
		for (; t > 1; t--) {
			if (k%t == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime)
			v.push_back(k);
		k++;
	}
	return v;
}

int dPrime(int n, int m) {
	int pow = 0;
	while (n >= m) {
		int temp = n / m;
		pow += temp;
		n = temp;
	}
	return pow;
}

int C(int n, int m) {
	long long ans = 1;
	vector<int> v = nPrime(n);
	for (int i = 0; i < v.size(); i++) {
		int k = v.at(i),pow;
		pow = dPrime(n, k) - dPrime(m, k) - dPrime(n - m, k);
		for (int j = 0; j < pow; j++) {
			ans *= k;
			ans %= (int)(1e9 + 7);
		}
	}
	return (int)ans;
}
int findcount(int *array,int size,int left,int high)
{
	int i,odd=0,even=0,count=0;
	for(i=left;i<high;i++)
	{
		if(array[i]%2)
		{
			odd++;
		}
		else
		{
			even++;
		}
	}
	if(even>2)
	{
		count+=C(even,3);
	}
	if(odd>1)
	{
		count+=(even*C(odd,2));
	}
	return count;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int array[n];
		for(int i=0;i<n;i++)
		{
			cin>>array[i];
		}
		for(int i=0;i<k;i++)
		{
			int x,y;
			cin>>x>>y;
			cout<<findcount(array,n,x-1,y)<<endl;
		}
	}
	return 0;
}
