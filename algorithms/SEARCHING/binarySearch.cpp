//algo - searching - binarySearch

#include<bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> a, int n, int left, int right){
	sort(a.begin(), a.end()); //a have to be sorted;
	if(left <= right){
		int middle = (left + right) / 2;
		if(a[middle] == n){
			return middle + 1;
		}else if(a[middle] > n){
			return binarySearch(a, n, left, middle - 1); //find the left vector;
		}else{
			return binarySearch(a, n, middle + 1, right); // find the right vector;
		}
	}
	return -1;
}

int main(){
	vector<int> a;
	int t, index;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> index; a.push_back(index);
	}
	
	cout << "Index to find: ";
	cin >> index;
	cout << endl;
	cout << binarySearch(a, index, 0, t - 1) << endl;
	return 0;
}