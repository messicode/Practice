#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
	{
		ll n,a;cin>>n;a=n;
		while(n--)
		{
			a&=n;
			if(a==0)
				break;
		}
		cout<<n<<endl;
	}
return 0;
}