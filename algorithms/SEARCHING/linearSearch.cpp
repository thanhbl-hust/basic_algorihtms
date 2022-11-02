//algo - searching - linearSearch

#include<bits/stdc++.h>

using namespace std;

int linearSearch(vector<int> a, int n){
	//a dont have to be sorted;
	for(int i = 0; i < a.size(); i++){
		if(a[i] == n){
			return i + 1;
		}
	}
	return -1;
}

int main(){
	int index, t = 10;
	vector<int> a;
	for(int i = t; i > 0; i--){
		a.push_back(i);
	}
	cout << "Index to find: ";
	cin >> index;
	cout << endl;
	cout << linearSearch(a, index) << endl;
	
	return 0;
	
}