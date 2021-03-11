#include<bits/stdc++.h>
using namespace std;


long int fact(int n){
    int a=n;
    while(--n) a*=n; 
    return a;
}
/* TESTING
int main(){
    int a;cin>>a;
    cout<<fact(a);
}
*/
 
 int main()
 {  int t;
     cin>>t;
     while(t--){
         int m,n,k;
         cin>>n>>m>>k;
        while(m>0){
            n-=k;
            if(n>0){
                n--;m--;
            }
            else break;
        }

        if(m==0) cout<<1;
        else if(m>0) cout<<0;
        else if(n>0) {cout<<"in";
            int a= (fact(n)/(fact(m)*fact(n-m)));
            cout<<a+1;
        }
     cout<<"\n";   
     }
 }
 