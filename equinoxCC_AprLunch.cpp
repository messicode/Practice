#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int M=1000000007;
		int n;
		cin>>n;
		long long a,s=0;
		while(n--)
		{
			cin>>a;s=(((s%M)+M)%M);
			s+=a;
		}
		int q;	cin>>q;
		int x; 	
		for(int j=0;j<q;j++)
		{
			cin>>x;
		}

		for(int j=0;j<q;j++)
		{
			s*=2;s=(((s%M)+M)%M);
			cout<<s<<endl;
		}
	
	return 0;
}
