#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
ll s=2;int n,i=2,prev=0,c=0;cin>>n;
	while(1)
	{	
		c=i*4+prev;
		if(c>n)break;
		s+=c;
		prev=i;i=c;
		
	}
	cout<<s;
}
