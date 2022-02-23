#include<bits/stdc++.h>
using namespace std;

void Kth_small(int arr[],int n,int k)
{
	priority_queue<int>maxheap;
	for(int i=0;i<n;i++)
	{
		maxheap.push(arr[i]);
		if(maxheap.size()>k)
		{
			maxheap.pop();
		}
	}
	cout<<maxheap.top();
}

void Kth_largest(int arr[],int n,int k)
{
	priority_queue<int,vector<int>,greater<int>> minheap;
	for(int i=0;i<n;i++)
	{
		minheap.push(arr[i]);
		if(minheap.size()>k)
		{
			minheap.pop();
		}
	}
	cout<<minheap.top();
}

int main()
{
	int arr[]={7,10,4,3,20,15};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=2;
	cout<<k<<"nd smallest element in the array is ";
	Kth_small(arr,n,k);
	cout<<endl;
	cout<<k<<"nd largest element in the array is ";
	Kth_largest(arr,n,k);
	return 0;
}


//IF SMALLEST ELEMENT IS ASKED ALWAYS GO FOR MAX HEAP .
//IF LARGEST ELEMENT IS ASKED ALWAYS GO FOR MIN HEAP .


// T.C O(NlogK)        O(Nlogk)+O(Nlogk)+O(n)+O(n)       
// S.C O(1)