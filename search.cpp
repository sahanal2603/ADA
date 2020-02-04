// C++ program to implement binary search in sorted array 
#include <bits/stdc++.h> 
using namespace std; 
  
int binarySearch(int arr[], int low, int high, int key) 
{ 
    if (high < low) 
        return -1; 
    int mid = (low + high) / 2; /*low + (high - low)/2;*/
    if (key == arr[mid]) 
        return 1; 
    if (key > arr[mid]) 
        return binarySearch(arr, (mid + 1), high, key); 
    return binarySearch(arr, low, (mid - 1), key); 
} 
  
/* Driver code */
int main() 
{ 
    // Let us search 3 in below array 
   // int arr[100] = { 5, 6, 7, 8, 9, 10 }; 
    int N, K,index,T,i,j; 
   // N = sizeof(arr) / sizeof(arr[0]); 
    cin>>T; 
    for(j=1;j<=T;j++)
    {
	
    cin>>N;
   // cout<<" ";
    cin>>K;
    int arr[N];
    for(i=0;i<N;i++)
    	cin>>arr[i];
   index= binarySearch(arr, 0, N, K);
    cout <<index<< endl; 
	}
    return 0; 
} 
