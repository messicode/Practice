#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,x,pm=INT_MIN;
		cin>>n>>x;int a,b;
		for(int i=0;i<n;i++)
		{
			cin>>a>>b;c={a,b};
			if(a<=x)
			{
				pm=max(pm,b);
			}
		}

		cout<<pm<<endl;
	}
		return 0;
}