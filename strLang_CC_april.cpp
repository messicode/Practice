#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
	int n,k,c=0;string s;
	cin>>n>>k;
	cin>>s;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='*') 
		{
		    c++;
		    if(c>=k) {cout<<"YES"<<endl;break;}
		}   
		else c=0;
	}
	if(c<k)
	cout<<"NO"<<endl;
	}
return 0;
}	