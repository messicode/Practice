#include<bits/stdc++.h>
using namespace std;
#define ll long long


bool gcd(ll a,ll b)
{
	if(b==0) {
		if(a==1) return false;
		else return true;
	}
	gcd(b,a%b);
}


int main()
{
	int t;cin>>t;
	while(t--)
	{
		ll a;cin>>a;
		for(ll i=a;;i++)
		{
			ll s=0;ll num=i; 
			while(num)
			{
				s+=(num%10);
				num/=10;
			}

			if(gcd(i,s)) {cout<<i<<endl;break;}

		}	 

	}

return 0;
}