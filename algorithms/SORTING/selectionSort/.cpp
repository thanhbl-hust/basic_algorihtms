//algo - sorting - selectionSort - cpp

#include<bits/stdc++.h>

using namespace std;

void selectionSort(int a[100], int length){
	for(int i = 0; i < length - 1; i++){
		int minindex = i;
		for(int j = i + 1; j < length; j++){
			if(a[j] < a[minindex]){
				minindex = j;
			}
		}
		if(minindex != i){
			swap(a[minindex], a[i]);
		}
	}
}

void show(int a[100], int length){
	for(int i = 0; i < length; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	int a[100];
	for(int i = 0; i < t; i++){
		cin >> a[i];
	}
	cout << "Array before: " << endl;
	show(a, t);
	
	cout << "Array after: " << endl;
	
	selectionSort(a, t); //sorting array;
	show(a, t); // print out array after sorted;
	return 0;
}