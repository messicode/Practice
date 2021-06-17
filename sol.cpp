#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,k;cin>>n>>k;//cout<<"n"<<n<<"k"<<k<<" ";
		if(k==0) 
			{	
			for(int i=0;i<n;i++) 
				{
					cout<<i+1<<" ";
				}
				cout<<endl;
			continue;
			}
	
		if(k>=(n/2.0)) 
			{ 
				cout<<-1<<" "<<endl;
				continue;
			}	
		
		vector<int> sm(n-k,0),l(k,0);
		for(int i=0,j=0;i<n;)
		{
			if(i<n-k) 
				sm[i++]=i;
			else 
				l[j++]=++i;
		}
		
		int c=0;
		for(int i=0;i<n;i++)
		{
			if(i<sm.size()) 
				cout<<sm[i]<<" ";
			if(i<l.size()) 
				cout<<l[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}	