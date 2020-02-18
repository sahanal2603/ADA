
/*#include <bits/stdc++.h> 
using namespace std; 
  
int binarySearch(int arr[], int low, int high, int key) 
{ 
    if (high < low) 
        return -1; 
    int mid = (low + high) / 2;
    if (key == arr[mid]) 
        return 1; 
    if (key > arr[mid]) 
        return binarySearch(arr, (mid + 1), high, key); 
    return binarySearch(arr, low, (mid - 1), key); 
} 
  

int main() 
{ 
    int N, K,index,T,i,j; 
  		clock_t t; 
    t = clock(); 
    cin>>T; 
    for(j=1;j<=T;j++)
    {
	
    cin>>N;
   
    cin>>K;
    int arr[N];
    for(i=0;i<N;i++)
    	cin>>arr[i];
   index= binarySearch(arr, 0, N, K);
    cout <<index<< endl; 
     t = clock() - t; 
      double time_taken = ((double)t)/CLOCKS_PER_SEC; 
  
    cout<<"fun() took "<<time_taken<< "seconds to execute "<<endl; 
	}
	
   // binarySearch(); 
   
   
    return 0; 
    }*/
    
 #include <bits/stdc++.h> 
using namespace std; 
  
// A recursive binary search function. It returns 
// location of x in given array arr[l..r] is present, 
// otherwise -1 
int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (arr[mid] == x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(arr, mid + 1, r, x); 
    } 
  
    // We reach here when element is not 
    // present in array 
    return -1; 
} 
  
int main(void) 
{ 
   // int arr[] = { 2, 3, 4, 10, 40 }; 
    int x,n,i; 
    clock_t t; 
    t = clock(); 
  
   // int n = sizeof(arr) / sizeof(arr[0]); 
   cout<<"enter no. of elements:"<<endl;
   cin>>n;
   int arr[n];
   for(i=0;i<n;i++)
   	arr[i]=i+1;
   	cout<<"enter key"<<endl;
   	cin>>x;
    int result = binarySearch(arr, 0, n - 1, x); 
    (result == -1) ? cout << "Element is not present in array \n"
                   : cout << "Element is present at index " << result<<endl; 
                   t = clock() - t; 
      double time_taken = ((double)t)/CLOCKS_PER_SEC; 
  
    cout<<"funtion took "<<time_taken<< "seconds to execute "<<endl; 
    return 0; 
}
