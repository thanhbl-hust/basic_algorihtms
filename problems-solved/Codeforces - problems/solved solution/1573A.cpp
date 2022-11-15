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
int change(char s){
	if(s == '0') return 0;
	if(s == '1') return 1;
	if(s == '2') return 2;
	if(s == '3') return 3;
	if(s == '4') return 4;
	if(s == '5') return 5;
	if(s == '6') return 6;
	if(s == '7') return 7;
	if(s == '8') return 8;
	if(s == '9') return 9;
}



int solution(int length, string s){
	int sum = 0;
	int count = 0;
	vector<int> digits;
	for(int i = 0; i < length; i++){
		digits.push_back(change(s[i]));
		sum += digits[i];
		if(digits[i] != 0){
			count += 1;
		}
	}
	
	
	//count is numbers of digits[i] != 0;
	if(digits[length - 1] == 0){
		return sum + count;
	}
	return sum + count - 1;
}

int main() {
	
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
		int length; cin >> length;
		string s; cin >> s;
		cout << solution(length, s) << endl;
	}
	
	return 0;
}