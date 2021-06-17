#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	//int M=1000000007;
	int t;cin>>t;
	while(t--)
	{int n,f=1;string st;
		cin>>n>>st;
		set<char> s;s.insert(st[0]);
		for(int i=1;i<n;i++)
		{
			if(st[i]!=st[i-1])
			{
				if(s.find(st[i])==s.end())
				{
					s.insert(st[i]);
				}
				else 
				{
					cout<<"NO"<<endl;f=0;break;
				}
			}
		}
		if(f==1) cout<<"YES"<<endl;
	}

	return 0;
}