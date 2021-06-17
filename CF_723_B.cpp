#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	int t;cin>>t;
	
	vector<ll> v;ll i=1;
	while(i<=1111111111)
	{
		v.push_back(i);
		i*=10;i+=1;
	}
	while(t--)
	{
		int n;cin>>n;
		//cout<<v[v.size()-1];
		while(n>10)
		{
			int l=to_string(n).size()-1;
			if(v[l]>n)
				l--;
			//cout<<n<<endl;
			n=n%(v[l]);
		}
		if(!n) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
