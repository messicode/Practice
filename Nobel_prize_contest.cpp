#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;cin>>t;
	while(t--)
	{	
	//	int n,m,a,j=0;
	// 	unordered_set<int> s;
	// 	cin>>n>>m;
	// 	for(int i=0;i<n;i++)
	// 	{
	// 		cin>>a;
	// 		if(s.find(a)==s.end()){
	// 			{s.insert(a);j++;}
	// 		}
	// 	}
		
	// 	if(j<m) cout<<"YES"<<endl;
	// 	else cout<<"NO"<<endl;
		// 	int f=0;
		// for(int i=1;i<=m;i++)
		// 	{
		// 		if(s.find(m)==s.end()) {cout<<"YES"<<endl;f=1;break;}
		// 	}
		// 	if(f==0) cout<<"NO"<<endl;

///////////////////////////////

		int n,m,j=1;
		cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=1;i<n;i++)
		{
			if(a[i]!=a[i-1]) j++;
		}


		if(j<m) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;


	}
	return 0;
}