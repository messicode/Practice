 #include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;vector<int> a(n);
		for(int i=0;i<n;i++) cin>>a[i];
		int b=0,e=n-1;
		while(k>0)
		{
			if(a[b]<1)b++;
			if(e<=b) break;
			if(a[b]>=1)
			{
				a[b]--;a[e]++;k--;
			}

		}
	
		for (int i = 0; i < n; ++i)
		{
			cout<<a[i]<<" ";
			/* code */
		}
		cout<<endl;
	}
}