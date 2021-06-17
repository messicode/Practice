#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a=1,b=1,c=1;
	int g;
	g= (++(a++)) + ++b+c++;
	cout<<g<<" "<<a<<" "<<b<<" "<<c<<" ";cout<<g;
}