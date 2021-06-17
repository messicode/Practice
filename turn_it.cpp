#include<bits/stdc++.h>
using namespace std;
int main()
{	int t;
	cin>>t;
	while(t--)
		{
		int u,v,a,s;double v1;
			cin>>u>>v>>a>>s;
			if(u==v) {
				cout<<"YES"<<endl;
			}
			else{
				int ans=u*u-2*(a*s);
				if(ans<0) cout<<"NO"<<endl; 
				else if(sqrt(ans)<=v) cout<<"YES"<<endl;
				else cout<<"NO"<<endl;
		}
		}
		return 0;
}