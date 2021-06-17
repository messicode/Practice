#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
    vector<string> ans(107),in(107);
    for(int i=0;i<107;i++)
        cin>>ans[i];
    for(int i=0;i<107;i++)
        cin>>ans[i];
    cout<<ans[56];
    int i=0;
    for(i=0;i<107;i++)
        if(ans[i]!=in[i]) break;
    if(i==107)cout<<"BCCC";
    else cout<<"MC";
       
}