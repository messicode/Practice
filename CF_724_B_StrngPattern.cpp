#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		string g;cin>>g;
	vector<string> strings={""};
	
	int f=0;for(int x=0;x<3;x++)
	{if(f==1) break;
		vector<string> ns;
		for(auto &str:strings)
		{if(f==1) break;
			for(int i=0;i<26;i++)
			{ if(f==1) break;
				string c=str+char('a'+i);
				ns.push_back(c); 
				if(g.find(c)==string::npos) {cout<<c<<endl;f=1;} 
			}
		}
		strings.swap(ns);
	}
	}
}