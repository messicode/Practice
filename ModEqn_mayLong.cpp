   
#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main() 
{
    int t;cin>>t;
    while(t--)
    {
    	ll n,m,c=0;
    	cin>>n>>m;
    	for(int i=2;i<=n;i++)
    	{int x=m%i;
    		for(int j=1;j<i;j++)
    		{
    			if((x%j)==(m%j))c++;
    		}
    	}
    	cout<<c<<endl;
    }	
    return 0;
}
 