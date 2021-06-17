#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
	int a=3,b=11,res=1;
	while(b>0)
	{
		cout<<b<<" "<<a<<" - "<<res<<" \n";

		if(b&1)
		{
			res*=a;
		}
		a*=a;
		b=b>>1;
	}
	cout<<res<<" \n";

}