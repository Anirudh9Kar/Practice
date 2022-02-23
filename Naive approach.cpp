#include<bits/stdc++.h>
using namespace std;

void Kth_MAX_MIN(int arr[],int n,int k)
{
	sort(arr,arr+n);
	int min=arr[k-1];
	int max=arr[n-k];
	cout<<"K th minimum value in the array is "<<min<<" K th maximum value in the array is "<<max;
}

int main()
{
	int arr[]={44,11,44,15,100,14,77,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=2;
	Kth_MAX_MIN(arr,n,k);
	return 0;
}

// T.C O(Nlogn)       
// S.C O(1)