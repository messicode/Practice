vector<int> increment(vector<int> arr ,int N) {
        // // code here
        
        
        while(++arr[N-1]>9){
            if(N==1)
            {
            arr.insert(arr.begin(),1);
            arr[N]%=10;
            break;
            }
            arr[N-1]%=10;
            N--;
        }
        // while(N--){
        //     arr[N]++;
        //     if(arr[N]>10){
        //         arr[N]%=10;
        //     }
        //     else if()break;
            
        // }
        return arr;
        
    }