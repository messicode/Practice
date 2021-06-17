#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int a,b,z=0,o=0,q=0;string s;
		cin>>a>>b>>s;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='?') q++;
			if(s[i]=='0') z++;
			if(s[i]=='1') o++; 
		}
		if()

		cout<<s<<" "<<q<<" "<<z<<" "<<o<<" "<<endl;
	}
}