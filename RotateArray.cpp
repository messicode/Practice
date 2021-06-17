#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int *rev(int *arr,int i,int j){
        while(i<j)
        {
            swap(arr[i++],arr[j--]);
        }
        return arr;
    }
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        
        rev(arr,0,n-1);
        rev(arr,0,n-d-1);
        rev(arr,n-d,n-1);
    }
};

int main()
{   int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        d%=n;
        cin>>n>>d;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
            Solution o;
        o.rotateArr(arr,n,d);
        for(int i=0;i<n;i++) cout<<arr[i];
    }
}
// #include <bits/stdc++.h>
// using namespace std;


/*Fuction to get gcd of a and b*/
// int gcd(int a, int b)
// {
//     if (b == 0)
//         return a;

//     else
//         return gcd(b, a % b);
// }

// /*Function to left rotate arr[] of siz n by d*/
// void leftRotate(int arr[], int d, int n)
// {
//     /* To handle if d >= n */
//     d = d % n;
//     int g_c_d = gcd(d, n);
//     for (int i = 0; i < g_c_d; i++) {
//         /* move i-th values of blocks */
//         int temp = arr[i];
//         int j = i;

//         while (1) {
//             int k = j + d;
//             if (k >= n)
//                 k = k - n;

//             if (k == i)
//                 break;

//             arr[j] = arr[k];
//             j = k;
//         }
//         arr[j] = temp;
//     }
// }
// Function to print an array
// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//         cout << arr[i] << " ";
// }

// /* Driver program to test above functions */
// int main()
// {
//     int arr[] = {1,2,3,4,5,6,7,8};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // Function calling
//     leftRotate(arr, 6, n);
//     printArray(arr, n);

//     return 0;
// }
