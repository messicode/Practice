#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{ 	
		float k1,k2,k3,v,m;
		cin>>k1>>k2>>k3>>v;
		m=k1*k2*k3*v;m=100/m;cout<<m<<" ";m=round(m*100)/100;
		cout<<m;
		if(m<9.575) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}