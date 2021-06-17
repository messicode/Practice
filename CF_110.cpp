#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool ch(string str)
{ 
	string s=str; 
	int o=0,z=0,p=0;
	for(int i=0;i<s.length();i++)
		if(s[i]=='?') p++;
	if(p==s.length()) return true;
	for(int i=0;i<s.length()-1;i++)
	{
		switch(s[i])
		{
			case '1':
						if(s[i+1]=='?') s[i+1]='0';
						else if (s[i+1]=='1') return false;
						o++;break;
			case '0':
						if(s[i+1]=='?') s[i+1]='1';
						else if (s[i+1]=='0') return false;
						z++;break;
		}
	}
	//cout<<s<<" ";
	return true;

}

int main() {
	int t;cin>>t;
	while(t--)
	{
		int c=0;
		string s;		
		cin>>s;
		for(int i=0;i<s.length();i++)
			for(int j=2;j<=s.length()-i;j++)
				{ string o=s.substr(i,j);
					bool ans=ch(o);//cout<<o<<" "<<ans<<endl;
					if(ans) c++;
				}
		
		c+=s.length();
		cout<<c<<endl;
	}
	return 0;
}
