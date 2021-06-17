#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	long long M=1000000007;
	while(t--)
    {
        long long n,a=1;cin>>n;
        while(n--)
         {a*=2;a%=M;}
        a/=2;
        cout<<a<<endl;
    }
	
	return 0;
}
