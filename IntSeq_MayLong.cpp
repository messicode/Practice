#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	
	int t;cin>>t;
	while(t--)
	{   ll k,s=0;
	    cin>>k;
	    ll m=(2*k),f=k+1,sec=k+4,i=5;
	    while(m--)
	    {
	        s+=__gcd(f,sec);//cout<<f<<" "<<sec<<" "<<s<<endl;
	        f=sec;sec+=i;i+=2;
	    }
	    cout<<s<<endl;   
	}
	return 0;
}
