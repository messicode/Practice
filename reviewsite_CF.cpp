#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int p,c=0;
		for(int i=0;i<n;i++)
		{
			cin>>p;
			if(p==1 || p==3) 
				c++;
		}
		cout<<c<<endl;

	}
}