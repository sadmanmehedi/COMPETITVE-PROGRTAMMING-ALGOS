#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int binary_search(int key) {
	int l = 0, r = v.size()-1;

	while(l <= r) {
		int mid = (l + r)/2;
		if(arr[mid] == key) return mid;
		else if(arr[mid] > key) r = mid-1;
		else l = mid+1;
	}

}


int main() {

}
