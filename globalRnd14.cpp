#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	//int M=1000000007;
	int t;cin>>t;
	while(t--){
		long long n;
		int f=0;cin>>n;
		if(n==4) f=0;
		else if(n==1 || n%2!=0) f=1;
		else
		{n/=2;
			long long sq=sqrt(n);
			sq*=sq;
			if(sq!=n) f=1; 
		}
		if(f) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}