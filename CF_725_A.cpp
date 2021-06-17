#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
	int t;cin>>t;
	while(t--)
	{
		int n,mx=-1,mn=INT_MAX,pmx=0,pmn=0;cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++) 
			{
				cin>>a[i];
			}
			for (int i = 0; i < n; ++i)
			{
				if(mx<a[i]) 
				{
					mx=a[i];
					pmx=i;
				}
				if(mn>a[i]) 
				{
					mn=a[i];
					pmn=i;
				}
			}
		if(pmx<pmn)swap(pmn,pmx);
		int g=pmn+(n-pmx)+1;
		int as=min(g,(n-pmn));
		as=min(as,pmx+1);
		cout<<as<<endl;
	}
}