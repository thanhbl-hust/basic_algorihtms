//algo - sorting - insertionSort - cpp

#include<bits/stdc++.h>

using namespace std;

void insertionSort(int a[100], int length){
	for(int i = 1; i < length; i++){
		int key = a[i];
		int j = i - 1;
		while(j >= 0 && a[j] > key){
			a[j + 1] = a[j];
			j -= 1;
		}
		a[j + 1] = key; //phan tu dung truoc nhat va lon hon key;
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
	
	insertionSort(a, t); //sorting array;
	show(a, t); // print out array after sorted;
	return 0;
}