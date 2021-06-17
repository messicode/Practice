 #include<bits/stdc++.h>
using namespace std;
 #define ll long long int
int main()
{
	int t;cin>>t;
	while(t--)
	{ll r,b,d;int f=0;
		
		cin>>r>>b>>d;
		if(r<b)swap(r,b);//cout<<p<<" "; 
		
		//cout<<p<<" "<<b1<<endl;
		if(r<=((d+1)*b)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}	