#include <bits/stdc++.h>
using namespace std;

//Time Complexity: log(n-1)+log(n-2)+ ... +log(2)+log(1)
//Space Complexity: O(n)

vector<int>arr;

int b_search(int l, int n){
	int r = arr.size()-1;
	int res = -1;
	while(l <= r){
		int m = (l+r)/2;
		if(arr[m]==n) return m;
		else if(arr[m] > n){
			r = m-1;
		}
		else
			l = m+1;
	}

	return res;
}

void fun(int n){
	for(int i=0; i<arr.size()-1; i++){
		int x = arr[i];
		int y = n-arr[i];
		int r = b_search(i, y);
		if(r!= -1){
			cout<<i+1<<" "<<r+1<<endl;
			return;
		}
	}
	cout<<"Not found"<<endl;

}

int main() {
  ios::sync_with_stdio(false); cin.tie(0);
  int sz = 5;
  arr.resize(sz);
  
  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;
  arr[3] = 4;
  arr[4] = 5;

  int n = 5;

  fun(n);

}