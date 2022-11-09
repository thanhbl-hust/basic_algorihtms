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

bool check(int a[100], int length, int n){
	for(int i = 0; i < length; i++){
		if(a[i] == n){
			return true; //yes, in the array;
		}
	}
	return false;
}

int main() {
	
	int n, aa, bb;
	cin >> n >> aa >> bb;
	int a[100];
	int b[100];
	for(int i = 0; i < aa; i++){
		cin >> a[i];
	}
	for(int i = 0; i < bb; i++){
		cin >> b[i];
	}
	
	int counta = 0;
	int countb = 0;
	for(int i = 1; i <= n; i++){
		if(counta < aa && check(a, aa, i) == true){
			cout << 1 << " ";
			counta += 1;
		}else{
			cout << 2 << " ";
			countb += 1;
		}
	}
	
	
	return 0;
}