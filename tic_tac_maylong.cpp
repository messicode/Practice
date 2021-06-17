    // #include <iostream>
    // using namespace std;

    // int main() {
    
    	
    // 	int t;cin>>t;
    // 	while(t--)
    // 	{
    // 	    char t[3][3]; int xc=0,oc=0,fx=0,fo=0;
    // 	    for(int i=0;i<3;i++)
    // 	    for(int j=0;j<3;j++)
    // 	    {
    // 	        char a;
    // 	        cin>>a;t[i][j]=a;
    // 	        if(a=='X') xc++;
    // 	        else if(a=='O')oc++;
    // 	    }
    // //	    cout<<xc<<" "<<oc <<" | ";
    // 	    if(xc!=oc && (xc-1)!=oc){cout<<"3"<<endl;continue;}//COUNT
    // 	    for(int i=0;i<3;i++)//HORI
    //     	   {
    //     	       if(t[i][0]==t[i][1] && t[i][1]==t[i][2]) 
    //     	       {
    //     	           if(t[i][0]=='X') fx++;
    //     	           else if(t[i][0]=='O') fo++;
    //     	       }    
    //     	   }  
    //     	   for(int i=0;i<3;i++)//VERT
    //     	   {
    //     	       if(t[0][i]==t[1][i] && t[1][i]==t[2][i]) 
    //     	       {
    //     	           if(t[0][i]=='X') fx++;
    //     	           else if(t[0][i]=='O') fo++;
    //     	       }    
    //     	   }         
    //     	    if(t[0][0]==t[1][1] && t[1][1]==t[2][2])//D1 
    //     	      {
    //     	           if(t[0][0]=='X') fx++;
    //     	           else if(t[0][0]=='O') fo++;
    //     	       }    
        	       
    //     	    if(t[0][2]==t[1][1] && t[1][1]==t[2][0]) //D2
    //     	      {
    //     	           if(t[0][2]=='X') fx++;
    //     	           else if(t[0][2]=='O') fo++;
    //     	       }    
        	       
    //     	//   cout<<fx<<" "<<fo<<" | ";
    //            if (fx==2 && xc==5){cout<<"1"<<endl;continue;} //OVER   
    //     	   if ((fx+fo)>1 || (fx==1 && oc==xc) || (fo==1 && oc==(xc-1))){cout<<"3"<<endl;continue;}//WINNER>1
    //     	   if ((xc+oc)==9 || (fx+fo)==1){cout<<"1"<<endl;continue;}
    //             cout<<"2"<<endl;
    // 	}
    // 	return 0;
    // }
    
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ci cin>>
#define co cout<<
#define nl endl

int main() 
{
    ll t;
    ci t;
    while(t--)
    {
        char a[3][3];
        int xc=0,oc=0,fxc=0,fxo=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                {
                    ci a[i][j];
                    if(a[i][j]=='X') xc++;
                    else if(a[i][j]=='O') oc++;
                }
        }
        // for(int i=0;i<3;i++)
        // {
        //     for(int j=0;j<3;j++)
        //         {
        //             if(a[i][j]=='X') xc++;
        //             else if(a[i][j]=='O') oc++;
        //         }
        // }
        if(xc!=oc&&(xc-1)!=oc) 
        {
            cout<<'3'<<endl;
            continue;
        }
        for(int i=0;i<3;i++)
        {
            if(a[0][i]==a[1][i]&&a[1][i]==a[2][i])
            {
                if(a[0][i]=='X') fxc++;
                else if(a[0][i]=='O') fxo++;
            }
        }
        for(int i=0;i<3;i++)
        {
            if(a[i][0]==a[i][1]&&a[i][1]==a[i][2])
            {
                if(a[i][0]=='X') fxc++;
                else if(a[i][0]=='O') fxo++;
            }
        }
        if(a[0][0]==a[1][1]&&a[1][1]==a[2][2])
        {
            if(a[0][0]=='X')
                fxc++;
            else if(a[0][0]=='O')
                fxo++;
        }
        if(a[0][2]==a[1][1]&&a[1][1]==a[2][0])
        {
            if(a[0][0]=='X')
                fxc++;
            else if(a[0][0]=='O')
                fxo++;  
        }
        
        if(fxc==2 && xc==5) {cout<<'1'<<endl; continue;}
        if((fxc+fxo)>1||(fxo==1&&xc==oc+1)||(fxc==1&&oc==xc)) {cout<<'3'<<endl;continue;}
        if((xc+oc)==9||(fxc+fxo)==1) {cout<<'1'<<endl;continue;}
        cout<<'2'<<endl;
    }
    return 0;
}