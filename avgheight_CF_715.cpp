#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;int a[n];
		int e=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
			if(a[i]%2!=0)
			{
				swap(a[e],a[i]);e++;
			}
		
		for(int i=0;i<n;i++) cout<<a[i]<<" ";
			cout<<endl;
	}
}
