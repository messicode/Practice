#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	// your code goes here
	//int M=1000000007;
	ll n,q;cin>>n>>q;
	vector<ll> v(n,0);
	for(int i=0;i<n;i++)
		cin>>v[i];
	while(q--){
	ll ch,l,r,x;cin>>ch>>l>>r;
	switch(ch)
	{
		case 1:cin>>x;
		for (int i = 0; i < n; ++i)
		{
			if(v[i]>=l && v[i]<=r)
				v[i]&=x;
			/* code */
		}
		break;

		case 2:cin>>x;
		for (int i = 0; i < n; ++i)
		{
			if(v[i]>=l && v[i]<=r)
				v[i]|=x;
			/* code */
		}break;

		case 3:cin>>x;
		for (int i = 0; i < n; ++i)
		{
			if(v[i]>=l && v[i]<=r)
				v[i]^=x;
			/* code */
		}break;

		case 4:set<ll> s;
		for (int i = 0; i < n; ++i)
		{
			if(v[i]>=l && v[i]<=r)
				s.insert(v[i]);
			/* code */
		}
		cout<<s.size()<<endl;break;
	}

	}

}