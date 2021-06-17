#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isSafe(vector<ll>& a,int mid,int c)
	{	int k=1,p=a[0];	
		for(int i=1;i<a.size();i++)
		{
			if(a[i]-p>=mid)
			{
				p=a[i];
				k++;
			}
		}
		//cout<<k<<" "<<mid<<endl;
		return k>=c;
	}



int main() {
	// your code goes here
	int t;cin>>t;
	
	while(t--)
	{
		int n,c;cin>>n>>c;
		vector<ll> v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];

		}	
		sort(v.begin(),v.end());
		int l=1,h=v[v.size()-1]-v[0];ll res=-1;
		while(l<=h)
		{
			int mid=l+(h-l)/2;
			if(isSafe(v,mid,c))
			{
				res=mid;
				l=mid+1;
			}
			else h=mid-1;
		}
		cout<<res<<endl;
	}
	return 0;
}