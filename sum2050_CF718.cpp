 #include<bits/stdc++.h>
using namespace std;
 #define ll long long int
int main()
{
	int t;cin>>t;
	while(t--)
	{ll n;
		cin>>n;
		if(n%2050!=0)
			cout<<-1<<endl;
		else
			{n/=2050;int s=0;
				// while(n%10==0) n/=10;
				while(n) {s+=n%10;n/=10;}
				cout<<s<<endl;
			}
	}
}