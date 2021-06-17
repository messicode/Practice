#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;cin>>n;
		if(n<1) continue;
		ll p=(n/4)*44;
		int e=n%4;
		switch(e)
		{
			case 1: p+=20;break;
			case 2: p+=36;break;
			case 3: p+=51;break;
		}
		if(n/4) p+=(4-e)*4;
		cout<<p<<endl;

	}
return 0;
}
