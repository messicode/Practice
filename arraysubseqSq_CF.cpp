 #include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;int a,f=1;cin>>n;
		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin>>a;
			int sr=sqrt(a);
			if(!(sr*sr==a)) f=0;
		}
		if(f==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}