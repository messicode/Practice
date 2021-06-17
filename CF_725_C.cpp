#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
	int t;cin>>t;
	while(t--)
	{
		int n,l,r;
		cin>>n>>l>>r;
		vector<int> a(n);
		for (int i = 0; i < n; ++i) cin>>a[i];
		sort(a,a+n);
		int lo=0,hi=n-1;
		while(lo<=hi)
		{
			int mid=lo+(hi-lo)/2;

			if(a[mid]+a[lo]>l)
				{
					resl=
					hi--;
				}
			if(a[mid]+a[lo]<l)lo++;
		}


	}
}