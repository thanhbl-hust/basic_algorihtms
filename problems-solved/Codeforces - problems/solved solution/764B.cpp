#include<bits/stdc++.h>
using namespace std;
//Codeforces file;
//dont overthinking, think easily;
//dont complicate problems;
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
//Bui_Lam_Thanh_HUST_K65;
 

//1. Quy hoach dong: a[0] - a[1] = a[0] + a[1] --......
//2. Lam tron so: cout << fixed << setprecision(<number_you_want_to_get>) << <value_you_want_to_get> << endl;
//3. Set in C++
//set<int> index; //index is name of set<int>;
//   |  for(set<int>::iterator it = index.begin(); it != index.end(); it++){
//   |          cout << *(it) << " ";
//   |  }

//4. Count function: Dem phan tu trong string, vector, int a[100];
//   |  count in vector, string: count(a.begin(), a.end(), <value> );
//   |  count in array         : count(a, a + a.size(), <value>);

void change1(int a[200000], int t){ //time limit if t get too big;
	//t: length of array a;
	int start = 0;
	while(start < t / 2){
		//reverse in t / 2 times;
		int st = start;
		int end = t - 1 - st;
		while(st < end){
			int tmp = a[st];
			a[st] = a[end];
			a[end] = tmp;
			st += 1;
			end -= 1;
		}
		start += 1;
	}
}

void change(int a[200000], int t){
	//if t % 2 == 0; will reverse t / 2;
	//if t % 2 != 0; will reverse t / 2;
	
	int st = 0;
	int end = t - 1;
	
	while(st < end){
		if(st % 2 == 0){
			int tmp = a[st];
			a[st] = a[end];
			a[end] = tmp;
		}
		st += 1;
		end -= 1;
	}
	
}

int main() {
	
	int t;
	cin >> t;
	int a[200000];
	
	for(int i = 0; i < t; i++){
		cin >> a[i];
	}
	
	change(a, t);
	for(int i = 0; i < t; i++){
		cout << a[i] << " ";
	}
	
	return 0;
}