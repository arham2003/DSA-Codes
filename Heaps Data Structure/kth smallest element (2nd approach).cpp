#include <iostream>
#include <queue>
using namespace std;
// l: starting index
// r: last index
// k: find kth smallest element
int kthSmallest(int arr[],int l, int r, int k){
	//creates max heap
	priority_queue<int> pq;
	
	for(int i = 0;i<k; i++){
		pq.push(arr[i]);
	}
	
	for(int i=k; i<=r;i++){
		if(arr[i] < pq.top()){
			pq.pop();
			pq.push(arr[i]);
		}
	}
	
	int ans = pq.top();
	return ans;
}

int main(){
	int n;
	cout<< "no. of elements in arr: ";
	cin>> n;
	cout<<endl;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}cout<<endl;
	
	int k;
	cin>>k;
	cout<<endl;
	int answer = kthSmallest(arr,0,n-1,k);
	cout<<"Kth Smallest element is: "<< answer;
}
