#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	int t;cin>>t;ll l=1e18;
	
	while(t--)
	{
		ll n,a=1;cin>>n;int c=0;
		while(n>0)
		{int i=0;
			for(i=0;;i++)
			{
				if(pow(2,i)>n) break;
			}
			i-=1;
			n-=pow(2,i);c++;
		}
		cout<<c<<endl;
	}
}