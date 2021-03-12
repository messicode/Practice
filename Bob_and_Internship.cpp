#include<bits/stdc++.h>
using namespace std;

long long int fact(int n){
    int a=n;
    while(--n) a*=n; 
    return a;
}
 int main()
 {  int t;
     cin>>t;
     while(t--){
         int m,n,k;
         cin>>n>>m>>k;
         long long int r=n-1-((m-1)*(k+1));int d=0;
         if(r<0){cout<<0;return 0;}
         while(r){
            d+=fact(m-1+r)/fact(r);r--;
            d=d%(1000000007);
         }
         d++;
         d/=(fact(m-1));
         d=d % (1000000007);cout<<d;
         cout<<"\n";   
     }
 }
