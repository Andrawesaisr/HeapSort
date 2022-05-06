#include <iostream>
#include <iomanip>
#include<string>
#include <cmath>
#include<algorithm>
#include<vector>
#include<deque>
#include<set>
#include<map>
#include<bitset>
#include<stack>
#include<queue>
#define ll long long
using namespace std;
void fast() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
}

void heapify(ll arr[],ll n,ll i){
ll left=i*2+1;
ll right=i*2+2;
ll max=i;
if(left<n && arr[left]>arr[max]){
max=left;
 }
if(right<n && arr[right]>arr[max]){
max=right;
 }
if(max!=i){
    
    swap(arr[i],arr[max]);
    heapify(arr,n,max);
  }
}
void BuildHeap(ll arr[],ll n){
    
    for(ll i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
}
void HeapSort(ll arr[],ll n){
BuildHeap(arr,n);
for(int i=n-1;i>=0;i--){
    
    swap(arr[0],arr[i]);

    heapify(arr,i,0);
  }
}

void print(ll arr[],ll n){
for(int i=0;i<n;i++){
cout<<arr[i]<<"  ";

   }
}

int main() {
    fast();
    ll n;
 cin>>n;
 ll *arr=new ll[n];
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }

HeapSort(arr,n);
print(arr,n);
}