#include<bits/stdc++.h>
using namespace std;
    int majorityElement(int a[], int size)
    {   int c=1,i,j=size+1,pos=size;
        sort(a,a+size);
        for(i=1;i<size;i++) 
        {
            if(a[i-1]==a[i]) c++;
            else {
                if(c>(size/2) &&  (j==size+1 || c>j)) {j=c;pos=i-1;}
                c=1;
            }
            
        }
        if(j==size+1 && c>(size/2)) return a[i-1];
        else if(j!=size+1) return a[pos];
        return -1;
        
    }
int main()
{
	int n=5;
	int a[n]={3,1,3,3,2};
	//cin>>n;for(int i=0;i<n;i++) cin>>a[i];
	cout<<majorityElement(a,n);

}