//algo - sorting - bubblesort

#include<bits/stdc++.h>

using namespace std;

void bubbleSort(int a[100], int length){
	for(int i = 0; i < length - 1; i++){
		for(int j = 0; j < length - 1 - i; j++){
			if(a[j] > a[j + 1]){
				swap(a[j], a[j + 1]);
				//using third index (tmp);
			}
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
	
	bubbleSort(a, t); //sorting array;
	show(a, t); // print out array after sorted;
	return 0;
}