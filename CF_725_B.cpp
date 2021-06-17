#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
	int t;cin>>t;
	while(t--)
	{
		int n,s=0;cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
			s+=v[i];
		}
		if(s%n!=0){cout<<-1<<endl;continue;}
		s=s/n;int c=0;
		for (int i = 0; i < n; ++i)
		{
			if(v[i]>s)c++;
			/* code */
		}
		cout<<c<<endl;
	}
}