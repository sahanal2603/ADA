#include <bits/stdc++.h> 
using namespace std; 
  
void insertionSort(int arr[], int n)  
{  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
   
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
}  
  
void printArray(int arr[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout << arr[i] << " ";  
    cout << endl; 
}  
  

int main()  
{  
    int n,i;
clock_t t;
    cout<<"Enter size of the array:";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	t=clock();
    insertionSort(arr, n);  
	t=clock()-t;
	double time_taken=((double)t)/CLOCKS_PER_SEC;
  	  printArray(arr, n);  
  
	cout<<"Function took "<<time_taken<<" seconds to execute"<<endl;

    return 0;  
}  
