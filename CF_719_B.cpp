#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	//int M=1000000007;
	int t,a=0;cin>>t;
	vector<int> v;
	while(1)
	{	a++;
		if(a<1e9)
			{for(int i=1;i<10;i++)
				v.push_back(a*i);
			}
		else break;
		a*=10;
	}
	// for(int i=0;i<v.size();i++)
	// 	cout<<v[i]<<" ";
	while(t--)
	{
		int n,c=0;cin>>n;
		for(int i=0;i<v.size();i++)
		{
			if(n>=v[i]) c++;
		}
		cout<<c<<endl;
	}
}