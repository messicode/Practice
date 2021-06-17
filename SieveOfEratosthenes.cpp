//Closest Prime using sieveOfEra

#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
	int n=1000000000;
	int m;cin>>m;
	
	vector<bool> a(n+1,true);
	//memset(a,true,sizeof(a));
	a[0]=false;a[1]=false;
	for(int i=2;i*i<=n;i++)
	{
		if(a[i])
		{
			for(int j=i*i;j<=n;j+=i)
				a[j]=false;
		}
	}
//	cout<<a[16];
	vector<int> p;
	for(int i=2;i<=n;i++)
	if(a[i]) 
	{	
	p.push_back(i);
	}

	int l=sqrt(m),h=p.size()-1,res=2;
//	cout<<p[p.size()-1];
	
	while(l<=h)
	{
		int mid=l+(h-l)/2;
		//cout<<mid<<" "<<res<<endl;
		if(mid==0 || mid==(p.size()-1)){res=p[mid]; break;} 
		if(p[mid]==m) {res=p[mid-1]; break;}
		if(p[mid+1]>m && p[mid]<m)
			{res=p[mid]; break;}

		if(p[mid]>=m) h=mid-1;
		else if(p[mid]<m) l=mid+1;

	}
	cout<<res<<" ";
}