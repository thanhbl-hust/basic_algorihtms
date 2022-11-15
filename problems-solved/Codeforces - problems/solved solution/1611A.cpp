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
 
bool check(vector<int> a){
	for(int i = 0; i < a.size(); i++){
		if(a[i] % 2 == 0){
			return true;
		}
	}
	return false;
}
 
int solution(int n){
	vector<int> digits;
	while(n != 0){
		digits.push_back(n % 10);
		n /= 10;
	}
	if(check(digits) == false){
		return -1;
	}
	if(digits[digits.size() - 1] % 2 == 0){
		return 1;
	}
	return 2;
}
 
int main() {
	
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		int index;
		cin >> index;
		if(index % 2 == 0){
			cout << 0 << endl;
		}else{
			cout << solution(index) << endl;
		}
	}
	
	return 0;
}