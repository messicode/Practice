#include<bits/stdc++.h>
using namespace std;

const int N=1e9+7;

int main(){
int n;
 cin>>n;long long int a,s=1;
 while(n--){
 	cin>>a;
 	s*=a;
 	s%=N;
 }
 cout<<s<<endl;
}