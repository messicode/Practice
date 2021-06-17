#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int t;cin>>t;
	while(t--)
	{
		int n,mx=INT_MIN,mn=INT_MAX;
		cin>>n;
		set<int> s;
		for(int i=0;i<n;i++)
			{int a;cin>>a;s.insert(a);mn=min(mn,a);mx=max(a,mx);}
		if(mn<0) {cout<<"NO"<<endl;continue;}
		for(int i=0;i<=mx+1;i++)
			s.insert(i);
		cout<<"YES"<<endl;
		cout<<s.size()<<endl;
		for(auto x:s)
			cout<<x<<" ";
		cout<<endl;
	}
}