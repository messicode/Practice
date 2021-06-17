#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;cin>>t;
	while(t--)
	{
		int n,m,g=0,i,j;
		cin>>n>>m;
		int f[n];int c[m];
		for(int i=0;i<n;i++) cin>>f[i];
 		for(int i=0;i<m;i++) cin>>c[i];
 		int sw=0;
 		for(i=0,j=0; (i<n && j<m);)
 			{
 				switch(g)
 				{ 	
 					case 0:
 							if(c[j]<f[i])
 								 {sw++;j++;g=1;continue;}
 								i++;continue;
 					case 1:	
 							if(f[i]<c[j])
 								 {sw++;i++;g=0;continue;}
 								j++;
 				}

 			}

 			if(i==n && g==0 && j!=m) sw++;

 			else if(j==m && g==1 && i!=n) sw++;
 				cout<<sw<<endl;
	}
return 0;
}	