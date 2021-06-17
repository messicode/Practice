#include<bits/stdc++.h>
using namespace std;

int main()
{

	int q,n;cin>>n>>q;
	vector<int> t(q,0),a(n,0);

for(int i=0;i<n;i++) cin>>a[i];
for(int i=0;i<q;i++) cin>>t[i];

	for(int i=0;i<q;i++)
	{
		int c=t[i],j,temp;
			for(j=0;j<n;j++)
			{
				if(a[j]==c) break;
			}
			cout<<j+1<<" ";
			temp=a[j];
			for(;j>=1;j--)
			{
				a[j]=a[j-1];
			}
			a[0]=temp;

	}
	return 0;
}
