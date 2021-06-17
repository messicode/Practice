#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int a,y,x,c=0;
		if(y>a) c=1;
		cin>>a>>y>>x;

		if(a<y) {cout<<a*x+1<<endl; continue;}
		if(a==y) { cout<<a*x<<endl;;continue;}
		if(a>y) { cout<<(a-y+1)*x<<endl;}
		
	}
	return 0;
}