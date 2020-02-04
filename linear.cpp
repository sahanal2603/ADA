#include <iostream> 
using namespace std; 
  
int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return 1; 
    return -1; 
} 
  
int main(void) 
{ 
  int i,j,k,n,t;
cin>>t;
for(j=1;j<=t;j++)
{
 cin>>n>>k;
 int arr[n];
 for(i=0;i<n;i++)
	cin>>arr[i];
 
 
    int result = search(arr, n, k); 
   cout<<result<<endl;
}
   return 0; 
} 
