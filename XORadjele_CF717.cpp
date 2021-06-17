 #include<bits/stdc++.h>
using namespace std;
 #define ll long long int
int main()
{
	int t;cin>>t;
	while(t--)
	{ll x=0;

		int n;cin>>n;vector<ll> a(n);
		for(int i=0;i<n;i++) 
		{
			cin>>a[i];x^=a[i];
		}
		if(x==0) 
		{
			cout<<"YES"<<endl;continue;
		}
		int i=0;cout<<x<<" ";
		for(i=0;i<n;i++) 
		{	
			ll c=x^a[i];cout<<c<<" ";
			if(c==a[i]) 
			{
				cout<<"YES";break;
			}
		}
		if(i==n)
			cout<<"NO";cout<<endl;
	}
}