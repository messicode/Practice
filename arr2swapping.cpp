#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i;cin>>n;vector<int> a(n,0),b(n,0);
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	int d,m=-1,pos=0,sum=0;
	for (i = 0; i < (n); ++i)
	{
		d=abs(a[i]-b[i]);sum+=d;
		if(d>m) {m=d;pos=i;}
	}
	int posb=0,mn=INT_MAX;
	for(i=0;i<n;i++)
	{
		d=abs(a[pos]-b[i]);
		if(mn<d){mn=d;posb=i;}
	}
	sum=sum-b[pos]+b[posb];q

}