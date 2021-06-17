#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--)
		{	fflush(stdout);
			//A:
			// int n,m=INT_MAX;cin>>n;
			// vector<int> a(n);
			// for(int i=0;i<n;i++) 
			// {
			// 	cin>>a[i];
			// 	m=min(a[i],m); 
			// } 
			// int c=0;
			// for(int i=0;i<n;i++) 
			// {
			// 	if(a[i]>m) c++;
			// }
			// cout<<c<<endl;

			//B:
			int n,c=0,ng=0,p=0,z=0;cin>>n;
			ll nn2=0,nn=0,d=INT_MAX;
			vector<ll> v(n);
			for(int i=0;i<n;i++) 
			{	
				cin>>v[i];
			}
			
			sort(v.begin(),v.end());
			
			for(int i=0;i<n;i++) 
			{	
				ll a=v[i];
				if(a<0)	ng++;
				
				else if(a>0) p++; 
				else if(a==0) z++;	

			}
			//cout<<ng<<" "<<p<<" "<<z<<" "<<endl; 
 			if(ng>1)
 			{p=0;int i=0;
 				while(v[i+1]<0)
 				{
 					d=min(abs(v[i]-v[i+1]),d);i++;
 				}

	 			for(int i=0;i<n;i++) 
	 			{	
	 				if(v[i]>0 && v[i]<=d) p++;
	 			}
 			}
			c+=ng;
			if(z>1)c+=z;
			else if(p>0)c=c+1+z;
			else if(p==0 && z==1)c+=1;
			cout<<c<<endl;

		}
		return 0;
}