#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;cin>>t;
	while(t--)
	{ 	int n,o;cin>>n;int a,s,f;cin>>f;cin>>s;//cout<<"size:"<<n<<" ";cout<<s<<" "<<f<<"-";
		if(f==s) 
		{	
			for(int i=2;i<n;i++)
			{
				cin>>a;
				if(f!=a) o=i+1;
			}
			cout<<o<<endl;
		}	
		else
		{ int th;
			cin>>th;
			if(f==th) cout<<2<<endl;
			else cout<<1<<endl;
			for(int i=3;i<n;i++){cin>>th;}
		}

	}
	return 0;
}