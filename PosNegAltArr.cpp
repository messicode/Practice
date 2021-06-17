
	void rearrange(int arr[], int n) {
	 int d[n],p=0,m=0;
	    for(int i=0,k=0,j=n-1;k<=j;i++){
	        if(arr[i]>=0) 
	        {d[j]=arr[i];j--;p++;}
	        else 
	        {d[k]=arr[i];k++;m++;}
	    } 
	 
	    for(int i=0,j=0,k=0;i<n;){
	   
	            if(j<p || k>m)
	            {
	                arr[i++]=d[n-1-j];j++;
	            }
	            if(k<m || j>p)
	            {
	            arr[i++]=d[k++];
	            }
	    }       
	}